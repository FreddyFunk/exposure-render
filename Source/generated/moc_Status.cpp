/****************************************************************************
** Meta object code from reading C++ file 'Status.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Status.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Status.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CStatus_t {
    QByteArrayData data[17];
    char stringdata0[154];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CStatus_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CStatus_t qt_meta_stringdata_CStatus = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CStatus"
QT_MOC_LITERAL(1, 8, 11), // "RenderBegin"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 9), // "RenderEnd"
QT_MOC_LITERAL(4, 31, 14), // "PreRenderFrame"
QT_MOC_LITERAL(5, 46, 15), // "PostRenderFrame"
QT_MOC_LITERAL(6, 62, 11), // "RenderPause"
QT_MOC_LITERAL(7, 74, 6), // "Paused"
QT_MOC_LITERAL(8, 81, 6), // "Resize"
QT_MOC_LITERAL(9, 88, 10), // "LoadPreset"
QT_MOC_LITERAL(10, 99, 10), // "PresetName"
QT_MOC_LITERAL(11, 110, 16), // "StatisticChanged"
QT_MOC_LITERAL(12, 127, 5), // "Group"
QT_MOC_LITERAL(13, 133, 4), // "Name"
QT_MOC_LITERAL(14, 138, 5), // "Value"
QT_MOC_LITERAL(15, 144, 4), // "Unit"
QT_MOC_LITERAL(16, 149, 4) // "Icon"

    },
    "CStatus\0RenderBegin\0\0RenderEnd\0"
    "PreRenderFrame\0PostRenderFrame\0"
    "RenderPause\0Paused\0Resize\0LoadPreset\0"
    "PresetName\0StatisticChanged\0Group\0"
    "Name\0Value\0Unit\0Icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CStatus[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    0,   65,    2, 0x06 /* Public */,
       4,    0,   66,    2, 0x06 /* Public */,
       5,    0,   67,    2, 0x06 /* Public */,
       6,    1,   68,    2, 0x06 /* Public */,
       8,    0,   71,    2, 0x06 /* Public */,
       9,    1,   72,    2, 0x06 /* Public */,
      11,    5,   75,    2, 0x06 /* Public */,
      11,    4,   86,    2, 0x26 /* Public | MethodCloned */,
      11,    3,   95,    2, 0x26 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,   15,   16,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   12,   13,   14,

       0        // eod
};

void CStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CStatus *_t = static_cast<CStatus *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->RenderBegin(); break;
        case 1: _t->RenderEnd(); break;
        case 2: _t->PreRenderFrame(); break;
        case 3: _t->PostRenderFrame(); break;
        case 4: _t->RenderPause((*reinterpret_cast< const bool(*)>(_a[1]))); break;
        case 5: _t->Resize(); break;
        case 6: _t->LoadPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->StatisticChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 8: _t->StatisticChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 9: _t->StatisticChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CStatus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::RenderBegin)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::RenderEnd)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::PreRenderFrame)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::PostRenderFrame)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)(const bool & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::RenderPause)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::Resize)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::LoadPreset)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (CStatus::*_t)(const QString & , const QString & , const QString & , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CStatus::StatisticChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject CStatus::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CStatus.data,
      qt_meta_data_CStatus,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CStatus::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CStatus::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CStatus.stringdata0))
        return static_cast<void*>(const_cast< CStatus*>(this));
    return QObject::qt_metacast(_clname);
}

int CStatus::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void CStatus::RenderBegin()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void CStatus::RenderEnd()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void CStatus::PreRenderFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void CStatus::PostRenderFrame()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void CStatus::RenderPause(const bool & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CStatus::Resize()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void CStatus::LoadPreset(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CStatus::StatisticChanged(const QString & _t1, const QString & _t2, const QString & _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
