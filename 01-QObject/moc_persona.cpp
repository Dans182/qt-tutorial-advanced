/****************************************************************************
** Meta object code from reading C++ file 'persona.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "persona.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'persona.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Persona_t {
    QByteArrayData data[9];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Persona_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Persona_t qt_meta_stringdata_Persona = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Persona"
QT_MOC_LITERAL(1, 8, 13), // "nombreChanged"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "QString&"
QT_MOC_LITERAL(4, 32, 6), // "nombre"
QT_MOC_LITERAL(5, 39, 11), // "edadChanged"
QT_MOC_LITERAL(6, 51, 4), // "edad"
QT_MOC_LITERAL(7, 56, 14), // "salarioChanged"
QT_MOC_LITERAL(8, 71, 7) // "salario"

    },
    "Persona\0nombreChanged\0\0QString&\0nombre\0"
    "edadChanged\0edad\0salarioChanged\0salario"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Persona[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       3,   38, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       5,    1,   32,    2, 0x06 /* Public */,
       7,    1,   35,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Double,    8,

 // properties: name, type, flags
       4, QMetaType::QString, 0x00495103,
       6, QMetaType::Int, 0x00495103,
       8, QMetaType::Double, 0x00495103,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

void Persona::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Persona *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->nombreChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->edadChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->salarioChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Persona::*)(QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Persona::nombreChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Persona::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Persona::edadChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Persona::*)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Persona::salarioChanged)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Persona *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->nombre(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->edad(); break;
        case 2: *reinterpret_cast< double*>(_v) = _t->salario(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Persona *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNombre(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setEdad(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setSalario(*reinterpret_cast< double*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Persona::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Persona.data,
    qt_meta_data_Persona,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Persona::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Persona::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Persona.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Persona::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Persona::nombreChanged(QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Persona::edadChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Persona::salarioChanged(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
