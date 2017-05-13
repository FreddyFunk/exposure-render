/****************************************************************************
** Meta object code from reading C++ file 'BackgroundWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../BackgroundWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BackgroundWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QBackgroundWidget_t {
    QByteArrayData data[14];
    char stringdata0[243];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBackgroundWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBackgroundWidget_t qt_meta_stringdata_QBackgroundWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QBackgroundWidget"
QT_MOC_LITERAL(1, 18, 31), // "OnBackgroundIlluminationChanged"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 7), // "Checked"
QT_MOC_LITERAL(4, 59, 25), // "OnGradientColorTopChanged"
QT_MOC_LITERAL(5, 85, 5), // "Color"
QT_MOC_LITERAL(6, 91, 28), // "OnGradientColorMiddleChanged"
QT_MOC_LITERAL(7, 120, 28), // "OnGradientColorBottomChanged"
QT_MOC_LITERAL(8, 149, 18), // "OnIntensityChanged"
QT_MOC_LITERAL(9, 168, 9), // "Intensity"
QT_MOC_LITERAL(10, 178, 19), // "OnUseTextureChanged"
QT_MOC_LITERAL(11, 198, 10), // "UseTexture"
QT_MOC_LITERAL(12, 209, 13), // "OnLoadTexture"
QT_MOC_LITERAL(13, 223, 19) // "OnBackgroundChanged"

    },
    "QBackgroundWidget\0OnBackgroundIlluminationChanged\0"
    "\0Checked\0OnGradientColorTopChanged\0"
    "Color\0OnGradientColorMiddleChanged\0"
    "OnGradientColorBottomChanged\0"
    "OnIntensityChanged\0Intensity\0"
    "OnUseTextureChanged\0UseTexture\0"
    "OnLoadTexture\0OnBackgroundChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBackgroundWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x0a /* Public */,
       4,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       7,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
      10,    1,   69,    2, 0x0a /* Public */,
      12,    0,   72,    2, 0x0a /* Public */,
      13,    0,   73,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::QColor,    5,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QBackgroundWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBackgroundWidget *_t = static_cast<QBackgroundWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnBackgroundIlluminationChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->OnGradientColorTopChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 2: _t->OnGradientColorMiddleChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 3: _t->OnGradientColorBottomChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 4: _t->OnIntensityChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->OnUseTextureChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->OnLoadTexture(); break;
        case 7: _t->OnBackgroundChanged(); break;
        default: ;
        }
    }
}

const QMetaObject QBackgroundWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QBackgroundWidget.data,
      qt_meta_data_QBackgroundWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBackgroundWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBackgroundWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBackgroundWidget.stringdata0))
        return static_cast<void*>(const_cast< QBackgroundWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QBackgroundWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
