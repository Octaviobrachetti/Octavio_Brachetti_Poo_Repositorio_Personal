/****************************************************************************
** Meta object code from reading C++ file 'EditorPrincipal.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EditorPrincipal.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorPrincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
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
struct qt_meta_tag_ZN15EditorPrincipalE_t {};
} // unnamed namespace

template <> constexpr inline auto EditorPrincipal::qt_create_metaobjectdata<qt_meta_tag_ZN15EditorPrincipalE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EditorPrincipal",
        "onLenguajeCambiado",
        "",
        "lenguaje",
        "onExportarJpg",
        "onSalir",
        "onValidacionLinea",
        "numeroLinea",
        "valida",
        "mensaje"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'onLenguajeCambiado'
        QtMocHelpers::SlotData<void(const QString &)>(1, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 3 },
        }}),
        // Slot 'onExportarJpg'
        QtMocHelpers::SlotData<void()>(4, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onSalir'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'onValidacionLinea'
        QtMocHelpers::SlotData<void(int, bool, const QString &)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 7 }, { QMetaType::Bool, 8 }, { QMetaType::QString, 9 },
        }}),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditorPrincipal, qt_meta_tag_ZN15EditorPrincipalE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EditorPrincipal::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15EditorPrincipalE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15EditorPrincipalE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN15EditorPrincipalE_t>.metaTypes,
    nullptr
} };

void EditorPrincipal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditorPrincipal *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->onLenguajeCambiado((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onExportarJpg(); break;
        case 2: _t->onSalir(); break;
        case 3: _t->onValidacionLinea((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        default: ;
        }
    }
}

const QMetaObject *EditorPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN15EditorPrincipalE_t>.strings))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Pantalla"))
        return static_cast< Pantalla*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int EditorPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
