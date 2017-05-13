/****************************************************************************
** Meta object code from reading C++ file 'Lighting.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Lighting.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Lighting.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLighting_t {
    QByteArrayData data[8];
    char stringdata0[101];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLighting_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLighting_t qt_meta_stringdata_QLighting = {
    {
QT_MOC_LITERAL(0, 0, 9), // "QLighting"
QT_MOC_LITERAL(1, 10, 7), // "Changed"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 21), // "LightSelectionChanged"
QT_MOC_LITERAL(4, 41, 7), // "QLight*"
QT_MOC_LITERAL(5, 49, 24), // "OnLightPropertiesChanged"
QT_MOC_LITERAL(6, 74, 6), // "pLight"
QT_MOC_LITERAL(7, 81, 19) // "OnBackgroundChanged"

    },
    "QLighting\0Changed\0\0LightSelectionChanged\0"
    "QLight*\0OnLightPropertiesChanged\0"
    "pLight\0OnBackgroundChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLighting[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,
       3,    1,   35,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   38,    2, 0x0a /* Public */,
       7,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    6,
    QMetaType::Void,

       0        // eod
};

void QLighting::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLighting *_t = static_cast<QLighting *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Changed(); break;
        case 1: _t->LightSelectionChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 2: _t->OnLightPropertiesChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 3: _t->OnBackgroundChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLight* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLight* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QLighting::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLighting::Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QLighting::*_t)(QLight * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QLighting::LightSelectionChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QLighting::staticMetaObject = {
    { &QPresetXML::staticMetaObject, qt_meta_stringdata_QLighting.data,
      qt_meta_data_QLighting,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLighting::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLighting::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLighting.stringdata0))
        return static_cast<void*>(const_cast< QLighting*>(this));
    return QPresetXML::qt_metacast(_clname);
}

int QLighting::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPresetXML::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void QLighting::Changed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void QLighting::LightSelectionChanged(QLight * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
