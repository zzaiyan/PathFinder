/****************************************************************************
** Meta object code from reading C++ file 'world.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/world.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'world.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_World_t {
    QByteArrayData data[56];
    char stringdata0[604];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_World_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_World_t qt_meta_stringdata_World = {
    {
QT_MOC_LITERAL(0, 0, 5), // "World"
QT_MOC_LITERAL(1, 6, 10), // "sigLogInfo"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "msg"
QT_MOC_LITERAL(4, 22, 11), // "sigLogError"
QT_MOC_LITERAL(5, 34, 11), // "sigDrawPath"
QT_MOC_LITERAL(6, 46, 10), // "sigDrawSrc"
QT_MOC_LITERAL(7, 57, 11), // "sigDrawDest"
QT_MOC_LITERAL(8, 69, 18), // "sigUpdateWorldSize"
QT_MOC_LITERAL(9, 88, 1), // "w"
QT_MOC_LITERAL(10, 90, 1), // "h"
QT_MOC_LITERAL(11, 92, 18), // "sigFindPathStopped"
QT_MOC_LITERAL(12, 111, 9), // "setMargin"
QT_MOC_LITERAL(13, 121, 1), // "m"
QT_MOC_LITERAL(14, 123, 12), // "setWorldSize"
QT_MOC_LITERAL(15, 136, 10), // "worldWidth"
QT_MOC_LITERAL(16, 147, 11), // "worldHeight"
QT_MOC_LITERAL(17, 159, 10), // "setBgColor"
QT_MOC_LITERAL(18, 170, 1), // "c"
QT_MOC_LITERAL(19, 172, 12), // "setPathColor"
QT_MOC_LITERAL(20, 185, 12), // "setLineColor"
QT_MOC_LITERAL(21, 198, 16), // "setObstacleColor"
QT_MOC_LITERAL(22, 215, 11), // "setSrcColor"
QT_MOC_LITERAL(23, 227, 12), // "setDestColor"
QT_MOC_LITERAL(24, 240, 15), // "setVisitedColor"
QT_MOC_LITERAL(25, 256, 11), // "resetColors"
QT_MOC_LITERAL(26, 268, 11), // "setAllAlpha"
QT_MOC_LITERAL(27, 280, 14), // "startSetSource"
QT_MOC_LITERAL(28, 295, 19), // "startSetDestination"
QT_MOC_LITERAL(29, 315, 18), // "setRandomObstacles"
QT_MOC_LITERAL(30, 334, 5), // "ratio"
QT_MOC_LITERAL(31, 340, 21), // "setEnableDiagonalMove"
QT_MOC_LITERAL(32, 362, 6), // "enable"
QT_MOC_LITERAL(33, 369, 7), // "visited"
QT_MOC_LITERAL(34, 377, 1), // "x"
QT_MOC_LITERAL(35, 379, 1), // "y"
QT_MOC_LITERAL(36, 381, 18), // "setShowVisitedPath"
QT_MOC_LITERAL(37, 400, 4), // "show"
QT_MOC_LITERAL(38, 405, 26), // "setShowVisitedPathInterval"
QT_MOC_LITERAL(39, 432, 8), // "interval"
QT_MOC_LITERAL(40, 441, 8), // "findPath"
QT_MOC_LITERAL(41, 450, 12), // "stopFindPath"
QT_MOC_LITERAL(42, 463, 8), // "clearAll"
QT_MOC_LITERAL(43, 472, 8), // "resetAll"
QT_MOC_LITERAL(44, 481, 9), // "clearPath"
QT_MOC_LITERAL(45, 491, 10), // "refreshAll"
QT_MOC_LITERAL(46, 502, 9), // "drawGrids"
QT_MOC_LITERAL(47, 512, 12), // "drawObstacle"
QT_MOC_LITERAL(48, 525, 6), // "worldX"
QT_MOC_LITERAL(49, 532, 6), // "worldY"
QT_MOC_LITERAL(50, 539, 13), // "drawObstacles"
QT_MOC_LITERAL(51, 553, 11), // "drawVisited"
QT_MOC_LITERAL(52, 565, 12), // "drawVisiteds"
QT_MOC_LITERAL(53, 578, 7), // "drawSrc"
QT_MOC_LITERAL(54, 586, 8), // "drawDest"
QT_MOC_LITERAL(55, 595, 8) // "drawPath"

    },
    "World\0sigLogInfo\0\0msg\0sigLogError\0"
    "sigDrawPath\0sigDrawSrc\0sigDrawDest\0"
    "sigUpdateWorldSize\0w\0h\0sigFindPathStopped\0"
    "setMargin\0m\0setWorldSize\0worldWidth\0"
    "worldHeight\0setBgColor\0c\0setPathColor\0"
    "setLineColor\0setObstacleColor\0setSrcColor\0"
    "setDestColor\0setVisitedColor\0resetColors\0"
    "setAllAlpha\0startSetSource\0"
    "startSetDestination\0setRandomObstacles\0"
    "ratio\0setEnableDiagonalMove\0enable\0"
    "visited\0x\0y\0setShowVisitedPath\0show\0"
    "setShowVisitedPathInterval\0interval\0"
    "findPath\0stopFindPath\0clearAll\0resetAll\0"
    "clearPath\0refreshAll\0drawGrids\0"
    "drawObstacle\0worldX\0worldY\0drawObstacles\0"
    "drawVisited\0drawVisiteds\0drawSrc\0"
    "drawDest\0drawPath"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_World[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      39,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  209,    2, 0x06 /* Public */,
       4,    1,  212,    2, 0x06 /* Public */,
       5,    0,  215,    2, 0x06 /* Public */,
       6,    0,  216,    2, 0x06 /* Public */,
       7,    0,  217,    2, 0x06 /* Public */,
       8,    2,  218,    2, 0x06 /* Public */,
      11,    0,  223,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  224,    2, 0x0a /* Public */,
      14,    2,  227,    2, 0x0a /* Public */,
      17,    1,  232,    2, 0x0a /* Public */,
      19,    1,  235,    2, 0x0a /* Public */,
      20,    1,  238,    2, 0x0a /* Public */,
      21,    1,  241,    2, 0x0a /* Public */,
      22,    1,  244,    2, 0x0a /* Public */,
      23,    1,  247,    2, 0x0a /* Public */,
      24,    1,  250,    2, 0x0a /* Public */,
      25,    0,  253,    2, 0x0a /* Public */,
      26,    0,  254,    2, 0x0a /* Public */,
      27,    0,  255,    2, 0x0a /* Public */,
      28,    0,  256,    2, 0x0a /* Public */,
      29,    1,  257,    2, 0x0a /* Public */,
      31,    1,  260,    2, 0x0a /* Public */,
      33,    2,  263,    2, 0x0a /* Public */,
      36,    1,  268,    2, 0x0a /* Public */,
      38,    1,  271,    2, 0x0a /* Public */,
      40,    0,  274,    2, 0x0a /* Public */,
      41,    0,  275,    2, 0x0a /* Public */,
      42,    0,  276,    2, 0x0a /* Public */,
      43,    0,  277,    2, 0x0a /* Public */,
      44,    0,  278,    2, 0x0a /* Public */,
      45,    0,  279,    2, 0x0a /* Public */,
      46,    0,  280,    2, 0x0a /* Public */,
      47,    2,  281,    2, 0x0a /* Public */,
      50,    0,  286,    2, 0x0a /* Public */,
      51,    2,  287,    2, 0x0a /* Public */,
      52,    0,  292,    2, 0x0a /* Public */,
      53,    0,  293,    2, 0x0a /* Public */,
      54,    0,  294,    2, 0x0a /* Public */,
      55,    0,  295,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    9,   10,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Bool, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void, QMetaType::QColor,   18,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   34,   35,
    QMetaType::Void, QMetaType::Bool,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   49,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   48,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void World::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<World *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sigLogInfo((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->sigLogError((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->sigDrawPath(); break;
        case 3: _t->sigDrawSrc(); break;
        case 4: _t->sigDrawDest(); break;
        case 5: _t->sigUpdateWorldSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->sigFindPathStopped(); break;
        case 7: _t->setMargin((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: { bool _r = _t->setWorldSize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->setBgColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 10: _t->setPathColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 11: _t->setLineColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 12: _t->setObstacleColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 13: _t->setSrcColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 14: _t->setDestColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 15: _t->setVisitedColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 16: _t->resetColors(); break;
        case 17: _t->setAllAlpha(); break;
        case 18: _t->startSetSource(); break;
        case 19: _t->startSetDestination(); break;
        case 20: _t->setRandomObstacles((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 21: _t->setEnableDiagonalMove((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->visited((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->setShowVisitedPath((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->setShowVisitedPathInterval((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->findPath(); break;
        case 26: _t->stopFindPath(); break;
        case 27: _t->clearAll(); break;
        case 28: _t->resetAll(); break;
        case 29: _t->clearPath(); break;
        case 30: _t->refreshAll(); break;
        case 31: _t->drawGrids(); break;
        case 32: _t->drawObstacle((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 33: _t->drawObstacles(); break;
        case 34: _t->drawVisited((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->drawVisiteds(); break;
        case 36: _t->drawSrc(); break;
        case 37: _t->drawDest(); break;
        case 38: _t->drawPath(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (World::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigLogInfo)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (World::*)(QString ) const;
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigLogError)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (World::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigDrawPath)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (World::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigDrawSrc)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (World::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigDrawDest)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (World::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigUpdateWorldSize)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (World::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&World::sigFindPathStopped)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject World::staticMetaObject = { {
    QMetaObject::SuperData::link<QLabel::staticMetaObject>(),
    qt_meta_stringdata_World.data,
    qt_meta_data_World,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *World::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *World::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_World.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int World::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 39)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 39;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 39)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 39;
    }
    return _id;
}

// SIGNAL 0
void World::sigLogInfo(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< World *>(this), &staticMetaObject, 0, _a);
}

// SIGNAL 1
void World::sigLogError(QString _t1)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(const_cast< World *>(this), &staticMetaObject, 1, _a);
}

// SIGNAL 2
void World::sigDrawPath()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void World::sigDrawSrc()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void World::sigDrawDest()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void World::sigUpdateWorldSize(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void World::sigFindPathStopped()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
