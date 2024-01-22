/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt/player.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlayerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPlayerENDCLASS = QtMocHelpers::stringData(
    "Player",
    "positionXChanged",
    "",
    "positionYChanged",
    "inventoryChanged",
    "movePlayer",
    "changeX",
    "changeY",
    "value",
    "getInventory",
    "Inventory*",
    "getHealth",
    "getDef",
    "getAttack",
    "positionX",
    "positionY",
    "inventory"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlayerENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[7];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[17];
    char stringdata5[11];
    char stringdata6[8];
    char stringdata7[8];
    char stringdata8[6];
    char stringdata9[13];
    char stringdata10[11];
    char stringdata11[10];
    char stringdata12[7];
    char stringdata13[10];
    char stringdata14[10];
    char stringdata15[10];
    char stringdata16[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlayerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlayerENDCLASS_t qt_meta_stringdata_CLASSPlayerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Player"
        QT_MOC_LITERAL(7, 16),  // "positionXChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 16),  // "positionYChanged"
        QT_MOC_LITERAL(42, 16),  // "inventoryChanged"
        QT_MOC_LITERAL(59, 10),  // "movePlayer"
        QT_MOC_LITERAL(70, 7),  // "changeX"
        QT_MOC_LITERAL(78, 7),  // "changeY"
        QT_MOC_LITERAL(86, 5),  // "value"
        QT_MOC_LITERAL(92, 12),  // "getInventory"
        QT_MOC_LITERAL(105, 10),  // "Inventory*"
        QT_MOC_LITERAL(116, 9),  // "getHealth"
        QT_MOC_LITERAL(126, 6),  // "getDef"
        QT_MOC_LITERAL(133, 9),  // "getAttack"
        QT_MOC_LITERAL(143, 9),  // "positionX"
        QT_MOC_LITERAL(153, 9),  // "positionY"
        QT_MOC_LITERAL(163, 9)   // "inventory"
    },
    "Player",
    "positionXChanged",
    "",
    "positionYChanged",
    "inventoryChanged",
    "movePlayer",
    "changeX",
    "changeY",
    "value",
    "getInventory",
    "Inventory*",
    "getHealth",
    "getDef",
    "getAttack",
    "positionX",
    "positionY",
    "inventory"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlayerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   76, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    4 /* Public */,
       3,    0,   63,    2, 0x06,    5 /* Public */,
       4,    0,   64,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    3,   65,    2, 0x02,    7 /* Public */,
       9,    0,   72,    2, 0x02,   11 /* Public */,
      11,    0,   73,    2, 0x02,   12 /* Public */,
      12,    0,   74,    2, 0x02,   13 /* Public */,
      13,    0,   75,    2, 0x02,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::UInt,    6,    7,    8,
    0x80000000 | 10,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags
      14, QMetaType::UInt, 0x00015001, uint(0), 0,
      15, QMetaType::UInt, 0x00015001, uint(1), 0,
      16, 0x80000000 | 10, 0x00015009, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlayerENDCLASS_t,
        // property 'positionX'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'positionY'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'inventory'
        QtPrivate::TypeAndForceComplete<Inventory*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Player, std::true_type>,
        // method 'positionXChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'positionYChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'inventoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'movePlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<unsigned int, std::false_type>,
        // method 'getInventory'
        QtPrivate::TypeAndForceComplete<Inventory *, std::false_type>,
        // method 'getHealth'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getDef'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getAttack'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->positionXChanged(); break;
        case 1: _t->positionYChanged(); break;
        case 2: _t->inventoryChanged(); break;
        case 3: _t->movePlayer((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<uint>>(_a[3]))); break;
        case 4: { Inventory* _r = _t->getInventory();
            if (_a[0]) *reinterpret_cast< Inventory**>(_a[0]) = std::move(_r); }  break;
        case 5: { int _r = _t->getHealth();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 6: { int _r = _t->getDef();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 7: { int _r = _t->getAttack();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Player::*)();
            if (_t _q_method = &Player::positionXChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Player::*)();
            if (_t _q_method = &Player::positionYChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Player::*)();
            if (_t _q_method = &Player::inventoryChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Inventory* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getXPosition(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->getYPosition(); break;
        case 2: *reinterpret_cast< Inventory**>(_v) = _t->getInventory(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlayerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Player::positionXChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Player::positionYChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Player::inventoryChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
