#include "editmainwindow.h"
#include "ui_editmainwindow.h"

EditMainWindow::EditMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::EditMainWindow)
{
    ui->setupUi(this);
    ui->casterTableWidget->setHorizontalHeaderLabels(QStringList() << "Keyword" << "Value");
    ui->casterTableWidget->horizontalHeader()->setClickable(false);
    ui->casterTableWidget->setEnabled(false);
    ui->activeCasterLineEdit->setEnabled(false);

    QObject::connect(ui->savePB, SIGNAL(clicked()), this, SLOT(saveClicked()));
    QObject::connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(fileSaveClicked()));
    QObject::connect(ui->actionSave_As, SIGNAL(triggered()), this, SLOT(fileSaveAsClicked()));
    QObject::connect(ui->actionOpen, SIGNAL(triggered()), this, SLOT(fileOpenClicked()));
    QObject::connect(ui->casterComboBox, SIGNAL(currentIndexChanged(QString)), this, SLOT(casterComboSelected(QString)));
    QObject::connect(ui->casterTableWidget, SIGNAL(cellChanged(int,int)), this, SLOT(casterTableCellChanged(int,int)));
    QObject::connect(ui->actionExit, SIGNAL(triggered()), this, SLOT(safeQuit()));
    QObject::connect(ui->actionNew, SIGNAL(triggered()), this, SLOT(fileNewClicked()));
    QObject::connect(ui->cancelPB, SIGNAL(clicked()), this, SLOT(safeQuit()));
    QObject::connect(ui->activeCasterLineEdit, SIGNAL(editingFinished()), this, SLOT(activeCasterChanged()));
    QObject::connect(ui->deletePB, SIGNAL(clicked()), this, SLOT(deleteCaster()));
    QObject::connect(ui->addPB, SIGNAL(clicked()), this, SLOT(addCaster()));

    m_parmsChanged = false;
    m_casterConfig = NULL;

    ui->statusBar->showMessage("File->New to create new configuration", 3000);
}

EditMainWindow::~EditMainWindow()
{
    delete ui;
    if (m_casterConfig)
    {
        iniparser_freedict(m_casterConfig);
    }
}

void EditMainWindow::saveClicked()
{
    if (m_workingFileName.isEmpty())
    {
        fileSaveAsClicked();
    }
    else
    {
        QString target = ui->activeCasterLineEdit->text().toLower();
        if ((ui->activeCasterLineEdit->text().isEmpty()) || (-1 == ui->casterComboBox->findText(target)))
        {
            QMessageBox::warning(this, "Format Error", "No Active Caster defined", QMessageBox::Ok);
        }
        else
        {
            FILE * f = fopen(m_workingFileName.toAscii().data(), "w");
            if (f > 0)
            {
                iniparser_dump_ini(m_casterConfig, f);
                fclose(f);
                m_parmsChanged = false;
                ui->statusBar->showMessage("Configuration file saved.", 3000);
            }
            else
            {
                QMessageBox::warning(this, "Save Error", "Unable to open save file for writing!", QMessageBox::Ok);
                ui->statusBar->showMessage("File save failed.", 3000);
            }
        }
    }
}

void EditMainWindow::fileOpenClicked()
{
    m_initializing = true;

    QString fileName = QFileDialog::getOpenFileName(this, "Read ini File", ".", "*.ini");
    if (!fileName.isEmpty())
    {
        m_casterConfig = iniparser_load(fileName.toAscii().data());
        if (m_casterConfig)
        {
            m_workingFileName = fileName;
            m_sectionCount = iniparser_getnsec(m_casterConfig);
            m_activeCaster = (QString) iniparser_getstring(m_casterConfig, "default:active", NULL);
            ui->fileNameText->setText(fileName);
            ui->activeCasterLineEdit->setText(m_activeCaster);
            populateCasterComboBox();
            ui->casterComboBox->setCurrentIndex(0);
            m_parmsChanged = false;
            ui->statusBar->showMessage("Read configuration file", 3000);
        }
        else
        {
            QMessageBox::warning(this, "Read Error", "Unable to read specified ini file", QMessageBox::Ok);            
            ui->statusBar->showMessage("File read failed", 3000);
        }
    }
    m_initializing = false;
    ui->casterTableWidget->setEnabled(true);
    ui->activeCasterLineEdit->setEnabled(true);
}

