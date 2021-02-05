#ifndef EDITMAINWINDOW_H
#define EDITMAINWINDOW_H

#include <QMainWindow>
#include <QFileDialog>
#include <QInputDialog>
#include <QMessageBox>
#include <QComboBox>

#include "iniparser.h"

namespace Ui {
    class EditMainWindow;
}

// Primary display panel for configuration editor
class EditMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit EditMainWindow(QWidget *parent = 0);
    ~EditMainWindow();

private:
    Ui::EditMainWindow  *ui;
    QString             m_workingFileName;
    QString             m_activeCaster;
    dictionary*         m_casterConfig;
    int                 m_sectionCount;
    bool                m_initializing;
    bool                m_parmsChanged;

    void populateCasterComboBox();

// QT Event handlers
private slots:
    void saveClicked();
    void fileOpenClicked();
    void fileSaveClicked();
    void fileSaveAsClicked();
    void fileNewClicked();
    void casterComboSelected(QString);
    void casterTableCellChanged(int, int);
    void safeQuit();
    void activeCasterChanged();
    void deleteCaster();
    void addCaster();
};

#endif // EDITMAINWINDOW_H
