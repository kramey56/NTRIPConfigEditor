/****************************************************************************
** Meta object code from reading C++ file 'editmainwindow.h'
**
** Created: Sun Oct 30 15:37:38 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "editmainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editmainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EditMainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x08,
      30,   15,   15,   15, 0x08,
      48,   15,   15,   15, 0x08,
      66,   15,   15,   15, 0x08,
      86,   15,   15,   15, 0x08,
     103,   15,   15,   15, 0x08,
     134,  132,   15,   15, 0x08,
     166,   15,   15,   15, 0x08,
     177,   15,   15,   15, 0x08,
     199,   15,   15,   15, 0x08,
     214,   15,   15,   15, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_EditMainWindow[] = {
    "EditMainWindow\0\0saveClicked()\0"
    "fileOpenClicked()\0fileSaveClicked()\0"
    "fileSaveAsClicked()\0fileNewClicked()\0"
    "casterComboSelected(QString)\0,\0"
    "casterTableCellChanged(int,int)\0"
    "safeQuit()\0activeCasterChanged()\0"
    "deleteCaster()\0addCaster()\0"
};

const QMetaObject EditMainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_EditMainWindow,
      qt_meta_data_EditMainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EditMainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EditMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EditMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EditMainWindow))
        return static_cast<void*>(const_cast< EditMainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int EditMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: saveClicked(); break;
        case 1: fileOpenClicked(); break;
        case 2: fileSaveClicked(); break;
        case 3: fileSaveAsClicked(); break;
        case 4: fileNewClicked(); break;
        case 5: casterComboSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: casterTableCellChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: safeQuit(); break;
        case 8: activeCasterChanged(); break;
        case 9: deleteCaster(); break;
        case 10: addCaster(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
