/****************************************************************************
** Meta object code from reading C++ file 'autotest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../autotest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'autotest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutoTest_t {
    QByteArrayData data[10];
    char stringdata0[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutoTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutoTest_t qt_meta_stringdata_AutoTest = {
    {
QT_MOC_LITERAL(0, 0, 8), // "AutoTest"
QT_MOC_LITERAL(1, 9, 7), // "testGui"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 12), // "testGui_data"
QT_MOC_LITERAL(4, 31, 7), // "testAdd"
QT_MOC_LITERAL(5, 39, 12), // "testAdd_data"
QT_MOC_LITERAL(6, 52, 15), // "testKeyEnterAdd"
QT_MOC_LITERAL(7, 68, 20), // "testKeyEnterAdd_data"
QT_MOC_LITERAL(8, 89, 10), // "testDelete"
QT_MOC_LITERAL(9, 100, 10) // "testEditor"

    },
    "AutoTest\0testGui\0\0testGui_data\0testAdd\0"
    "testAdd_data\0testKeyEnterAdd\0"
    "testKeyEnterAdd_data\0testDelete\0"
    "testEditor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutoTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutoTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AutoTest *_t = static_cast<AutoTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->testGui(); break;
        case 1: _t->testGui_data(); break;
        case 2: _t->testAdd(); break;
        case 3: _t->testAdd_data(); break;
        case 4: _t->testKeyEnterAdd(); break;
        case 5: _t->testKeyEnterAdd_data(); break;
        case 6: _t->testDelete(); break;
        case 7: _t->testEditor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutoTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_AutoTest.data,
      qt_meta_data_AutoTest,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *AutoTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutoTest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutoTest.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AutoTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
