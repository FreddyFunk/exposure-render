/****************************************************************************
** Meta object code from reading C++ file 'LogWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../LogWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QLogWidget_t {
    QByteArrayData data[11];
    char stringdata0[84];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QLogWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QLogWidget_t qt_meta_stringdata_QLogWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "QLogWidget"
QT_MOC_LITERAL(1, 11, 5), // "OnLog"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 7), // "Message"
QT_MOC_LITERAL(4, 26, 4), // "Type"
QT_MOC_LITERAL(5, 31, 4), // "Icon"
QT_MOC_LITERAL(6, 36, 13), // "OnLogProgress"
QT_MOC_LITERAL(7, 50, 5), // "Event"
QT_MOC_LITERAL(8, 56, 8), // "Progress"
QT_MOC_LITERAL(9, 65, 7), // "OnClear"
QT_MOC_LITERAL(10, 73, 10) // "OnClearAll"

    },
    "QLogWidget\0OnLog\0\0Message\0Type\0Icon\0"
    "OnLogProgress\0Event\0Progress\0OnClear\0"
    "OnClearAll"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QLogWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x0a /* Public */,
       1,    2,   44,    2, 0x0a /* Public */,
       6,    2,   49,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    5,
    QMetaType::Void, QMetaType::QString, QMetaType::Float,    7,    8,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QLogWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QLogWidget *_t = static_cast<QLogWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnLog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2]))); break;
        case 1: _t->OnLog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->OnLogProgress((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const float(*)>(_a[2]))); break;
        case 3: _t->OnClear(); break;
        case 4: _t->OnClearAll(); break;
        default: ;
        }
    }
}

const QMetaObject QLogWidget::staticMetaObject = {
    { &QTableWidget::staticMetaObject, qt_meta_stringdata_QLogWidget.data,
      qt_meta_data_QLogWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QLogWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QLogWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QLogWidget.stringdata0))
        return static_cast<void*>(const_cast< QLogWidget*>(this));
    return QTableWidget::qt_metacast(_clname);
}

int QLogWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
