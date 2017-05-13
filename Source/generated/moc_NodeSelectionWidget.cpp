/****************************************************************************
** Meta object code from reading C++ file 'NodeSelectionWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../NodeSelectionWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NodeSelectionWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_QNodeSelectionWidget_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QNodeSelectionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QNodeSelectionWidget_t qt_meta_stringdata_QNodeSelectionWidget = {
    {
QT_MOC_LITERAL(0, 0, 20), // "QNodeSelectionWidget"
QT_MOC_LITERAL(1, 21, 22), // "OnNodeSelectionChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 6), // "QNode*"
QT_MOC_LITERAL(4, 52, 5), // "pNode"
QT_MOC_LITERAL(5, 58, 5), // "Index"
QT_MOC_LITERAL(6, 64, 11), // "OnFirstNode"
QT_MOC_LITERAL(7, 76, 14), // "OnPreviousNode"
QT_MOC_LITERAL(8, 91, 10), // "OnNextNode"
QT_MOC_LITERAL(9, 102, 10), // "OnLastNode"
QT_MOC_LITERAL(10, 113, 12) // "OnDeleteNode"

    },
    "QNodeSelectionWidget\0OnNodeSelectionChanged\0"
    "\0QNode*\0pNode\0Index\0OnFirstNode\0"
    "OnPreviousNode\0OnNextNode\0OnLastNode\0"
    "OnDeleteNode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QNodeSelectionWidget[] = {

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
       1,    1,   49,    2, 0x08 /* Private */,
       1,    1,   52,    2, 0x08 /* Private */,
       6,    0,   55,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    0,   58,    2, 0x08 /* Private */,
      10,    0,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QNodeSelectionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QNodeSelectionWidget *_t = static_cast<QNodeSelectionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->OnNodeSelectionChanged((*reinterpret_cast< QNode*(*)>(_a[1]))); break;
        case 1: _t->OnNodeSelectionChanged((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->OnFirstNode(); break;
        case 3: _t->OnPreviousNode(); break;
        case 4: _t->OnNextNode(); break;
        case 5: _t->OnLastNode(); break;
        case 6: _t->OnDeleteNode(); break;
        default: ;
        }
    }
}

const QMetaObject QNodeSelectionWidget::staticMetaObject = {
    { &QGroupBox::staticMetaObject, qt_meta_stringdata_QNodeSelectionWidget.data,
      qt_meta_data_QNodeSelectionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QNodeSelectionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QNodeSelectionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QNodeSelectionWidget.stringdata0))
        return static_cast<void*>(const_cast< QNodeSelectionWidget*>(this));
    return QGroupBox::qt_metacast(_clname);
}

int QNodeSelectionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
