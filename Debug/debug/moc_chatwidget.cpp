/****************************************************************************
** Meta object code from reading C++ file 'chatwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.9)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../chatwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.9. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_chatWidget_t {
    QByteArrayData data[8];
    char stringdata0[122];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_chatWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_chatWidget_t qt_meta_stringdata_chatWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "chatWidget"
QT_MOC_LITERAL(1, 11, 16), // "updateUserHandle"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 2), // "js"
QT_MOC_LITERAL(4, 32, 28), // "on_launch_pushButton_clicked"
QT_MOC_LITERAL(5, 61, 15), // "groupChatHandle"
QT_MOC_LITERAL(6, 77, 14), // "getUserName_ID"
QT_MOC_LITERAL(7, 92, 29) // "on_picture_pushButton_clicked"

    },
    "chatWidget\0updateUserHandle\0\0js\0"
    "on_launch_pushButton_clicked\0"
    "groupChatHandle\0getUserName_ID\0"
    "on_picture_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_chatWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x0a /* Public */,
       4,    0,   42,    2, 0x08 /* Private */,
       5,    1,   43,    2, 0x08 /* Private */,
       6,    1,   46,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void, QMetaType::QJsonObject,    3,
    QMetaType::Void,

       0        // eod
};

void chatWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<chatWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateUserHandle((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 1: _t->on_launch_pushButton_clicked(); break;
        case 2: _t->groupChatHandle((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 3: _t->getUserName_ID((*reinterpret_cast< const QJsonObject(*)>(_a[1]))); break;
        case 4: _t->on_picture_pushButton_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject chatWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_chatWidget.data,
    qt_meta_data_chatWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *chatWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *chatWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_chatWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int chatWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
