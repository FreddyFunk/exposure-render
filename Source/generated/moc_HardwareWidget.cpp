/****************************************************************************
** Meta object code from reading C++ file 'HardwareWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../HardwareWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HardwareWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QCudaDevicesModel_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QCudaDevicesModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QCudaDevicesModel_t qt_meta_stringdata_QCudaDevicesModel = {
    {
QT_MOC_LITERAL(0, 0, 17) // "QCudaDevicesModel"

    },
    "QCudaDevicesModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QCudaDevicesModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void QCudaDevicesModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QCudaDevicesModel::staticMetaObject = {
    { &QAbstractTableModel::staticMetaObject, qt_meta_stringdata_QCudaDevicesModel.data,
      qt_meta_data_QCudaDevicesModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QCudaDevicesModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QCudaDevicesModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QCudaDevicesModel.stringdata0))
        return static_cast<void*>(const_cast< QCudaDevicesModel*>(this));
    return QAbstractTableModel::qt_metacast(_clname);
}

int QCudaDevicesModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractTableModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_QHardwareWidget_t {
    QByteArrayData data[6];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QHardwareWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QHardwareWidget_t qt_meta_stringdata_QHardwareWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "QHardwareWidget"
QT_MOC_LITERAL(1, 16, 15), // "OnOptimalDevice"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "OnSelection"
QT_MOC_LITERAL(4, 45, 10), // "ModelIndex"
QT_MOC_LITERAL(5, 56, 19) // "OnCudaDeviceChanged"

    },
    "QHardwareWidget\0OnOptimalDevice\0\0"
    "OnSelection\0ModelIndex\0OnCudaDeviceChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QHardwareWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x08 /* Private */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    4,
    QMetaType::Void,

       0        // eod
};

void QHardwareWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QHardwareWidget *_t = static_cast<QHardwareWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnOptimalDevice(); break;
        case 1: _t->OnSelection((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 2: _t->OnCudaDeviceChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QHardwareWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QHardwareWidget.data,
      qt_meta_data_QHardwareWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QHardwareWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QHardwareWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QHardwareWidget.stringdata0))
        return static_cast<void*>(const_cast< QHardwareWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QHardwareWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
