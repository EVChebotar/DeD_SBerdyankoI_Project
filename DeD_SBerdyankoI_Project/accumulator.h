#ifndef ACCUMULATOR_H
#define ACCUMULATOR_H

#include <QDateTime>
#include <QDebug>
#include <QLineEdit>
#include <QTimeEdit>

class Accumulator {

public :

    void Summ(QLineEdit *isPlus, QTimeEdit *AddTime, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum);

};

#endif // ACCUMULATOR_H
