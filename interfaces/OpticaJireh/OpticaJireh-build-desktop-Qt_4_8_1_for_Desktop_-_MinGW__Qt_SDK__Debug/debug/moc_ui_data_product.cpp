/****************************************************************************
** Meta object code from reading C++ file 'ui_data_product.h'
**
** Created: Thu 20. Sep 00:10:15 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../OpticaJireh/ui_data_product.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ui_data_product.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UI_DATA_PRODUCT[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_UI_DATA_PRODUCT[] = {
    "UI_DATA_PRODUCT\0\0on_pushButton_Cancelar_clicked()\0"
};

void UI_DATA_PRODUCT::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        UI_DATA_PRODUCT *_t = static_cast<UI_DATA_PRODUCT *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Cancelar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData UI_DATA_PRODUCT::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject UI_DATA_PRODUCT::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_UI_DATA_PRODUCT,
      qt_meta_data_UI_DATA_PRODUCT, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UI_DATA_PRODUCT::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UI_DATA_PRODUCT::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UI_DATA_PRODUCT::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UI_DATA_PRODUCT))
        return static_cast<void*>(const_cast< UI_DATA_PRODUCT*>(this));
    return QWidget::qt_metacast(_clname);
}

int UI_DATA_PRODUCT::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