void EditMainWindow::fileSaveClicked()
{
    saveClicked();
}

void EditMainWindow::fileSaveAsClicked()
{
    QString target = ui->activeCasterLineEdit->text().toLower();
    if ((ui->activeCasterLineEdit->text().isEmpty()) || (-1 == ui->casterComboBox->findText(target)))
    {
        QMessageBox::warning(this, "Format Error", "No Active Caster defined", QMessageBox::Ok);
    }
    else
    {
        QString fileName = QFileDialog::getSaveFileName(this, "Save Configuration File", ".", "*.ini");
        if (!fileName.isEmpty())
        {
            FILE * f = fopen(fileName.toAscii().data(), "w");
            if (f > 0)
            {
                m_workingFileName = fileName;
                iniparser_dump_ini(m_casterConfig, f);
                fclose(f);
                m_parmsChanged = false;
                ui->fileNameText->setText(fileName);
                ui->statusBar->showMessage("Configuration file saved", 3000);
            }
            else
            {
                QMessageBox::warning(this, "Save Error", "Unable to create save file!", QMessageBox::Ok);
                ui->statusBar->showMessage("Save operation failed.  File not saved.", 3000);
            }
        }
    }
}

void EditMainWindow::fileNewClicked()
{
    if (m_parmsChanged)
    {
        int r = QMessageBox::warning(this, "New File", "Current file has been changed. \n"
                                     "Do you want to save before continuing?",
                                     QMessageBox::Yes | QMessageBox::No);
        if (QMessageBox::Yes == r)
        {
            if (!m_workingFileName.isEmpty())
            {
                saveClicked();
            }
            else
            {
                fileSaveAsClicked();
            }
            m_parmsChanged = false;
        }
    }
    if (m_casterConfig)
    {
        iniparser_freedict(m_casterConfig);
        m_casterConfig = NULL;
        for (int i = 0; i < 8; i++)
        {
                ui->casterTableWidget->item(i, 0)->setText("");
                ui->casterTableWidget->item(i, 1)->setText("");
        }
    }
    ui->fileNameText->setText("");
    ui->activeCasterLineEdit->setText("");

    while (ui->casterComboBox->count() > 0)
    {
        ui->casterComboBox->removeItem(0);
    }

    m_casterConfig = dictionary_new(0);
    m_workingFileName = "";
    m_activeCaster = "";
    m_sectionCount = 0;

    ui->activeCasterLineEdit->setEnabled(true);

    ui->statusBar->showMessage("New configuration file created.", 3000);
}

void EditMainWindow::casterComboSelected(QString newSection)
{
    QStringList keys;
    QString keyString;
    QString keyValue;
    QTableWidgetItem* targetItem;

    if (m_casterConfig)
    {
        keys << "name" << "server" << "port" << "mountpoint" << "userid" << "password" << "timeout" << "sendgga";
        m_initializing = true;
        for (int row = 0; row < 8; row++)
        {
            keyString = newSection + ':' + keys.at(row);
            keyValue = (QString) iniparser_getstring(m_casterConfig, keyString.toAscii().data(), NULL);
            targetItem = ui->casterTableWidget->item(row, 0);
            if (targetItem)
            {
                targetItem->setText(keys.at(row));
                targetItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
            }
            else
            {
                targetItem = new QTableWidgetItem(keys.at(row));
                targetItem->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);
                ui->casterTableWidget->setItem(row, 0, targetItem);
            }
            targetItem = ui->casterTableWidget->item(row, 1);
            if (targetItem)
            {
                targetItem->setText(keyValue);
            }
            else
            {
                targetItem = new QTableWidgetItem(keyValue);
                ui->casterTableWidget->setItem(row, 1, targetItem);
            }
        }
        m_initializing = false;
    }
    m_parmsChanged = false;
}

