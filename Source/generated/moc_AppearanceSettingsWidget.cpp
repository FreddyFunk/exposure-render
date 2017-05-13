/****************************************************************************
** Meta object code from reading C++ file 'AppearanceSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../AppearanceSettingsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AppearanceSettingsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QAppearanceSettingsWidget_t {
    QByteArrayData data[14];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QAppearanceSettingsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QAppearanceSettingsWidget_t qt_meta_stringdata_QAppearanceSettingsWidget = {
    {
QT_MOC_LITERAL(0, 0, 25), // "QAppearanceSettingsWidget"
QT_MOC_LITERAL(1, 26, 13), // "OnRenderBegin"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "OnSetDensityScale"
QT_MOC_LITERAL(4, 59, 12), // "DensityScale"
QT_MOC_LITERAL(5, 72, 25), // "OnTransferFunctionChanged"
QT_MOC_LITERAL(6, 98, 16), // "OnSetShadingType"
QT_MOC_LITERAL(7, 115, 5), // "Index"
QT_MOC_LITERAL(8, 121, 19), // "OnSetGradientFactor"
QT_MOC_LITERAL(9, 141, 14), // "GradientFactor"
QT_MOC_LITERAL(10, 156, 23), // "OnSetStepSizePrimaryRay"
QT_MOC_LITERAL(11, 180, 18), // "StepSizePrimaryRay"
QT_MOC_LITERAL(12, 199, 25), // "OnSetStepSizeSecondaryRay"
QT_MOC_LITERAL(13, 225, 20) // "StepSizeSecondaryRay"

    },
    "QAppearanceSettingsWidget\0OnRenderBegin\0"
    "\0OnSetDensityScale\0DensityScale\0"
    "OnTransferFunctionChanged\0OnSetShadingType\0"
    "Index\0OnSetGradientFactor\0GradientFactor\0"
    "OnSetStepSizePrimaryRay\0StepSizePrimaryRay\0"
    "OnSetStepSizeSecondaryRay\0"
    "StepSizeSecondaryRay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QAppearanceSettingsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       5,    0,   53,    2, 0x0a /* Public */,
       6,    1,   54,    2, 0x0a /* Public */,
       8,    1,   57,    2, 0x0a /* Public */,
      10,    1,   60,    2, 0x0a /* Public */,
      12,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::Double,   13,

       0        // eod
};

void QAppearanceSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QAppearanceSettingsWidget *_t = static_cast<QAppearanceSettingsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnRenderBegin(); break;
        case 1: _t->OnSetDensityScale((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->OnTransferFunctionChanged(); break;
        case 3: _t->OnSetShadingType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->OnSetGradientFactor((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnSetStepSizePrimaryRay((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 6: _t->OnSetStepSizeSecondaryRay((*reinterpret_cast< const double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QAppearanceSettingsWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QAppearanceSettingsWidget.data,
      qt_meta_data_QAppearanceSettingsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QAppearanceSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QAppearanceSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QAppearanceSettingsWidget.stringdata0))
        return static_cast<void*>(const_cast< QAppearanceSettingsWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QAppearanceSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
