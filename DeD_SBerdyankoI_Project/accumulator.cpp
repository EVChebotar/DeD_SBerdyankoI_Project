#include "accumulator.h"

void Accumulator :: Summ(QLineEdit *isPlus, QTimeEdit *AddTime, QTimeEdit *AccumCurrentTime, QLineEdit *isPlusAccum){

    QTime
            //Хранит сумму аккумулятора и введенного времени корректировки
            Summ,

            //Час для проверки максимально возможного времени
            HourTime;

    qint64
            // хранит время корректировки в секундах
            SecsCorrect = ( (AddTime->time().minute() )*60 + AddTime->time().second() ),

            // хранит время аккумулятора в секундах
            SecsAccum = ( (AccumCurrentTime->time().minute() )*60 + AccumCurrentTime->time().second() );

    Summ.setHMS(0,0,0);
    HourTime.setHMS(1,0,0);

    if ( (isPlus->text() == "+") && (isPlusAccum->text() == "+")){

        Summ = Summ.addSecs( SecsAccum + SecsCorrect );
        if ( Summ >= HourTime ) Summ.setHMS(0,0,0);

    }
    else if ( (isPlus->text() == "-") && (isPlusAccum->text() == "+") ){

        if( (SecsAccum - SecsCorrect) >= 0 ) Summ = Summ.addSecs( SecsAccum - SecsCorrect );
        else {
            Summ.setHMS(0,0,0);
            Summ = Summ.addSecs( SecsCorrect - SecsAccum );
            isPlusAccum->setText("-");
        }


    }
    else if( (isPlus->text() == "+") && (isPlusAccum->text() == "-") ){

        Summ = Summ.addSecs( SecsAccum - SecsCorrect );
        if ( (SecsAccum - SecsCorrect) <= 0) {
            Summ.setHMS(0,0,0);
            Summ = Summ.addSecs( SecsCorrect - SecsAccum );
            isPlusAccum->setText("+");
        }

    }
    else if( (isPlus->text() == "-") && (isPlusAccum->text() == "-") ){

        Summ = Summ.addSecs( SecsAccum + SecsCorrect );
        if ( Summ >= HourTime ) Summ.setHMS(0,0,0);

    }
    AccumCurrentTime->setTime(Summ);

    //qDebug() << "Подсчитанное время аккумулятора" << AccumCurrentTime->time().toString("mm : ss");
}
