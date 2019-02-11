#include "writeme.h"
#include "ui_writeme.h"

WriteMe::WriteMe(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WriteMe)
{
    ui->setupUi(this);
}

WriteMe::~WriteMe()
{
    delete ui;
}
