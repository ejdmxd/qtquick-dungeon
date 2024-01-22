/****************************************************************************
** Meta object code from reading C++ file 'inventory.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt/inventory.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'inventory.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInventoryENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInventoryENDCLASS = QtMocHelpers::stringData(
    "Inventory",
    "gunChanged",
    "",
    "armorChanged",
    "visibilityChanged",
    "isVisible",
    "pickGun",
    "Gun*",
    "g",
    "dropGun",
    "pickArmor",
    "Armor*",
    "a",
    "dropArmor",
    "gun",
    "armor",
    "visible"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInventoryENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[10];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[18];
    char stringdata5[10];
    char stringdata6[8];
    char stringdata7[5];
    char stringdata8[2];
    char stringdata9[8];
    char stringdata10[10];
    char stringdata11[7];
    char stringdata12[2];
    char stringdata13[10];
    char stringdata14[4];
    char stringdata15[6];
    char stringdata16[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInventoryENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInventoryENDCLASS_t qt_meta_stringdata_CLASSInventoryENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Inventory"
        QT_MOC_LITERAL(10, 10),  // "gunChanged"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "armorChanged"
        QT_MOC_LITERAL(35, 17),  // "visibilityChanged"
        QT_MOC_LITERAL(53, 9),  // "isVisible"
        QT_MOC_LITERAL(63, 7),  // "pickGun"
        QT_MOC_LITERAL(71, 4),  // "Gun*"
        QT_MOC_LITERAL(76, 1),  // "g"
        QT_MOC_LITERAL(78, 7),  // "dropGun"
        QT_MOC_LITERAL(86, 9),  // "pickArmor"
        QT_MOC_LITERAL(96, 6),  // "Armor*"
        QT_MOC_LITERAL(103, 1),  // "a"
        QT_MOC_LITERAL(105, 9),  // "dropArmor"
        QT_MOC_LITERAL(115, 3),  // "gun"
        QT_MOC_LITERAL(119, 5),  // "armor"
        QT_MOC_LITERAL(125, 7)   // "visible"
    },
    "Inventory",
    "gunChanged",
    "",
    "armorChanged",
    "visibilityChanged",
    "isVisible",
    "pickGun",
    "Gun*",
    "g",
    "dropGun",
    "pickArmor",
    "Armor*",
    "a",
    "dropArmor",
    "gun",
    "armor",
    "visible"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInventoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       3,   74, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    4 /* Public */,
       3,    0,   63,    2, 0x06,    5 /* Public */,
       4,    0,   64,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   65,    2, 0x02,    7 /* Public */,
       6,    1,   66,    2, 0x02,    8 /* Public */,
       9,    0,   69,    2, 0x02,   10 /* Public */,
      10,    1,   70,    2, 0x02,   11 /* Public */,
      13,    0,   73,    2, 0x02,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,

 // properties: name, type, flags
      14, 0x80000000 | 7, 0x00015009, uint(0), 0,
      15, 0x80000000 | 11, 0x00015009, uint(1), 0,
      16, QMetaType::Bool, 0x00015001, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Inventory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSInventoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInventoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInventoryENDCLASS_t,
        // property 'gun'
        QtPrivate::TypeAndForceComplete<Gun*, std::true_type>,
        // property 'armor'
        QtPrivate::TypeAndForceComplete<Armor*, std::true_type>,
        // property 'visible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Inventory, std::true_type>,
        // method 'gunChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'armorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'visibilityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isVisible'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'pickGun'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Gun *, std::false_type>,
        // method 'dropGun'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pickArmor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Armor *, std::false_type>,
        // method 'dropArmor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Inventory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Inventory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->gunChanged(); break;
        case 1: _t->armorChanged(); break;
        case 2: _t->visibilityChanged(); break;
        case 3: { bool _r = _t->isVisible();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: _t->pickGun((*reinterpret_cast< std::add_pointer_t<Gun*>>(_a[1]))); break;
        case 5: _t->dropGun(); break;
        case 6: _t->pickArmor((*reinterpret_cast< std::add_pointer_t<Armor*>>(_a[1]))); break;
        case 7: _t->dropArmor(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Inventory::*)();
            if (_t _q_method = &Inventory::gunChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Inventory::*)();
            if (_t _q_method = &Inventory::armorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Inventory::*)();
            if (_t _q_method = &Inventory::visibilityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Inventory *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< Gun**>(_v) = _t->getGun(); break;
        case 1: *reinterpret_cast< Armor**>(_v) = _t->getArmor(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isVisible(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Inventory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Inventory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInventoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Inventory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void Inventory::gunChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Inventory::armorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Inventory::visibilityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
