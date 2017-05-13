/****************************************************************************
** Meta object code from reading C++ file 'LightWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LightWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LightWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLightWidget_t {
    QByteArrayData data[29];
    char stringdata0[415];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLightWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLightWidget_t qt_meta_stringdata_QLightWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "QLightWidget"
QT_MOC_LITERAL(1, 13, 23), // "OnLightSelectionChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 7), // "QLight*"
QT_MOC_LITERAL(4, 46, 6), // "pLight"
QT_MOC_LITERAL(5, 53, 14), // "OnThetaChanged"
QT_MOC_LITERAL(6, 68, 5), // "Theta"
QT_MOC_LITERAL(7, 74, 12), // "OnPhiChanged"
QT_MOC_LITERAL(8, 87, 3), // "Phi"
QT_MOC_LITERAL(9, 91, 17), // "OnDistanceChanged"
QT_MOC_LITERAL(10, 109, 8), // "Distance"
QT_MOC_LITERAL(11, 118, 14), // "OnWidthChanged"
QT_MOC_LITERAL(12, 133, 5), // "Width"
QT_MOC_LITERAL(13, 139, 17), // "OnLockSizeChanged"
QT_MOC_LITERAL(14, 157, 8), // "LockSize"
QT_MOC_LITERAL(15, 166, 15), // "OnHeightChanged"
QT_MOC_LITERAL(16, 182, 6), // "Height"
QT_MOC_LITERAL(17, 189, 21), // "OnCurrentColorChanged"
QT_MOC_LITERAL(18, 211, 5), // "Color"
QT_MOC_LITERAL(19, 217, 18), // "OnIntensityChanged"
QT_MOC_LITERAL(20, 236, 9), // "Intensity"
QT_MOC_LITERAL(21, 246, 19), // "OnLightThetaChanged"
QT_MOC_LITERAL(22, 266, 17), // "OnLightPhiChanged"
QT_MOC_LITERAL(23, 284, 22), // "OnLightDistanceChanged"
QT_MOC_LITERAL(24, 307, 19), // "OnLightWidthChanged"
QT_MOC_LITERAL(25, 327, 22), // "OnLightLockSizeChanged"
QT_MOC_LITERAL(26, 350, 20), // "OnLightHeightChanged"
QT_MOC_LITERAL(27, 371, 19), // "OnLightColorChanged"
QT_MOC_LITERAL(28, 391, 23) // "OnLightIntensityChanged"

    },
    "QLightWidget\0OnLightSelectionChanged\0"
    "\0QLight*\0pLight\0OnThetaChanged\0Theta\0"
    "OnPhiChanged\0Phi\0OnDistanceChanged\0"
    "Distance\0OnWidthChanged\0Width\0"
    "OnLockSizeChanged\0LockSize\0OnHeightChanged\0"
    "Height\0OnCurrentColorChanged\0Color\0"
    "OnIntensityChanged\0Intensity\0"
    "OnLightThetaChanged\0OnLightPhiChanged\0"
    "OnLightDistanceChanged\0OnLightWidthChanged\0"
    "OnLightLockSizeChanged\0OnLightHeightChanged\0"
    "OnLightColorChanged\0OnLightIntensityChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLightWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   99,    2, 0x0a /* Public */,
       5,    1,  102,    2, 0x0a /* Public */,
       7,    1,  105,    2, 0x0a /* Public */,
       9,    1,  108,    2, 0x0a /* Public */,
      11,    1,  111,    2, 0x0a /* Public */,
      13,    1,  114,    2, 0x0a /* Public */,
      15,    1,  117,    2, 0x0a /* Public */,
      17,    1,  120,    2, 0x0a /* Public */,
      19,    1,  123,    2, 0x0a /* Public */,
      21,    1,  126,    2, 0x0a /* Public */,
      22,    1,  129,    2, 0x0a /* Public */,
      23,    1,  132,    2, 0x0a /* Public */,
      24,    1,  135,    2, 0x0a /* Public */,
      25,    1,  138,    2, 0x0a /* Public */,
      26,    1,  141,    2, 0x0a /* Public */,
      27,    1,  144,    2, 0x0a /* Public */,
      28,    1,  147,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Double,    6,
    QMetaType::Void, QMetaType::Double,    8,
    QMetaType::Void, QMetaType::Double,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Double,   16,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::Double,   20,
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

void QLightWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLightWidget *_t = static_cast<QLightWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnLightSelectionChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 1: _t->OnThetaChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 2: _t->OnPhiChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 3: _t->OnDistanceChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 4: _t->OnWidthChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->OnLockSizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnHeightChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 7: _t->OnCurrentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 8: _t->OnIntensityChanged((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 9: _t->OnLightThetaChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 10: _t->OnLightPhiChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 11: _t->OnLightDistanceChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 12: _t->OnLightWidthChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 13: _t->OnLightLockSizeChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 14: _t->OnLightHeightChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 15: _t->OnLightColorChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        case 16: _t->OnLightIntensityChanged((*reinterpret_cast< QLight*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QLightWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QLightWidget.data,
      qt_meta_data_QLightWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLightWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLightWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLightWidget.stringdata0))
        return static_cast<void*>(const_cast< QLightWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QLightWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
