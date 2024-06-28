/****************************************************************************
** Meta object code from reading C++ file 'scararobot.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../scararobot.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'scararobot.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSScaraRobotENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSScaraRobotENDCLASS = QtMocHelpers::stringData(
    "ScaraRobot",
    "commandDone",
    "",
    "on_zSlider_valueChanged",
    "value",
    "on_j1SubButton_clicked",
    "on_j1SumButton_clicked",
    "on_j1Slider_valueChanged",
    "on_j2SubButton_clicked",
    "on_j2SumButton_clicked",
    "on_j3SubButton_clicked",
    "on_j3SumButton_clicked",
    "on_j2Slider_valueChanged",
    "on_j3Slider_valueChanged",
    "on_saveButton_clicked",
    "on_onOffButton_clicked",
    "on_clearButton_clicked",
    "on_clearAllButton_clicked",
    "on_xSpinbox_valueChanged",
    "arg1",
    "on_ySpinbox_valueChanged",
    "on_zSpinbox_valueChanged",
    "on_movePostionButton_clicked",
    "on_homeButton_clicked",
    "on_speedSpinBox_valueChanged",
    "on_AcclerationSpinBox_valueChanged",
    "on_runButton_clicked",
    "on_emergencyButton_clicked",
    "on_zSubButton_clicked",
    "on_zSumButton_clicked",
    "sendCommandAndWait",
    "command"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSScaraRobotENDCLASS_t {
    uint offsetsAndSizes[64];
    char stringdata0[11];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[6];
    char stringdata5[23];
    char stringdata6[23];
    char stringdata7[25];
    char stringdata8[23];
    char stringdata9[23];
    char stringdata10[23];
    char stringdata11[23];
    char stringdata12[25];
    char stringdata13[25];
    char stringdata14[22];
    char stringdata15[23];
    char stringdata16[23];
    char stringdata17[26];
    char stringdata18[25];
    char stringdata19[5];
    char stringdata20[25];
    char stringdata21[25];
    char stringdata22[29];
    char stringdata23[22];
    char stringdata24[29];
    char stringdata25[35];
    char stringdata26[21];
    char stringdata27[27];
    char stringdata28[22];
    char stringdata29[22];
    char stringdata30[19];
    char stringdata31[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSScaraRobotENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSScaraRobotENDCLASS_t qt_meta_stringdata_CLASSScaraRobotENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "ScaraRobot"
        QT_MOC_LITERAL(11, 11),  // "commandDone"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 23),  // "on_zSlider_valueChanged"
        QT_MOC_LITERAL(48, 5),  // "value"
        QT_MOC_LITERAL(54, 22),  // "on_j1SubButton_clicked"
        QT_MOC_LITERAL(77, 22),  // "on_j1SumButton_clicked"
        QT_MOC_LITERAL(100, 24),  // "on_j1Slider_valueChanged"
        QT_MOC_LITERAL(125, 22),  // "on_j2SubButton_clicked"
        QT_MOC_LITERAL(148, 22),  // "on_j2SumButton_clicked"
        QT_MOC_LITERAL(171, 22),  // "on_j3SubButton_clicked"
        QT_MOC_LITERAL(194, 22),  // "on_j3SumButton_clicked"
        QT_MOC_LITERAL(217, 24),  // "on_j2Slider_valueChanged"
        QT_MOC_LITERAL(242, 24),  // "on_j3Slider_valueChanged"
        QT_MOC_LITERAL(267, 21),  // "on_saveButton_clicked"
        QT_MOC_LITERAL(289, 22),  // "on_onOffButton_clicked"
        QT_MOC_LITERAL(312, 22),  // "on_clearButton_clicked"
        QT_MOC_LITERAL(335, 25),  // "on_clearAllButton_clicked"
        QT_MOC_LITERAL(361, 24),  // "on_xSpinbox_valueChanged"
        QT_MOC_LITERAL(386, 4),  // "arg1"
        QT_MOC_LITERAL(391, 24),  // "on_ySpinbox_valueChanged"
        QT_MOC_LITERAL(416, 24),  // "on_zSpinbox_valueChanged"
        QT_MOC_LITERAL(441, 28),  // "on_movePostionButton_clicked"
        QT_MOC_LITERAL(470, 21),  // "on_homeButton_clicked"
        QT_MOC_LITERAL(492, 28),  // "on_speedSpinBox_valueChanged"
        QT_MOC_LITERAL(521, 34),  // "on_AcclerationSpinBox_valueCh..."
        QT_MOC_LITERAL(556, 20),  // "on_runButton_clicked"
        QT_MOC_LITERAL(577, 26),  // "on_emergencyButton_clicked"
        QT_MOC_LITERAL(604, 21),  // "on_zSubButton_clicked"
        QT_MOC_LITERAL(626, 21),  // "on_zSumButton_clicked"
        QT_MOC_LITERAL(648, 18),  // "sendCommandAndWait"
        QT_MOC_LITERAL(667, 7)   // "command"
    },
    "ScaraRobot",
    "commandDone",
    "",
    "on_zSlider_valueChanged",
    "value",
    "on_j1SubButton_clicked",
    "on_j1SumButton_clicked",
    "on_j1Slider_valueChanged",
    "on_j2SubButton_clicked",
    "on_j2SumButton_clicked",
    "on_j3SubButton_clicked",
    "on_j3SumButton_clicked",
    "on_j2Slider_valueChanged",
    "on_j3Slider_valueChanged",
    "on_saveButton_clicked",
    "on_onOffButton_clicked",
    "on_clearButton_clicked",
    "on_clearAllButton_clicked",
    "on_xSpinbox_valueChanged",
    "arg1",
    "on_ySpinbox_valueChanged",
    "on_zSpinbox_valueChanged",
    "on_movePostionButton_clicked",
    "on_homeButton_clicked",
    "on_speedSpinBox_valueChanged",
    "on_AcclerationSpinBox_valueChanged",
    "on_runButton_clicked",
    "on_emergencyButton_clicked",
    "on_zSubButton_clicked",
    "on_zSumButton_clicked",
    "sendCommandAndWait",
    "command"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSScaraRobotENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      27,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  176,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  177,    2, 0x08,    2 /* Private */,
       5,    0,  180,    2, 0x08,    4 /* Private */,
       6,    0,  181,    2, 0x08,    5 /* Private */,
       7,    1,  182,    2, 0x08,    6 /* Private */,
       8,    0,  185,    2, 0x08,    8 /* Private */,
       9,    0,  186,    2, 0x08,    9 /* Private */,
      10,    0,  187,    2, 0x08,   10 /* Private */,
      11,    0,  188,    2, 0x08,   11 /* Private */,
      12,    1,  189,    2, 0x08,   12 /* Private */,
      13,    1,  192,    2, 0x08,   14 /* Private */,
      14,    0,  195,    2, 0x08,   16 /* Private */,
      15,    0,  196,    2, 0x08,   17 /* Private */,
      16,    0,  197,    2, 0x08,   18 /* Private */,
      17,    0,  198,    2, 0x08,   19 /* Private */,
      18,    1,  199,    2, 0x08,   20 /* Private */,
      20,    1,  202,    2, 0x08,   22 /* Private */,
      21,    1,  205,    2, 0x08,   24 /* Private */,
      22,    0,  208,    2, 0x08,   26 /* Private */,
      23,    0,  209,    2, 0x08,   27 /* Private */,
      24,    1,  210,    2, 0x08,   28 /* Private */,
      25,    1,  213,    2, 0x08,   30 /* Private */,
      26,    0,  216,    2, 0x08,   32 /* Private */,
      27,    0,  217,    2, 0x08,   33 /* Private */,
      28,    0,  218,    2, 0x08,   34 /* Private */,
      29,    0,  219,    2, 0x08,   35 /* Private */,
      30,    1,  220,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   31,

       0        // eod
};

