/****************************************************************************
** Meta object code from reading C++ file 'Node.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Node.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Node.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNode_t {
    QByteArrayData data[12];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNode_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNode_t qt_meta_stringdata_QNode = {
    {
QT_MOC_LITERAL(0, 0, 5), // "QNode"
QT_MOC_LITERAL(1, 6, 11), // "NodeChanged"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 6), // "QNode*"
QT_MOC_LITERAL(4, 26, 5), // "pNode"
QT_MOC_LITERAL(5, 32, 16), // "IntensityChanged"
QT_MOC_LITERAL(6, 49, 14), // "OpacityChanged"
QT_MOC_LITERAL(7, 64, 14), // "DiffuseChanged"
QT_MOC_LITERAL(8, 79, 15), // "SpecularChanged"
QT_MOC_LITERAL(9, 95, 15), // "EmissionChanged"
QT_MOC_LITERAL(10, 111, 16), // "RoughnessChanged"
QT_MOC_LITERAL(11, 128, 12) // "RangeChanged"

    },
    "QNode\0NodeChanged\0\0QNode*\0pNode\0"
    "IntensityChanged\0OpacityChanged\0"
    "DiffuseChanged\0SpecularChanged\0"
    "EmissionChanged\0RoughnessChanged\0"
    "RangeChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNode[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       7,    1,   63,    2, 0x06 /* Public */,
       8,    1,   66,    2, 0x06 /* Public */,
       9,    1,   69,    2, 0x06 /* Public */,
      10,    1,   72,    2, 0x06 /* Public */,
      11,    1,   75,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QNode::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNode *_t = static_cast<QNode *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->NodeChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 1: _t->IntensityChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 2: _t->OpacityChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 3: _t->DiffuseChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 4: _t->SpecularChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 5: _t->EmissionChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 6: _t->RoughnessChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 7: _t->RangeChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNode* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::NodeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::IntensityChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::OpacityChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::DiffuseChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::SpecularChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::EmissionChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::RoughnessChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (QNode::*_t)(QNode * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QNode::RangeChanged)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject QNode::staticMetaObject = {
    { &QPresetXML::staticMetaObject, qt_meta_stringdata_QNode.data,
      qt_meta_data_QNode,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNode::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNode.stringdata0))
        return static_cast<void*>(const_cast< QNode*>(this));
    return QPresetXML::qt_metacast(_clname);
}

int QNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPresetXML::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void QNode::NodeChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QNode::IntensityChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void QNode::OpacityChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void QNode::DiffuseChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void QNode::SpecularChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void QNode::EmissionChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void QNode::RoughnessChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void QNode::RangeChanged(QNode * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
