#include "generalinformation.h"
#include "ui_generalinformation.h"
#include "QScrollArea"

GeneralInformation::GeneralInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GeneralInformation)
{
    ui->setupUi(this);

}

GeneralInformation::~GeneralInformation()
{
    delete ui;
}
