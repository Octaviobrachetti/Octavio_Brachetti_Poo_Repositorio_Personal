/****************************************************************************
** Meta object code from reading C++ file 'EditorTexto.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/EditorTexto.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EditorTexto.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN11EditorTextoE_t {};
} // unnamed namespace

template <> constexpr inline auto EditorTexto::qt_create_metaobjectdata<qt_meta_tag_ZN11EditorTextoE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "EditorTexto",
        "validacionLinea",
        "",
        "numeroLinea",
        "valida",
        "mensaje",
        "onCursorMovido"
    };

    QtMocHelpers::UintData qt_methods {
        // Signal 'validacionLinea'
        QtMocHelpers::SignalData<void(int, bool, const QString &)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { QMetaType::Int, 3 }, { QMetaType::Bool, 4 }, { QMetaType::QString, 5 },
        }}),
        // Slot 'onCursorMovido'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<EditorTexto, qt_meta_tag_ZN11EditorTextoE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject EditorTexto::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EditorTextoE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EditorTextoE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN11EditorTextoE_t>.metaTypes,
    nullptr
} };

void EditorTexto::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<EditorTexto *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->validacionLinea((*reinterpret_cast<std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast<std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->onCursorMovido(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        if (QtMocHelpers::indexOfMethod<void (EditorTexto::*)(int , bool , const QString & )>(_a, &EditorTexto::validacionLinea, 0))
            return;
    }
}

const QMetaObject *EditorTexto::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EditorTexto::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN11EditorTextoE_t>.strings))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int EditorTexto::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void EditorTexto::validacionLinea(int _t1, bool _t2, const QString & _t3)
{
    QMetaObject::activate<void>(this, &staticMetaObject, 0, nullptr, _t1, _t2, _t3);
}
QT_WARNING_POP
