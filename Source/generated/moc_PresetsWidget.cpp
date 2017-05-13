/****************************************************************************
** Meta object code from reading C++ file 'PresetsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../PresetsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PresetsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QPresetsWidgetBase_t {
    QByteArrayData data[14];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QPresetsWidgetBase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QPresetsWidgetBase_t qt_meta_stringdata_QPresetsWidgetBase = {
    {
QT_MOC_LITERAL(0, 0, 18), // "QPresetsWidgetBase"
QT_MOC_LITERAL(1, 19, 10), // "LoadPreset"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 4), // "Name"
QT_MOC_LITERAL(4, 36, 10), // "SavePreset"
QT_MOC_LITERAL(5, 47, 12), // "OnLoadPreset"
QT_MOC_LITERAL(6, 60, 10), // "PresetName"
QT_MOC_LITERAL(7, 71, 12), // "OnSavePreset"
QT_MOC_LITERAL(8, 84, 14), // "OnRenamePreset"
QT_MOC_LITERAL(9, 99, 14), // "OnRemovePreset"
QT_MOC_LITERAL(10, 114, 13), // "OnSavePresets"
QT_MOC_LITERAL(11, 128, 13), // "OnLoadPresets"
QT_MOC_LITERAL(12, 142, 21), // "OnCurrentIndexChanged"
QT_MOC_LITERAL(13, 164, 5) // "Index"

    },
    "QPresetsWidgetBase\0LoadPreset\0\0Name\0"
    "SavePreset\0OnLoadPreset\0PresetName\0"
    "OnSavePreset\0OnRenamePreset\0OnRemovePreset\0"
    "OnSavePresets\0OnLoadPresets\0"
    "OnCurrentIndexChanged\0Index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QPresetsWidgetBase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   64,    2, 0x06 /* Public */,
       4,    1,   67,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   70,    2, 0x0a /* Public */,
       5,    1,   71,    2, 0x0a /* Public */,
       7,    0,   74,    2, 0x0a /* Public */,
       8,    0,   75,    2, 0x0a /* Public */,
       9,    0,   76,    2, 0x0a /* Public */,
      10,    0,   77,    2, 0x0a /* Public */,
      11,    0,   78,    2, 0x0a /* Public */,
      12,    1,   79,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void QPresetsWidgetBase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QPresetsWidgetBase *_t = static_cast<QPresetsWidgetBase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->LoadPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SavePreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->OnLoadPreset(); break;
        case 3: _t->OnLoadPreset((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->OnSavePreset(); break;
        case 5: _t->OnRenamePreset(); break;
        case 6: _t->OnRemovePreset(); break;
        case 7: _t->OnSavePresets(); break;
        case 8: _t->OnLoadPresets(); break;
        case 9: _t->OnCurrentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QPresetsWidgetBase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPresetsWidgetBase::LoadPreset)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QPresetsWidgetBase::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QPresetsWidgetBase::SavePreset)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QPresetsWidgetBase::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QPresetsWidgetBase.data,
      qt_meta_data_QPresetsWidgetBase,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QPresetsWidgetBase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QPresetsWidgetBase::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QPresetsWidgetBase.stringdata0))
        return static_cast<void*>(const_cast< QPresetsWidgetBase*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QPresetsWidgetBase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
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
void QPresetsWidgetBase::LoadPreset(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QPresetsWidgetBase::SavePreset(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
