#include "loginsign.h"
#include "ui_loginsign.h"

LoginSign::LoginSign(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginSign)
{
    ui->setupUi(this);
}

LoginSign::~LoginSign()
{
    delete ui;
}
