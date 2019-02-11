#ifndef GENERALINFORMATION_H
#define GENERALINFORMATION_H

#include <QDialog>

namespace Ui {
class GeneralInformation;
}

class GeneralInformation : public QDialog
{
    Q_OBJECT

public:
    explicit GeneralInformation(QWidget *parent = 0);
    ~GeneralInformation();

private:
    Ui::GeneralInformation *ui;
};

#endif // GENERALINFORMATION_H
