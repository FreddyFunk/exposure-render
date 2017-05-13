/****************************************************************************
** Meta object code from reading C++ file 'FilmWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../FilmWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FilmWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QFilmResolutionButton_t {
    QByteArrayData data[5];
    char stringdata0[63];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFilmResolutionButton_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFilmResolutionButton_t qt_meta_stringdata_QFilmResolutionButton = {
    {
QT_MOC_LITERAL(0, 0, 21), // "QFilmResolutionButton"
QT_MOC_LITERAL(1, 22, 9), // "SetPreset"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 22), // "QFilmResolutionPreset&"
QT_MOC_LITERAL(4, 56, 6) // "Preset"

    },
    "QFilmResolutionButton\0SetPreset\0\0"
    "QFilmResolutionPreset&\0Preset"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFilmResolutionButton[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void QFilmResolutionButton::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFilmResolutionButton *_t = static_cast<QFilmResolutionButton *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetPreset((*reinterpret_cast< QFilmResolutionPreset(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (QFilmResolutionButton::*_t)(QFilmResolutionPreset & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&QFilmResolutionButton::SetPreset)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject QFilmResolutionButton::staticMetaObject = {
    { &QPushButton::staticMetaObject, qt_meta_stringdata_QFilmResolutionButton.data,
      qt_meta_data_QFilmResolutionButton,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFilmResolutionButton::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFilmResolutionButton::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFilmResolutionButton.stringdata0))
        return static_cast<void*>(const_cast< QFilmResolutionButton*>(this));
    return QPushButton::qt_metacast(_clname);
}

int QFilmResolutionButton::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void QFilmResolutionButton::SetPreset(QFilmResolutionPreset & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_QFilmWidget_t {
    QByteArrayData data[20];
    char stringdata0[211];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QFilmWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QFilmWidget_t qt_meta_stringdata_QFilmWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "QFilmWidget"
QT_MOC_LITERAL(1, 12, 13), // "SetPresetType"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 10), // "PresetType"
QT_MOC_LITERAL(4, 38, 9), // "SetPreset"
QT_MOC_LITERAL(5, 48, 22), // "QFilmResolutionPreset&"
QT_MOC_LITERAL(6, 71, 6), // "Preset"
QT_MOC_LITERAL(7, 78, 8), // "SetWidth"
QT_MOC_LITERAL(8, 87, 5), // "Width"
QT_MOC_LITERAL(9, 93, 9), // "SetHeight"
QT_MOC_LITERAL(10, 103, 6), // "Height"
QT_MOC_LITERAL(11, 110, 11), // "SetExposure"
QT_MOC_LITERAL(12, 122, 8), // "Exposure"
QT_MOC_LITERAL(13, 131, 13), // "OnRenderBegin"
QT_MOC_LITERAL(14, 145, 11), // "OnRenderEnd"
QT_MOC_LITERAL(15, 157, 13), // "OnFilmChanged"
QT_MOC_LITERAL(16, 171, 5), // "QFilm"
QT_MOC_LITERAL(17, 177, 4), // "Film"
QT_MOC_LITERAL(18, 182, 16), // "OnNoiseReduction"
QT_MOC_LITERAL(19, 199, 11) // "ReduceNoise"

    },
    "QFilmWidget\0SetPresetType\0\0PresetType\0"
    "SetPreset\0QFilmResolutionPreset&\0"
    "Preset\0SetWidth\0Width\0SetHeight\0Height\0"
    "SetExposure\0Exposure\0OnRenderBegin\0"
    "OnRenderEnd\0OnFilmChanged\0QFilm\0Film\0"
    "OnNoiseReduction\0ReduceNoise"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QFilmWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       4,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      11,    1,   71,    2, 0x0a /* Public */,
      13,    0,   74,    2, 0x0a /* Public */,
      14,    0,   75,    2, 0x0a /* Public */,
      15,    1,   76,    2, 0x0a /* Public */,
      18,    1,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Double,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,   19,

       0        // eod
};

void QFilmWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QFilmWidget *_t = static_cast<QFilmWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SetPresetType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SetPreset((*reinterpret_cast< QFilmResolutionPreset(*)>(_a[1]))); break;
        case 2: _t->SetWidth((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->SetHeight((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->SetExposure((*reinterpret_cast< const double(*)>(_a[1]))); break;
        case 5: _t->OnRenderBegin(); break;
        case 6: _t->OnRenderEnd(); break;
        case 7: _t->OnFilmChanged((*reinterpret_cast< const QFilm(*)>(_a[1]))); break;
        case 8: _t->OnNoiseReduction((*reinterpret_cast< const int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject QFilmWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QFilmWidget.data,
      qt_meta_data_QFilmWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QFilmWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QFilmWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QFilmWidget.stringdata0))
        return static_cast<void*>(const_cast< QFilmWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QFilmWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGroupBox::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
