/****************************************************************************
** Meta object code from reading C++ file 'loginWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../loginWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'loginWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_loginWidget_t {
    QByteArrayData data[11];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_loginWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_loginWidget_t qt_meta_stringdata_loginWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "loginWidget"
QT_MOC_LITERAL(1, 12, 24), // "loginWidget_to_regWidget"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 10), // "singalType"
QT_MOC_LITERAL(4, 49, 25), // "loginWidget_to_chatWidget"
QT_MOC_LITERAL(5, 75, 10), // "onlineuser"
QT_MOC_LITERAL(6, 86, 11), // "toRegWidget"
QT_MOC_LITERAL(7, 98, 12), // "showTipLabel"
QT_MOC_LITERAL(8, 111, 11), // "launchLogin"
QT_MOC_LITERAL(9, 123, 11), // "loginHandle"
QT_MOC_LITERAL(10, 135, 12) // "loginMessage"

    },
    "loginWidget\0loginWidget_to_regWidget\0"
    "\0singalType\0loginWidget_to_chatWidget\0"
    "onlineuser\0toRegWidget\0showTipLabel\0"
    "launchLogin\0loginHandle\0loginMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_loginWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    1,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   50,    2, 0x08 /* Private */,
       7,    1,   51,    2, 0x08 /* Private */,
       8,    0,   54,    2, 0x08 /* Private */,
       9,    1,   55,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QJsonArray,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,   10,

       0        // eod
};

void loginWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<loginWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loginWidget_to_regWidget((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 1: _t->loginWidget_to_chatWidget((*reinterpret_cast< const QJsonArray(*)>(_a[1]))); break;
        case 2: _t->toRegWidget(); break;
        case 3: _t->showTipLabel((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->launchLogin(); break;
        case 5: _t->loginHandle((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (loginWidget::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginWidget::loginWidget_to_regWidget)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (loginWidget::*)(const QJsonArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&loginWidget::loginWidget_to_chatWidget)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject loginWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_loginWidget.data,
    qt_meta_data_loginWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *loginWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *loginWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_loginWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int loginWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void loginWidget::loginWidget_to_regWidget(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void loginWidget::loginWidget_to_chatWidget(const QJsonArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
