#ifndef WRITEME_H
#define WRITEME_H

#include <QDialog>

namespace Ui {
class WriteMe;
}

class WriteMe : public QDialog
{
    Q_OBJECT

public:
    explicit WriteMe(QWidget *parent = 0);
    ~WriteMe();

private:
    Ui::WriteMe *ui;
};

#endif // WRITEME_H
