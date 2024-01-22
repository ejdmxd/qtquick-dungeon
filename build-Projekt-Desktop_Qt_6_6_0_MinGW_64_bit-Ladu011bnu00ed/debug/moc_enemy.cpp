/****************************************************************************
** Meta object code from reading C++ file 'enemy.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Projekt/enemy.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'enemy.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSEnemyENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSEnemyENDCLASS = QtMocHelpers::stringData(
    "Enemy",
    "positionChanged",
    "",
    "rotationChanged",
    "findPlayer",
    "playerPosX",
    "playerPosY",
    "enemyX",
    "enemyY",
    "enemyType",
    "enemyRotation"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSEnemyENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[6];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[11];
    char stringdata5[11];
    char stringdata6[11];
    char stringdata7[7];
    char stringdata8[7];
    char stringdata9[10];
    char stringdata10[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSEnemyENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSEnemyENDCLASS_t qt_meta_stringdata_CLASSEnemyENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Enemy"
        QT_MOC_LITERAL(6, 15),  // "positionChanged"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 15),  // "rotationChanged"
        QT_MOC_LITERAL(39, 10),  // "findPlayer"
        QT_MOC_LITERAL(50, 10),  // "playerPosX"
        QT_MOC_LITERAL(61, 10),  // "playerPosY"
        QT_MOC_LITERAL(72, 6),  // "enemyX"
        QT_MOC_LITERAL(79, 6),  // "enemyY"
        QT_MOC_LITERAL(86, 9),  // "enemyType"
        QT_MOC_LITERAL(96, 13)   // "enemyRotation"
    },
    "Enemy",
    "positionChanged",
    "",
    "rotationChanged",
    "findPlayer",
    "playerPosX",
    "playerPosY",
    "enemyX",
    "enemyY",
    "enemyType",
    "enemyRotation"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSEnemyENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   39, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    5 /* Public */,
       3,    0,   33,    2, 0x06,    6 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    2,   34,    2, 0x02,    7 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    5,    6,

 // properties: name, type, flags
       7, QMetaType::UInt, 0x00015001, uint(0), 0,
       8, QMetaType::UInt, 0x00015001, uint(0), 0,
       9, QMetaType::QString, 0x00015401, uint(-1), 0,
      10, QMetaType::Double, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Enemy::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSEnemyENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSEnemyENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSEnemyENDCLASS_t,
        // property 'enemyX'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'enemyY'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'enemyType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'enemyRotation'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Enemy, std::true_type>,
        // method 'positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rotationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findPlayer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>
    >,
    nullptr
} };

void Enemy::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Enemy *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->positionChanged(); break;
        case 1: _t->rotationChanged(); break;
        case 2: _t->findPlayer((*reinterpret_cast< std::add_pointer_t<float>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<float>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Enemy::*)();
            if (_t _q_method = &Enemy::positionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Enemy::*)();
            if (_t _q_method = &Enemy::rotationChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Enemy *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< uint*>(_v) = _t->getEnemyPosX(); break;
        case 1: *reinterpret_cast< uint*>(_v) = _t->getEnemyPosY(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getEnemyType(); break;
        case 3: *reinterpret_cast< double*>(_v) = _t->getEnemyRotation(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *Enemy::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Enemy::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSEnemyENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Enemy::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Enemy::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Enemy::rotationChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
