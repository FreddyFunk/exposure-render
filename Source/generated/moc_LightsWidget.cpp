/****************************************************************************
** Meta object code from reading C++ file 'LightsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LightsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLightsWidget_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLightsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLightsWidget_t qt_meta_stringdata_QLightsWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QLightsWidget"
QT_MOC_LITERAL(1, 14, 15), // "UpdateLightList"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 23), // "OnLightSelectionChanged"
QT_MOC_LITERAL(4, 55, 7), // "QLight*"
QT_MOC_LITERAL(5, 63, 6), // "pLight"
QT_MOC_LITERAL(6, 70, 10), // "OnAddLight"
QT_MOC_LITERAL(7, 81, 13), // "OnRemoveLight"
QT_MOC_LITERAL(8, 95, 13) // "OnRenameLight"

    },
    "QLightsWidget\0UpdateLightList\0\0"
    "OnLightSelectionChanged\0QLight*\0pLight\0"
    "OnAddLight\0OnRemoveLight\0OnRenameLight"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLightsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x09 /* Protected */,
       3,    0,   45,    2, 0x09 /* Protected */,
       3,    1,   46,    2, 0x09 /* Protected */,
       6,    0,   49,    2, 0x09 /* Protected */,
       7,    0,   50,    2, 0x09 /* Protected */,
       8,    0,   51,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QLightsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLightsWidget *_t = static_cast<QLightsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UpdateLightList(); break;
        case 1: _t->OnLightSelectionChanged(); break;
        case 2: _t->OnLightSelectionChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 3: _t->OnAddLight(); break;
        case 4: _t->OnRemoveLight(); break;
        case 5: _t->OnRenameLight(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QLight* >(); break;
            }
            break;
        }
    }
}

const QMetaObject QLightsWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QLightsWidget.data,
      qt_meta_data_QLightsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLightsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLightsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLightsWidget.stringdata0))
        return static_cast<void*>(const_cast< QLightsWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QLightsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
