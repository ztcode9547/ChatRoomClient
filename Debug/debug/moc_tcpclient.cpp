/****************************************************************************
** Meta object code from reading C++ file 'tcpclient.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../tcpclient.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcpclient.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tcpclient_t {
    QByteArrayData data[22];
    char stringdata0[287];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tcpclient_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tcpclient_t qt_meta_stringdata_tcpclient = {
    {
QT_MOC_LITERAL(0, 0, 9), // "tcpclient"
QT_MOC_LITERAL(1, 10, 6), // "UserID"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 6), // "userid"
QT_MOC_LITERAL(4, 25, 17), // "connectedToServer"
QT_MOC_LITERAL(5, 43, 10), // "singalType"
QT_MOC_LITERAL(6, 54, 12), // "changeWidget"
QT_MOC_LITERAL(7, 67, 24), // "regWidget_to_loginWidget"
QT_MOC_LITERAL(8, 92, 12), // "loginRespone"
QT_MOC_LITERAL(9, 105, 12), // "loginMessage"
QT_MOC_LITERAL(10, 118, 22), // "disconnectedFromServer"
QT_MOC_LITERAL(11, 141, 13), // "errorOccurred"
QT_MOC_LITERAL(12, 155, 15), // "updateUserLists"
QT_MOC_LITERAL(13, 171, 2), // "js"
QT_MOC_LITERAL(14, 174, 12), // "groupChatRes"
QT_MOC_LITERAL(15, 187, 11), // "UserName_ID"
QT_MOC_LITERAL(16, 199, 11), // "receiveData"
QT_MOC_LITERAL(17, 211, 11), // "onConnected"
QT_MOC_LITERAL(18, 223, 14), // "onDisconnected"
QT_MOC_LITERAL(19, 238, 7), // "onError"
QT_MOC_LITERAL(20, 246, 28), // "QAbstractSocket::SocketError"
QT_MOC_LITERAL(21, 275, 11) // "socketError"

    },
    "tcpclient\0UserID\0\0userid\0connectedToServer\0"
    "singalType\0changeWidget\0"
    "regWidget_to_loginWidget\0loginRespone\0"
    "loginMessage\0disconnectedFromServer\0"
    "errorOccurred\0updateUserLists\0js\0"
    "groupChatRes\0UserName_ID\0receiveData\0"
    "onConnected\0onDisconnected\0onError\0"
    "QAbstractSocket::SocketError\0socketError"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tcpclient[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       6,    1,   90,    2, 0x06 /* Public */,
       7,    1,   93,    2, 0x06 /* Public */,
       8,    1,   96,    2, 0x06 /* Public */,
      10,    0,   99,    2, 0x06 /* Public */,
      11,    1,  100,    2, 0x06 /* Public */,
      12,    1,  103,    2, 0x06 /* Public */,
      14,    1,  106,    2, 0x06 /* Public */,
      15,    1,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    0,  112,    2, 0x08 /* Private */,
      17,    0,  113,    2, 0x08 /* Private */,
      18,    0,  114,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QJsonObject,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::QJsonObject,   13,
    QMetaType::Void, QMetaType::QJsonObject,   13,
    QMetaType::Void, QMetaType::QJsonObject,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,

       0        // eod
};

void tcpclient::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tcpclient *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->UserID((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        case 1: _t->connectedToServer((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 2: _t->changeWidget((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 3: _t->regWidget_to_loginWidget((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 4: _t->loginRespone((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 5: _t->disconnectedFromServer(); break;
        case 6: _t->errorOccurred((*reinterpret_cast< const int(*)>(_a[1]))); break;
        case 7: _t->updateUserLists((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 8: _t->groupChatRes((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 9: _t->UserName_ID((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 10: _t->receiveData(); break;
        case 11: _t->onConnected(); break;
        case 12: _t->onDisconnected(); break;
        case 13: _t->onError((*reinterpret_cast< QAbstractSocket::SocketError(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractSocket::SocketError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (tcpclient::*)(const QByteArray );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::UserID)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::connectedToServer)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::changeWidget)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::regWidget_to_loginWidget)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::loginRespone)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::disconnectedFromServer)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::errorOccurred)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const QJsonObject & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::updateUserLists)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::groupChatRes)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (tcpclient::*)(const QJsonObject );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&tcpclient::UserName_ID)) {
                *result = 9;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject tcpclient::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_tcpclient.data,
    qt_meta_data_tcpclient,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tcpclient::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcpclient::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tcpclient.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int tcpclient::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void tcpclient::UserID(const QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void tcpclient::connectedToServer(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void tcpclient::changeWidget(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void tcpclient::regWidget_to_loginWidget(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void tcpclient::loginRespone(const QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void tcpclient::disconnectedFromServer()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void tcpclient::errorOccurred(const int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void tcpclient::updateUserLists(const QJsonObject & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void tcpclient::groupChatRes(const QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void tcpclient::UserName_ID(const QJsonObject _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
