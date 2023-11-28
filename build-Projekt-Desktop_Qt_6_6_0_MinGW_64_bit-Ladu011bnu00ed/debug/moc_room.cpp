/****************************************************************************
** Meta object code from reading C++ file 'room.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt/room.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'room.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSRoomENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRoomENDCLASS = QtMocHelpers::stringData(
    "Room",
    "addItem",
    "",
    "Item*",
    "item",
    "position",
    "addBlock",
    "Block*",
    "block",
    "addEnemy",
    "Enemy*",
    "enemy"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRoomENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[5];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[5];
    char stringdata5[9];
    char stringdata6[9];
    char stringdata7[7];
    char stringdata8[6];
    char stringdata9[9];
    char stringdata10[7];
    char stringdata11[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRoomENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRoomENDCLASS_t qt_meta_stringdata_CLASSRoomENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Room"
        QT_MOC_LITERAL(5, 7),  // "addItem"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 5),  // "Item*"
        QT_MOC_LITERAL(20, 4),  // "item"
        QT_MOC_LITERAL(25, 8),  // "position"
        QT_MOC_LITERAL(34, 8),  // "addBlock"
        QT_MOC_LITERAL(43, 6),  // "Block*"
        QT_MOC_LITERAL(50, 5),  // "block"
        QT_MOC_LITERAL(56, 8),  // "addEnemy"
        QT_MOC_LITERAL(65, 6),  // "Enemy*"
        QT_MOC_LITERAL(72, 5)   // "enemy"
    },
    "Room",
    "addItem",
    "",
    "Item*",
    "item",
    "position",
    "addBlock",
    "Block*",
    "block",
    "addEnemy",
    "Enemy*",
    "enemy"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRoomENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   32,    2, 0x02,    1 /* Public */,
       6,    2,   37,    2, 0x02,    4 /* Public */,
       9,    2,   42,    2, 0x02,    7 /* Public */,

 // methods: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QPointF,    4,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QPointF,    8,    5,
    QMetaType::Void, 0x80000000 | 10, QMetaType::QPointF,   11,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject Room::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSRoomENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRoomENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRoomENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Room, std::true_type>,
        // method 'addItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Item *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'addBlock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Block *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>,
        // method 'addEnemy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Enemy *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPointF &, std::false_type>
    >,
    nullptr
} };

void Room::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Room *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addItem((*reinterpret_cast< std::add_pointer_t<Item*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 1: _t->addBlock((*reinterpret_cast< std::add_pointer_t<Block*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        case 2: _t->addEnemy((*reinterpret_cast< std::add_pointer_t<Enemy*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPointF>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *Room::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Room::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRoomENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Room::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
