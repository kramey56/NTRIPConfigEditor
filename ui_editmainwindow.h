/********************************************************************************
** Form generated from reading UI file 'editmainwindow.ui'
**
** Created: Sun Oct 30 15:37:36 2011
**      by: Qt User Interface Compiler version 4.7.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITMAINWINDOW_H
#define UI_EDITMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTableWidget>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EditMainWindow
{
public:
    QAction *actionOpen;
    QAction *actionClose;
    QAction *actionNew;
    QAction *actionExit;
    QAction *actionSave_As;
    QAction *actionSave;
    QWidget *centralWidget;
    QComboBox *casterComboBox;
    QTableWidget *casterTableWidget;
    QPushButton *savePB;
    QPushButton *cancelPB;
    QLabel *fileNameLabel;
    QLineEdit *fileNameText;
    QLabel *activeCasterLabel;
    QLineEdit *activeCasterLineEdit;
    QLabel *hgpsLogo;
    QFrame *casterDefGroup;
    QPushButton *deletePB;
    QPushButton *addPB;
    QLabel *casterLabel;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *EditMainWindow)
    {
        if (EditMainWindow->objectName().isEmpty())
            EditMainWindow->setObjectName(QString::fromUtf8("EditMainWindow"));
        EditMainWindow->resize(387, 562);
        actionOpen = new QAction(EditMainWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionClose = new QAction(EditMainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        actionNew = new QAction(EditMainWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionExit = new QAction(EditMainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionSave_As = new QAction(EditMainWindow);
        actionSave_As->setObjectName(QString::fromUtf8("actionSave_As"));
        actionSave = new QAction(EditMainWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralWidget = new QWidget(EditMainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        casterComboBox = new QComboBox(centralWidget);
        casterComboBox->setObjectName(QString::fromUtf8("casterComboBox"));
        casterComboBox->setGeometry(QRect(10, 150, 251, 22));
        casterTableWidget = new QTableWidget(centralWidget);
        if (casterTableWidget->columnCount() < 2)
            casterTableWidget->setColumnCount(2);
        if (casterTableWidget->rowCount() < 8)
            casterTableWidget->setRowCount(8);
        casterTableWidget->setObjectName(QString::fromUtf8("casterTableWidget"));
        casterTableWidget->setGeometry(QRect(10, 180, 256, 271));
        casterTableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        casterTableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        casterTableWidget->setAutoScroll(false);
        casterTableWidget->setEditTriggers(QAbstractItemView::DoubleClicked);
        casterTableWidget->setProperty("showDropIndicator", QVariant(false));
        casterTableWidget->setDragDropOverwriteMode(false);
        casterTableWidget->setRowCount(8);
        casterTableWidget->setColumnCount(2);
        casterTableWidget->horizontalHeader()->setVisible(true);
        casterTableWidget->horizontalHeader()->setCascadingSectionResizes(false);
        casterTableWidget->horizontalHeader()->setDefaultSectionSize(127);
        casterTableWidget->horizontalHeader()->setHighlightSections(false);
        casterTableWidget->horizontalHeader()->setStretchLastSection(false);
        casterTableWidget->verticalHeader()->setVisible(false);
        casterTableWidget->verticalHeader()->setHighlightSections(false);
        savePB = new QPushButton(centralWidget);
        savePB->setObjectName(QString::fromUtf8("savePB"));
        savePB->setGeometry(QRect(300, 470, 75, 23));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        savePB->setFont(font);
        cancelPB = new QPushButton(centralWidget);
        cancelPB->setObjectName(QString::fromUtf8("cancelPB"));
        cancelPB->setGeometry(QRect(10, 470, 75, 23));
        cancelPB->setFont(font);
        fileNameLabel = new QLabel(centralWidget);
        fileNameLabel->setObjectName(QString::fromUtf8("fileNameLabel"));
        fileNameLabel->setGeometry(QRect(10, 80, 91, 21));
        fileNameLabel->setFont(font);
        fileNameText = new QLineEdit(centralWidget);
        fileNameText->setObjectName(QString::fromUtf8("fileNameText"));
        fileNameText->setGeometry(QRect(120, 80, 251, 20));
        fileNameText->setReadOnly(true);
        activeCasterLabel = new QLabel(centralWidget);
        activeCasterLabel->setObjectName(QString::fromUtf8("activeCasterLabel"));
        activeCasterLabel->setGeometry(QRect(10, 120, 121, 16));
        activeCasterLabel->setFont(font);
        activeCasterLineEdit = new QLineEdit(centralWidget);
        activeCasterLineEdit->setObjectName(QString::fromUtf8("activeCasterLineEdit"));
        activeCasterLineEdit->setGeometry(QRect(140, 120, 161, 20));
        hgpsLogo = new QLabel(centralWidget);
        hgpsLogo->setObjectName(QString::fromUtf8("hgpsLogo"));
        hgpsLogo->setGeometry(QRect(20, 10, 351, 61));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(hgpsLogo->sizePolicy().hasHeightForWidth());
        hgpsLogo->setSizePolicy(sizePolicy);
        hgpsLogo->setMinimumSize(QSize(321, 51));
        hgpsLogo->setMaximumSize(QSize(1024, 1024));
        hgpsLogo->setSizeIncrement(QSize(1, 1));
        hgpsLogo->setFrameShape(QFrame::Panel);
        hgpsLogo->setPixmap(QPixmap(QString::fromUtf8(":/images/HGPS_Logo.bmp")));
        hgpsLogo->setScaledContents(true);
        hgpsLogo->setOpenExternalLinks(true);
        casterDefGroup = new QFrame(centralWidget);
        casterDefGroup->setObjectName(QString::fromUtf8("casterDefGroup"));
        casterDefGroup->setGeometry(QRect(270, 180, 111, 91));
        casterDefGroup->setFrameShape(QFrame::StyledPanel);
        casterDefGroup->setFrameShadow(QFrame::Raised);
        deletePB = new QPushButton(casterDefGroup);
        deletePB->setObjectName(QString::fromUtf8("deletePB"));
        deletePB->setGeometry(QRect(60, 60, 41, 23));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        deletePB->setFont(font1);
        addPB = new QPushButton(casterDefGroup);
        addPB->setObjectName(QString::fromUtf8("addPB"));
        addPB->setGeometry(QRect(10, 60, 41, 23));
        addPB->setFont(font1);
        casterLabel = new QLabel(casterDefGroup);
        casterLabel->setObjectName(QString::fromUtf8("casterLabel"));
        casterLabel->setGeometry(QRect(10, 10, 91, 41));
        casterLabel->setFont(font);
        casterLabel->setFrameShape(QFrame::Panel);
        casterLabel->setFrameShadow(QFrame::Plain);
        casterLabel->setScaledContents(true);
        casterLabel->setAlignment(Qt::AlignCenter);
        casterLabel->setWordWrap(true);
        EditMainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(EditMainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 387, 25));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        EditMainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(EditMainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        EditMainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(EditMainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        EditMainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(fileNameText, activeCasterLineEdit);
        QWidget::setTabOrder(activeCasterLineEdit, casterComboBox);
        QWidget::setTabOrder(casterComboBox, casterTableWidget);
        QWidget::setTabOrder(casterTableWidget, addPB);
        QWidget::setTabOrder(addPB, deletePB);
        QWidget::setTabOrder(deletePB, savePB);
        QWidget::setTabOrder(savePB, cancelPB);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);

        retranslateUi(EditMainWindow);

        QMetaObject::connectSlotsByName(EditMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *EditMainWindow)
    {
        EditMainWindow->setWindowTitle(QApplication::translate("EditMainWindow", "NTRIP Config Editor", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("EditMainWindow", "Open", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("EditMainWindow", "Close", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("EditMainWindow", "New", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("EditMainWindow", "Exit", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        actionExit->setToolTip(QApplication::translate("EditMainWindow", "End program", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        actionSave_As->setText(QApplication::translate("EditMainWindow", "Save As", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("EditMainWindow", "Save", 0, QApplication::UnicodeUTF8));
        savePB->setText(QApplication::translate("EditMainWindow", "Save", 0, QApplication::UnicodeUTF8));
        cancelPB->setText(QApplication::translate("EditMainWindow", "Cancel", 0, QApplication::UnicodeUTF8));
        fileNameLabel->setText(QApplication::translate("EditMainWindow", "File Name :", 0, QApplication::UnicodeUTF8));
        activeCasterLabel->setText(QApplication::translate("EditMainWindow", "Active Caster :", 0, QApplication::UnicodeUTF8));
        hgpsLogo->setText(QString());
#ifndef QT_NO_TOOLTIP
        deletePB->setToolTip(QApplication::translate("EditMainWindow", "Delete current caster definition", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        deletePB->setText(QApplication::translate("EditMainWindow", "-", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        addPB->setToolTip(QApplication::translate("EditMainWindow", "Add new caster definition", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        addPB->setText(QApplication::translate("EditMainWindow", "+", 0, QApplication::UnicodeUTF8));
        casterLabel->setText(QApplication::translate("EditMainWindow", "Caster Definitions", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("EditMainWindow", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EditMainWindow: public Ui_EditMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITMAINWINDOW_H
