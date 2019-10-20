/****************************************************************************
** Meta object code from reading C++ file 'purchasingpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/purchasingpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'purchasingpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_purchasingPage_t {
    QByteArrayData data[14];
    char stringdata0[278];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_purchasingPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_purchasingPage_t qt_meta_stringdata_purchasingPage = {
    {
QT_MOC_LITERAL(0, 0, 14), // "purchasingPage"
QT_MOC_LITERAL(1, 15, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "on_buttonBox_rejected"
QT_MOC_LITERAL(4, 60, 21), // "on_buttonBox_accepted"
QT_MOC_LITERAL(5, 82, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 106, 25), // "on_checkBoxSilver_toggled"
QT_MOC_LITERAL(7, 132, 7), // "checked"
QT_MOC_LITERAL(8, 140, 30), // "on_checkBoxSilver_stateChanged"
QT_MOC_LITERAL(9, 171, 4), // "arg1"
QT_MOC_LITERAL(10, 176, 23), // "on_checkBoxGold_toggled"
QT_MOC_LITERAL(11, 200, 26), // "on_checkBoxDiamond_toggled"
QT_MOC_LITERAL(12, 227, 23), // "on_checkBoxCrab_toggled"
QT_MOC_LITERAL(13, 251, 26) // "on_checkBoxUnicorn_toggled"

    },
    "purchasingPage\0on_pushButton_clicked\0"
    "\0on_buttonBox_rejected\0on_buttonBox_accepted\0"
    "on_pushButton_2_clicked\0"
    "on_checkBoxSilver_toggled\0checked\0"
    "on_checkBoxSilver_stateChanged\0arg1\0"
    "on_checkBoxGold_toggled\0"
    "on_checkBoxDiamond_toggled\0"
    "on_checkBoxCrab_toggled\0"
    "on_checkBoxUnicorn_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_purchasingPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    1,   68,    2, 0x08 /* Private */,
       8,    1,   71,    2, 0x08 /* Private */,
      10,    1,   74,    2, 0x08 /* Private */,
      11,    1,   77,    2, 0x08 /* Private */,
      12,    1,   80,    2, 0x08 /* Private */,
      13,    1,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::Bool,    7,

       0        // eod
};

void purchasingPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<purchasingPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_buttonBox_rejected(); break;
        case 2: _t->on_buttonBox_accepted(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_checkBoxSilver_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_checkBoxSilver_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_checkBoxGold_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->on_checkBoxDiamond_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBoxCrab_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->on_checkBoxUnicorn_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject purchasingPage::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_purchasingPage.data,
    qt_meta_data_purchasingPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *purchasingPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *purchasingPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_purchasingPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int purchasingPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
