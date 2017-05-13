/****************************************************************************
** Meta object code from reading C++ file 'LoadSettingsDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LoadSettingsDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoadSettingsDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLoadSettingsDialog_t {
    QByteArrayData data[18];
    char stringdata0[176];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLoadSettingsDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLoadSettingsDialog_t qt_meta_stringdata_QLoadSettingsDialog = {
    {
QT_MOC_LITERAL(0, 0, 19), // "QLoadSettingsDialog"
QT_MOC_LITERAL(1, 20, 5), // "LockY"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 5), // "State"
QT_MOC_LITERAL(4, 33, 5), // "LockZ"
QT_MOC_LITERAL(5, 39, 11), // "SetResample"
QT_MOC_LITERAL(6, 51, 8), // "Resample"
QT_MOC_LITERAL(7, 60, 12), // "SetResampleX"
QT_MOC_LITERAL(8, 73, 9), // "ResampleX"
QT_MOC_LITERAL(9, 83, 12), // "SetResampleY"
QT_MOC_LITERAL(10, 96, 9), // "ResampleY"
QT_MOC_LITERAL(11, 106, 12), // "SetResampleZ"
QT_MOC_LITERAL(12, 119, 9), // "ResampleZ"
QT_MOC_LITERAL(13, 129, 6), // "Accept"
QT_MOC_LITERAL(14, 136, 6), // "Reject"
QT_MOC_LITERAL(15, 143, 7), // "Clicked"
QT_MOC_LITERAL(16, 151, 16), // "QAbstractButton*"
QT_MOC_LITERAL(17, 168, 7) // "pButton"

    },
    "QLoadSettingsDialog\0LockY\0\0State\0LockZ\0"
    "SetResample\0Resample\0SetResampleX\0"
    "ResampleX\0SetResampleY\0ResampleY\0"
    "SetResampleZ\0ResampleZ\0Accept\0Reject\0"
    "Clicked\0QAbstractButton*\0pButton"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLoadSettingsDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       5,    1,   65,    2, 0x08 /* Private */,
       7,    1,   68,    2, 0x08 /* Private */,
       9,    1,   71,    2, 0x08 /* Private */,
      11,    1,   74,    2, 0x08 /* Private */,
      13,    0,   77,    2, 0x08 /* Private */,
      14,    0,   78,    2, 0x08 /* Private */,
      15,    1,   79,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,

       0        // eod
};

void QLoadSettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLoadSettingsDialog *_t = static_cast<QLoadSettingsDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LockY((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->LockZ((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->SetResample((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->SetResampleX((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->SetResampleY((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->SetResampleZ((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 6: _t->Accept(); break;
        case 7: _t->Reject(); break;
        case 8: _t->Clicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QLoadSettingsDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QLoadSettingsDialog.data,
      qt_meta_data_QLoadSettingsDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLoadSettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLoadSettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLoadSettingsDialog.stringdata0))
        return static_cast<void*>(const_cast< QLoadSettingsDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int QLoadSettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
