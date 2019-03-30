#ifndef LOGINSIGN_H
#define LOGINSIGN_H

#include <QDialog>

namespace Ui {
class LoginSign;
}

class LoginSign : public QDialog
{
    Q_OBJECT

public:
    explicit LoginSign(QWidget *parent = 0);
    ~LoginSign();

private:
    Ui::LoginSign *ui;
};

#endif // LOGINSIGN_H
