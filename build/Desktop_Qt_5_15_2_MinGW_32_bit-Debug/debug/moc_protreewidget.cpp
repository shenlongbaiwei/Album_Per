/****************************************************************************
** Meta object code from reading C++ file 'protreewidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../protreewidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'protreewidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProTreeWidget_t {
    QByteArrayData data[23];
    char stringdata0[299];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProTreeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProTreeWidget_t qt_meta_stringdata_ProTreeWidget = {
    {
QT_MOC_LITERAL(0, 0, 13), // "ProTreeWidget"
QT_MOC_LITERAL(1, 14, 17), // "SigUpdateProgress"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "SigUpdateSelected"
QT_MOC_LITERAL(4, 51, 16), // "SigClearSelected"
QT_MOC_LITERAL(5, 68, 17), // "SigCancelProgress"
QT_MOC_LITERAL(6, 86, 12), // "SigUpdatePic"
QT_MOC_LITERAL(7, 99, 13), // "SlotUpdatePic"
QT_MOC_LITERAL(8, 113, 4), // "path"
QT_MOC_LITERAL(9, 118, 15), // "SlotItemPressed"
QT_MOC_LITERAL(10, 134, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(11, 151, 4), // "item"
QT_MOC_LITERAL(12, 156, 6), // "column"
QT_MOC_LITERAL(13, 163, 10), // "SlotImport"
QT_MOC_LITERAL(14, 174, 18), // "SlotUpdateProgress"
QT_MOC_LITERAL(15, 193, 5), // "count"
QT_MOC_LITERAL(16, 199, 18), // "SlotCancelProgress"
QT_MOC_LITERAL(17, 218, 18), // "SlotFinishProgress"
QT_MOC_LITERAL(18, 237, 21), // "slotDoubleClickedItem"
QT_MOC_LITERAL(19, 259, 10), // "doubleItem"
QT_MOC_LITERAL(20, 270, 3), // "col"
QT_MOC_LITERAL(21, 274, 11), // "SlotPreShow"
QT_MOC_LITERAL(22, 286, 12) // "SlotNextShow"

    },
    "ProTreeWidget\0SigUpdateProgress\0\0"
    "SigUpdateSelected\0SigClearSelected\0"
    "SigCancelProgress\0SigUpdatePic\0"
    "SlotUpdatePic\0path\0SlotItemPressed\0"
    "QTreeWidgetItem*\0item\0column\0SlotImport\0"
    "SlotUpdateProgress\0count\0SlotCancelProgress\0"
    "SlotFinishProgress\0slotDoubleClickedItem\0"
    "doubleItem\0col\0SlotPreShow\0SlotNextShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProTreeWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       3,    1,   87,    2, 0x06 /* Public */,
       4,    0,   90,    2, 0x06 /* Public */,
       5,    0,   91,    2, 0x06 /* Public */,
       6,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    2,   98,    2, 0x0a /* Public */,
      13,    0,  103,    2, 0x0a /* Public */,
      14,    1,  104,    2, 0x0a /* Public */,
      16,    0,  107,    2, 0x0a /* Public */,
      17,    0,  108,    2, 0x0a /* Public */,
      18,    2,  109,    2, 0x0a /* Public */,
      21,    0,  114,    2, 0x0a /* Public */,
      22,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   11,   12,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int,   19,   20,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void ProTreeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProTreeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->SigUpdateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->SigUpdateSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->SigClearSelected(); break;
        case 3: _t->SigCancelProgress(); break;
        case 4: _t->SigUpdatePic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->SlotUpdatePic((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->SlotItemPressed((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->SlotImport(); break;
        case 8: _t->SlotUpdateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->SlotCancelProgress(); break;
        case 10: _t->SlotFinishProgress(); break;
        case 11: _t->slotDoubleClickedItem((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->SlotPreShow(); break;
        case 13: _t->SlotNextShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ProTreeWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProTreeWidget::SigUpdateProgress)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ProTreeWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProTreeWidget::SigUpdateSelected)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ProTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProTreeWidget::SigClearSelected)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ProTreeWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProTreeWidget::SigCancelProgress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ProTreeWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProTreeWidget::SigUpdatePic)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ProTreeWidget::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ProTreeWidget::SlotUpdatePic)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProTreeWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QTreeWidget::staticMetaObject>(),
    qt_meta_stringdata_ProTreeWidget.data,
    qt_meta_data_ProTreeWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProTreeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProTreeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProTreeWidget.stringdata0))
        return static_cast<void*>(this);
    return QTreeWidget::qt_metacast(_clname);
}

int ProTreeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTreeWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void ProTreeWidget::SigUpdateProgress(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void ProTreeWidget::SigUpdateSelected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void ProTreeWidget::SigClearSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ProTreeWidget::SigCancelProgress()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void ProTreeWidget::SigUpdatePic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void ProTreeWidget::SlotUpdatePic(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
