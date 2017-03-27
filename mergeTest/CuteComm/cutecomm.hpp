#ifndef CUTECOMM_HPP
#define CUTECOMM_HPP

#include <QMainWindow>
#include <QLayout>

namespace Ui {
class CuteComm;
}

class CuteComm : public QMainWindow
{
    Q_OBJECT

public:
    explicit CuteComm(QWidget *parent = 0);
    void SetCustomStyleSheet();
    ~CuteComm();

private:
    Ui::CuteComm *ui;
};

#endif // CUTECOMM_HPP
