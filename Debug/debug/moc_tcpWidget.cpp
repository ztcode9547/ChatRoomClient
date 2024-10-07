/****************************************************************************
** Meta object code from reading C++ file 'tcpWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcpWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tcpWidget_t {
    QByteArrayData data[10];
    char stringdata0[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tcpWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tcpWidget_t qt_meta_stringdata_tcpWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "tcpWidget"
QT_MOC_LITERAL(1, 10, 18), // "changeRegWidgetTip"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 15), // "updateUserLists"
QT_MOC_LITERAL(4, 46, 2), // "js"
QT_MOC_LITERAL(5, 49, 11), // "loginServer"
QT_MOC_LITERAL(6, 61, 12), // "signalHandle"
QT_MOC_LITERAL(7, 74, 10), // "singalType"
QT_MOC_LITERAL(8, 85, 12), // "toChatWidget"
QT_MOC_LITERAL(9, 98, 3) // "ret"

    },
    "tcpWidget\0changeRegWidgetTip\0\0"
    "updateUserLists\0js\0loginServer\0"
    "signalHandle\0singalType\0toChatWidget\0"
    "ret"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tcpWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    1,   40,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   43,    2, 0x08 /* Private */,
       6,    1,   44,    2, 0x08 /* Private */,
       8,    1,   47,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::QJsonObject,    9,

       0        // eod
};

void tcpWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tcpWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeRegWidgetTip(); break;
        case 1: _t->updateUserLists((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 2: _t->loginServer(); break;
        case 3: _t->signalHandle((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->toChatWidget((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (tcpWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpWidget::changeRegWidgetTip)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (tcpWidget::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpWidget::updateUserLists)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tcpWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_tcpWidget.data,
    qt_meta_data_tcpWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tcpWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcpWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tcpWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int tcpWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void tcpWidget::changeRegWidgetTip()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void tcpWidget::updateUserLists(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
