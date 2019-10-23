/****************************************************************************
** Meta object code from reading C++ file 'adminpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../iCyberSecurity-master/iCyberSecurity-master/iCyberSecurity/adminpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AdminPage_t {
    QByteArrayData data[11];
    char stringdata0[249];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminPage_t qt_meta_stringdata_AdminPage = {
    {
QT_MOC_LITERAL(0, 0, 9), // "AdminPage"
QT_MOC_LITERAL(1, 10, 27), // "on_loadCustomerData_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 30), // "on_buttonLoadPamphlets_clicked"
QT_MOC_LITERAL(4, 70, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 92, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 116, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(7, 140, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(8, 164, 28), // "on_buttonAddCustomer_clicked"
QT_MOC_LITERAL(9, 193, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(10, 217, 31) // "on_deleteListLoadButton_clicked"

    },
    "AdminPage\0on_loadCustomerData_clicked\0"
    "\0on_buttonLoadPamphlets_clicked\0"
    "on_pushButton_clicked\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_buttonAddCustomer_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_deleteListLoadButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AdminPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AdminPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_loadCustomerData_clicked(); break;
        case 1: _t->on_buttonLoadPamphlets_clicked(); break;
        case 2: _t->on_pushButton_clicked(); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_buttonAddCustomer_clicked(); break;
        case 7: _t->on_pushButton_5_clicked(); break;
        case 8: _t->on_deleteListLoadButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AdminPage::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_AdminPage.data,
    qt_meta_data_AdminPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AdminPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AdminPage.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AdminPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
