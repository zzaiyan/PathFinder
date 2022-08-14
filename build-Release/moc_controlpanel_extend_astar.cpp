/****************************************************************************
** Meta object code from reading C++ file 'controlpanel_extend_astar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/extend/controlpanel_extend_astar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controlpanel_extend_astar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControlPanelExtendAStar_t {
    QByteArrayData data[4];
    char stringdata0[51];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControlPanelExtendAStar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControlPanelExtendAStar_t qt_meta_stringdata_ControlPanelExtendAStar = {
    {
QT_MOC_LITERAL(0, 0, 23), // "ControlPanelExtendAStar"
QT_MOC_LITERAL(1, 24, 22), // "onHeuristicTypeChanged"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 2) // "id"

    },
    "ControlPanelExtendAStar\0onHeuristicTypeChanged\0"
    "\0id"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControlPanelExtendAStar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

void ControlPanelExtendAStar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControlPanelExtendAStar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onHeuristicTypeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControlPanelExtendAStar::staticMetaObject = { {
    QMetaObject::SuperData::link<ControlPanelExtend::staticMetaObject>(),
    qt_meta_stringdata_ControlPanelExtendAStar.data,
    qt_meta_data_ControlPanelExtendAStar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControlPanelExtendAStar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControlPanelExtendAStar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControlPanelExtendAStar.stringdata0))
        return static_cast<void*>(this);
    return ControlPanelExtend::qt_metacast(_clname);
}

int ControlPanelExtendAStar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ControlPanelExtend::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
