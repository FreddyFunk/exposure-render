/****************************************************************************
** Meta object code from reading C++ file 'StatisticsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../StatisticsWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StatisticsWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QStatisticsWidget_t {
    QByteArrayData data[10];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QStatisticsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QStatisticsWidget_t qt_meta_stringdata_QStatisticsWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "QStatisticsWidget"
QT_MOC_LITERAL(1, 18, 13), // "OnRenderBegin"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 11), // "OnRenderEnd"
QT_MOC_LITERAL(4, 45, 18), // "OnStatisticChanged"
QT_MOC_LITERAL(5, 64, 5), // "Group"
QT_MOC_LITERAL(6, 70, 4), // "Name"
QT_MOC_LITERAL(7, 75, 5), // "Value"
QT_MOC_LITERAL(8, 81, 4), // "Unit"
QT_MOC_LITERAL(9, 86, 4) // "Icon"

    },
    "QStatisticsWidget\0OnRenderBegin\0\0"
    "OnRenderEnd\0OnStatisticChanged\0Group\0"
    "Name\0Value\0Unit\0Icon"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QStatisticsWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x0a /* Public */,
       3,    0,   35,    2, 0x0a /* Public */,
       4,    5,   36,    2, 0x0a /* Public */,
       4,    4,   47,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,

       0        // eod
};

void QStatisticsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QStatisticsWidget *_t = static_cast<QStatisticsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnRenderBegin(); break;
        case 1: _t->OnRenderEnd(); break;
        case 2: _t->OnStatisticChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 3: _t->OnStatisticChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        default: ;
        }
    }
}

const QMetaObject QStatisticsWidget::staticMetaObject = {
    { &QTreeWidget::staticMetaObject, qt_meta_stringdata_QStatisticsWidget.data,
      qt_meta_data_QStatisticsWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QStatisticsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QStatisticsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QStatisticsWidget.stringdata0))
        return static_cast<void*>(const_cast< QStatisticsWidget*>(this));
    return QTreeWidget::qt_metacast(_clname);
}

int QStatisticsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