void EditMainWindow::populateCasterComboBox()
{
    QString secName;

    for (int i = 0; i < m_sectionCount; i++)
    {
        secName = (QString) iniparser_getsecname(m_casterConfig, i);
        if (secName.toLower() != "default")
        {
            ui->casterComboBox->addItem(secName);
        }
    }
}

void EditMainWindow::casterTableCellChanged(int row, int col)
{
    if (!m_initializing)
    {
        QTableWidgetItem* originalKey = ui->casterTableWidget->item(row, 0);
        QTableWidgetItem* changedEntry = ui->casterTableWidget->item(row, 1);

        QString sectionName = ui->casterComboBox->currentText();

        QString keyString = sectionName + ':' + originalKey->text();
        QString keyValue = changedEntry->text();

        iniparser_set(m_casterConfig, keyString.toAscii().data(), keyValue.toAscii().data());

        m_parmsChanged = true;
    }
}

void EditMainWindow::activeCasterChanged()
{
    QString keyString = "default:active";
    QString keyValue = ui->activeCasterLineEdit->text();

    iniparser_set(m_casterConfig, "default", NULL);
    iniparser_set(m_casterConfig, keyString.toAscii().data(), keyValue.toAscii().data());

    m_parmsChanged = true;
}

void EditMainWindow::deleteCaster()
{
    QStringList keys;
    QString keyString;

    keys << "name" << "server" << "port" << "mountpoint" << "userid" << "password" << "timeout" << "sendgga";

    QString currentCaster = ui->casterComboBox->currentText();
    QString activeCaster = ui->activeCasterLineEdit->text();
    if (currentCaster.toLower() == activeCaster.toLower())
    {
        QMessageBox::warning(this, "Delete Error", "Cannot delete currrent Active Caster", QMessageBox::Ok);
    }
    else
    {
        for (int i = 0; i < 8; i++)
        {
            keyString = currentCaster + ":" + keys[i];
            iniparser_unset(m_casterConfig, keyString.toAscii().data());
        }
        iniparser_unset(m_casterConfig, currentCaster.toAscii().data());
        m_sectionCount = iniparser_getnsec(m_casterConfig);
        ui->casterComboBox->removeItem(ui->casterComboBox->currentIndex());
        m_parmsChanged = true;
    }
}

void EditMainWindow::addCaster()
{
    QStringList keys;
    QString keyString;

    keys << "name" << "server" << "port" << "mountpoint" << "userid" << "password" << "timeout" << "sendgga";

    QString casterName = QInputDialog::getText(this, "Add New Caster", "Caster Name");
    if (!casterName.isEmpty())
    {
        ui->casterComboBox->addItem(casterName.toLower());
        int itemCnt = ui->casterComboBox->count();
        ui->casterComboBox->setCurrentIndex(itemCnt - 1);

        iniparser_set(m_casterConfig, "default:active", casterName.toAscii().data());
        iniparser_set(m_casterConfig, casterName.toAscii().data(), NULL);
        for (int i = 0; i < 8; i++)
        {
            keyString = casterName + ":" + keys.at(i);
            iniparser_set(m_casterConfig, keyString.toAscii().data(), NULL);
        }
        m_parmsChanged = true;
        ui->casterTableWidget->setEnabled(true);
    }
}

void EditMainWindow::safeQuit()
{
    if (m_parmsChanged)
    {
        int r = QMessageBox::warning(this, "File Changed", "The configuration file has been modified.\n"
                                     "Do you want to save your changes before exiting?",
                                     QMessageBox::Yes | QMessageBox::No);
        if (QMessageBox::Yes == r)
        {
            if (!m_workingFileName.isEmpty())
            {
                saveClicked();
            }
            else
            {
                fileSaveAsClicked();
            }
        }
    }
    close();
}
