/****************************************************************************
** Meta object code from reading C++ file 'openglscene.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../include/openglscene.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'openglscene.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_OpenGLScene_t {
    QByteArrayData data[19];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OpenGLScene_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OpenGLScene_t qt_meta_stringdata_OpenGLScene = {
    {
QT_MOC_LITERAL(0, 0, 11), // "OpenGLScene"
QT_MOC_LITERAL(1, 12, 16), // "xRotationChanged"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 5), // "angle"
QT_MOC_LITERAL(4, 36, 16), // "yRotationChanged"
QT_MOC_LITERAL(5, 53, 16), // "zRotationChanged"
QT_MOC_LITERAL(6, 70, 19), // "xTranslationChanged"
QT_MOC_LITERAL(7, 90, 1), // "x"
QT_MOC_LITERAL(8, 92, 19), // "yTranslationChanged"
QT_MOC_LITERAL(9, 112, 1), // "y"
QT_MOC_LITERAL(10, 114, 19), // "zTranslationChanged"
QT_MOC_LITERAL(11, 134, 1), // "z"
QT_MOC_LITERAL(12, 136, 12), // "setXRotation"
QT_MOC_LITERAL(13, 149, 12), // "setYRotation"
QT_MOC_LITERAL(14, 162, 12), // "setZRotation"
QT_MOC_LITERAL(15, 175, 15), // "setXTranslation"
QT_MOC_LITERAL(16, 191, 15), // "setYTranslation"
QT_MOC_LITERAL(17, 207, 15), // "setZTranslation"
QT_MOC_LITERAL(18, 223, 7) // "cleanup"

    },
    "OpenGLScene\0xRotationChanged\0\0angle\0"
    "yRotationChanged\0zRotationChanged\0"
    "xTranslationChanged\0x\0yTranslationChanged\0"
    "y\0zTranslationChanged\0z\0setXRotation\0"
    "setYRotation\0setZRotation\0setXTranslation\0"
    "setYTranslation\0setZTranslation\0cleanup"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OpenGLScene[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   79,    2, 0x06 /* Public */,
       4,    1,   82,    2, 0x06 /* Public */,
       5,    1,   85,    2, 0x06 /* Public */,
       6,    1,   88,    2, 0x06 /* Public */,
       8,    1,   91,    2, 0x06 /* Public */,
      10,    1,   94,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,   97,    2, 0x0a /* Public */,
      13,    1,  100,    2, 0x0a /* Public */,
      14,    1,  103,    2, 0x0a /* Public */,
      15,    1,  106,    2, 0x0a /* Public */,
      16,    1,  109,    2, 0x0a /* Public */,
      17,    1,  112,    2, 0x0a /* Public */,
      18,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void OpenGLScene::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OpenGLScene *_t = static_cast<OpenGLScene *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->xRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->yRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->zRotationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->xTranslationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->yTranslationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->zTranslationChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->setXRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setYRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setZRotation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->setXTranslation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setYTranslation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->setZTranslation((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->cleanup(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OpenGLScene::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenGLScene::xRotationChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (OpenGLScene::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenGLScene::yRotationChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (OpenGLScene::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenGLScene::zRotationChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (OpenGLScene::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenGLScene::xTranslationChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (OpenGLScene::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenGLScene::yTranslationChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (OpenGLScene::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OpenGLScene::zTranslationChanged)) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject OpenGLScene::staticMetaObject = {
    { &QOpenGLWidget::staticMetaObject, qt_meta_stringdata_OpenGLScene.data,
      qt_meta_data_OpenGLScene,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *OpenGLScene::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OpenGLScene::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_OpenGLScene.stringdata0))
        return static_cast<void*>(const_cast< OpenGLScene*>(this));
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(const_cast< OpenGLScene*>(this));
    return QOpenGLWidget::qt_metacast(_clname);
}

int OpenGLScene::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OpenGLScene::xRotationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OpenGLScene::yRotationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OpenGLScene::zRotationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OpenGLScene::xTranslationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OpenGLScene::yTranslationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OpenGLScene::zTranslationChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
