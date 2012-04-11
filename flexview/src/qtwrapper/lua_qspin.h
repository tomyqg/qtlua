#ifndef LUA_QSPIN_H
#define LUA_QSPIN_H

#include "lua_qt_wrapper.hpp"

typedef class_<QAbstractSpinBox, QWidget> LQAbstractSpinBox;
typedef class_<QSpinBox, QAbstractSpinBox> LQSpinBox;
typedef class_<QDoubleSpinBox, QAbstractSpinBox> LQDoubleSpinBox;

typedef class_<QDate> LQDate;
typedef class_<QTime> LQTime;
typedef class_<QDateTime> LQDateTime;
typedef class_<QDateTimeEdit, QAbstractSpinBox> LQDateTimeEdit;
typedef class_<QDateEdit,QDateTimeEdit> LQDateEdit;
typedef class_<QTimeEdit,QDateTimeEdit> LQTimeEdit;


LQAbstractSpinBox lqabstractspinbox();
LQSpinBox lqspinbox();
LQDoubleSpinBox lqdoublespinbox();

LQDate lqdate();
LQTime lqtime();
LQDateTime lqdatetime();
LQDateTimeEdit lqdatetimeedit();
LQDateEdit lqdateedit();
LQTimeEdit lqtimeedit();
#endif // LUA_QSPIN_H
