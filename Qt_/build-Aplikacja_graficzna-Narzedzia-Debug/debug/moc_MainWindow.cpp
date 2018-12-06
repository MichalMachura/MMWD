/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Aplikacja_graficzna/MainWindow.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[14];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "updateDisplaingDayActions"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 17), // "whenStartFactorsY"
QT_MOC_LITERAL(4, 56, 17), // "whenStartFactorsA"
QT_MOC_LITERAL(5, 74, 16), // "whenUstawClicked"
QT_MOC_LITERAL(6, 91, 18), // "whenCoffeeQuantity"
QT_MOC_LITERAL(7, 110, 23), // "whenCoffeeMomentChanged"
QT_MOC_LITERAL(8, 134, 21), // "whenSleepBeginChanged"
QT_MOC_LITERAL(9, 156, 19), // "whenSleepEndChanged"
QT_MOC_LITERAL(10, 176, 20), // "whenDodajKaweClicked"
QT_MOC_LITERAL(11, 197, 19), // "whenDodajSenClicked"
QT_MOC_LITERAL(12, 217, 20), // "whenUsunAkcjeClicked"
QT_MOC_LITERAL(13, 238, 37) // "whenSprawdzOgraniczeniaIPopra..."

    },
    "MainWindow\0updateDisplaingDayActions\0"
    "\0whenStartFactorsY\0whenStartFactorsA\0"
    "whenUstawClicked\0whenCoffeeQuantity\0"
    "whenCoffeeMomentChanged\0whenSleepBeginChanged\0"
    "whenSleepEndChanged\0whenDodajKaweClicked\0"
    "whenDodajSenClicked\0whenUsunAkcjeClicked\0"
    "whenSprawdzOgraniczeniaIPoprawClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   77,    2, 0x0a /* Public */,
       4,    1,   80,    2, 0x0a /* Public */,
       5,    0,   83,    2, 0x0a /* Public */,
       6,    1,   84,    2, 0x0a /* Public */,
       7,    1,   87,    2, 0x0a /* Public */,
       8,    1,   90,    2, 0x0a /* Public */,
       9,    1,   93,    2, 0x0a /* Public */,
      10,    0,   96,    2, 0x0a /* Public */,
      11,    0,   97,    2, 0x0a /* Public */,
      12,    0,   98,    2, 0x0a /* Public */,
      13,    0,   99,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void, QMetaType::QTime,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateDisplaingDayActions((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->whenStartFactorsY((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->whenStartFactorsA((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->whenUstawClicked(); break;
        case 4: _t->whenCoffeeQuantity((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->whenCoffeeMomentChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 6: _t->whenSleepBeginChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 7: _t->whenSleepEndChanged((*reinterpret_cast< QTime(*)>(_a[1]))); break;
        case 8: _t->whenDodajKaweClicked(); break;
        case 9: _t->whenDodajSenClicked(); break;
        case 10: _t->whenUsunAkcjeClicked(); break;
        case 11: _t->whenSprawdzOgraniczeniaIPoprawClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::updateDisplaingDayActions)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::updateDisplaingDayActions(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