Q_CONSTINIT const QMetaObject ScaraRobot::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSScaraRobotENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSScaraRobotENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSScaraRobotENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ScaraRobot, std::true_type>,
        // method 'commandDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_j1SubButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_j1SumButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_j1Slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_j2SubButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_j2SumButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_j3SubButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_j3SumButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_j2Slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_j3Slider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_saveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_onOffButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_clearAllButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_xSpinbox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_ySpinbox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_zSpinbox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_movePostionButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_homeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_speedSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_AcclerationSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_runButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_emergencyButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zSubButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_zSumButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendCommandAndWait'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void ScaraRobot::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ScaraRobot *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->commandDone(); break;
        case 1: _t->on_zSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_j1SubButton_clicked(); break;
        case 3: _t->on_j1SumButton_clicked(); break;
        case 4: _t->on_j1Slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->on_j2SubButton_clicked(); break;
        case 6: _t->on_j2SumButton_clicked(); break;
        case 7: _t->on_j3SubButton_clicked(); break;
        case 8: _t->on_j3SumButton_clicked(); break;
        case 9: _t->on_j2Slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->on_j3Slider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_saveButton_clicked(); break;
        case 12: _t->on_onOffButton_clicked(); break;
        case 13: _t->on_clearButton_clicked(); break;
        case 14: _t->on_clearAllButton_clicked(); break;
        case 15: _t->on_xSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->on_ySpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 17: _t->on_zSpinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->on_movePostionButton_clicked(); break;
        case 19: _t->on_homeButton_clicked(); break;
        case 20: _t->on_speedSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 21: _t->on_AcclerationSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 22: _t->on_runButton_clicked(); break;
        case 23: _t->on_emergencyButton_clicked(); break;
        case 24: _t->on_zSubButton_clicked(); break;
        case 25: _t->on_zSumButton_clicked(); break;
        case 26: _t->sendCommandAndWait((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ScaraRobot::*)();
            if (_t _q_method = &ScaraRobot::commandDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ScaraRobot::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ScaraRobot::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSScaraRobotENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int ScaraRobot::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 27)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 27;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 27)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 27;
    }
    return _id;
}

// SIGNAL 0
void ScaraRobot::commandDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
