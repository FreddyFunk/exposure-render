/****************************************************************************
** Meta object code from reading C++ file 'Controls.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Controls.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Controls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QColorPushButton_t {
    QByteArrayData data[5];
    char stringdata0[66];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QColorPushButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QColorPushButton_t qt_meta_stringdata_QColorPushButton = {
    {
QT_MOC_LITERAL(0, 0, 16), // "QColorPushButton"
QT_MOC_LITERAL(1, 17, 19), // "currentColorChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 21), // "OnCurrentColorChanged"
QT_MOC_LITERAL(4, 60, 5) // "Color"

    },
    "QColorPushButton\0currentColorChanged\0"
    "\0OnCurrentColorChanged\0Color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QColorPushButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,

       0        // eod
};

void QColorPushButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QColorPushButton *_t = static_cast<QColorPushButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->OnCurrentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QColorPushButton::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QColorPushButton::currentColorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QColorPushButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QColorPushButton.data,
      qt_meta_data_QColorPushButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QColorPushButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QColorPushButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QColorPushButton.stringdata0))
        return static_cast<void*>(const_cast< QColorPushButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QColorPushButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QColorPushButton::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QColorSelector_t {
    QByteArrayData data[5];
    char stringdata0[64];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QColorSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QColorSelector_t qt_meta_stringdata_QColorSelector = {
    {
QT_MOC_LITERAL(0, 0, 14), // "QColorSelector"
QT_MOC_LITERAL(1, 15, 19), // "currentColorChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 21), // "OnCurrentColorChanged"
QT_MOC_LITERAL(4, 58, 5) // "Color"

    },
    "QColorSelector\0currentColorChanged\0\0"
    "OnCurrentColorChanged\0Color"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QColorSelector[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QColor,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QColor,    4,

       0        // eod
};

void QColorSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QColorSelector *_t = static_cast<QColorSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 1: _t->OnCurrentColorChanged((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QColorSelector::*_t)(const QColor & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QColorSelector::currentColorChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QColorSelector::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_QColorSelector.data,
      qt_meta_data_QColorSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QColorSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QColorSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QColorSelector.stringdata0))
        return static_cast<void*>(const_cast< QColorSelector*>(this));
    return QFrame::qt_metacast(_clname);
}

int QColorSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void QColorSelector::currentColorChanged(const QColor & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QDoubleSlider_t {
    QByteArrayData data[10];
    char stringdata0[83];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleSlider_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleSlider_t qt_meta_stringdata_QDoubleSlider = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QDoubleSlider"
QT_MOC_LITERAL(1, 14, 12), // "valueChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 5), // "Value"
QT_MOC_LITERAL(4, 34, 12), // "rangeChanged"
QT_MOC_LITERAL(5, 47, 3), // "Min"
QT_MOC_LITERAL(6, 51, 3), // "Max"
QT_MOC_LITERAL(7, 55, 8), // "setValue"
QT_MOC_LITERAL(8, 64, 5), // "value"
QT_MOC_LITERAL(9, 70, 12) // "BlockSignals"

    },
    "QDoubleSlider\0valueChanged\0\0Value\0"
    "rangeChanged\0Min\0Max\0setValue\0value\0"
    "BlockSignals"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleSlider[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       4,    2,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    1,   47,    2, 0x0a /* Public */,
       7,    2,   50,    2, 0x0a /* Public */,
       7,    1,   55,    2, 0x2a /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::Double,    3,
    QMetaType::Void, QMetaType::Double, QMetaType::Double,    5,    6,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Double, QMetaType::Bool,    3,    9,
    QMetaType::Void, QMetaType::Double,    3,

       0        // eod
};

void QDoubleSlider::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QDoubleSlider *_t = static_cast<QDoubleSlider *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 1: _t->rangeChanged((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 2: _t->setValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setValue((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 4: _t->setValue((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QDoubleSlider::*_t)(double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleSlider::valueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (QDoubleSlider::*_t)(double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QDoubleSlider::rangeChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject QDoubleSlider::staticMetaObject = {
    { &QSlider::staticMetaObject, qt_meta_stringdata_QDoubleSlider.data,
      qt_meta_data_QDoubleSlider,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDoubleSlider::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSlider::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSlider.stringdata0))
        return static_cast<void*>(const_cast< QDoubleSlider*>(this));
    return QSlider::qt_metacast(_clname);
}

int QDoubleSlider::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSlider::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void QDoubleSlider::valueChanged(double _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDoubleSlider::rangeChanged(double _t1, double _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_QDoubleSpinner_t {
    QByteArrayData data[1];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QDoubleSpinner_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QDoubleSpinner_t qt_meta_stringdata_QDoubleSpinner = {
    {
QT_MOC_LITERAL(0, 0, 14) // "QDoubleSpinner"

    },
    "QDoubleSpinner"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QDoubleSpinner[] = {

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

void QDoubleSpinner::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject QDoubleSpinner::staticMetaObject = {
    { &QDoubleSpinBox::staticMetaObject, qt_meta_stringdata_QDoubleSpinner.data,
      qt_meta_data_QDoubleSpinner,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QDoubleSpinner::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QDoubleSpinner::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QDoubleSpinner.stringdata0))
        return static_cast<void*>(const_cast< QDoubleSpinner*>(this));
    return QDoubleSpinBox::qt_metacast(_clname);
}

int QDoubleSpinner::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDoubleSpinBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
