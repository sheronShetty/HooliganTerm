#include "cutecomm.hpp"
#include "ui_cutecomm.h"
CuteComm::CuteComm(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::CuteComm)
{
    ui->setupUi(this);
    this->SetCustomStyleSheet();

//window->setLayout(layout);

}
void CuteComm::SetCustomStyleSheet()
{
   /* //central widget
    ui->centralWidget->setStyleSheet("QWidget { background-color: #f0f0f5 }");
    //labels
    ui->label->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    ui->label_2->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    ui->label_3->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    ui->label_4->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    ui->label_5->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    ui->label_6->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    ui->label_7->setStyleSheet("QLabel{ background-color : #595959; color : white}");
    //buttons
    ui->pushButton->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_2->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_3->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_4->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_5->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_6->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_7->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    ui->pushButton_8->setStyleSheet("QPushButton{ background-color : #595959; color : white}");
    //
    ui->plainTextEdit->setStyleSheet("QPlainTextEdit{ background-color : #595959; color : white}");
    ui->plainTextEdit_2->setStyleSheet("QPlainTextEdit{ background-color : #595959; color : white}");

    ui->lineEdit_2->setStyleSheet("QLineEdit{ background-color : #ffffff; color : white}");
    ui->lineEdit_3->setStyleSheet("QLineEdit{ background-color : #ffffff; color : white}");
    ui->tableView->setStyleSheet("QTableView{ background-color : #595959; color : white}");

    ui->textEdit->setStyleSheet("QTextEdit{ background-color : #595959; color : white}");

    ui->checkBox->setStyleSheet("QCheckBox{ background-color : #595959; color : white}");
    ui->checkBox_2->setStyleSheet("QCheckBox{ background-color : #595959; color : white}");
    ui->checkBox_3->setStyleSheet("QCheckBox{ background-color : #595959; color : white}");
    ui->checkBox_4->setStyleSheet("QCheckBox{ background-color : #595959; color : white}");
    ui->checkBox_5->setStyleSheet("QCheckBox{ background-color : #595959; color : white}");
    ui->checkBox_6->setStyleSheet("QCheckBox{ background-color : #595959; color : white}");

    ui->spinBox->setStyleSheet("QSpinBox{ background-color : #595959; color : white}");
    ui->spinBox_2->setStyleSheet("QSpinBox{ background-color : #595959; color : white}");
    ui->spinBox_3->setStyleSheet("QSpinBox{ background-color : #595959; color : white}");
    ui->spinBox_4->setStyleSheet("QSpinBox{ background-color : #595959; color : white}");
    ui->spinBox_5->setStyleSheet("QSpinBox{ background-color : #595959; color : white}");
    ui->spinBox_6->setStyleSheet("QSpinBox{ background-color : #595959; color : white}");

*/
       //ui->centralWidget->setGeometry(0,0,ui->centralWidget->height(),ui->centralWidget->width());

       //central widget
       ui->centralWidget->setStyleSheet("QWidget { background-color: #616161 }");

       //labels
       ui->label->setStyleSheet("QLabel{ color : white}");
       ui->label_2->setStyleSheet("QLabel{color : white}");
       ui->label_3->setStyleSheet("QLabel{color : white}");
       ui->label_4->setStyleSheet("QLabel{color : white}");
       ui->label_5->setStyleSheet("QLabel{color : white}");
       ui->label_6->setStyleSheet("QLabel{ color : white}");
       ui->label_7->setStyleSheet("QLabel{ color : white}");
       ui->label_8->setStyleSheet("QLabel{ color : white}");
       ui->label_9->setStyleSheet("QLabel{ color : white}");
//       ui->label_10->setStyleSheet("QLabel{ color : white}");

       //buttons
       ui->pushButton->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
       ui->pushButton_2->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
       ui->pushButton_3->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
       ui->pushButton_4->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
       ui->pushButton_5->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
       ui->pushButton_6->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
       ui->pushButton_7->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");
      // ui->pushButton_8->setStyleSheet("QPushButton{ background-color : #ffffff; color : black}");

       // PlainTextEdit
       ui->plainTextEdit->setStyleSheet("QPlainTextEdit{ background-color : #ffffff; color : black}");
       ui->plainTextEdit_2->setStyleSheet("QPlainTextEdit{ background-color : #ffffff; color : black}");

       // LineEdit
       ui->lineEdit_2->setStyleSheet("QLineEdit{ background-color : #ffffff; color : black}");
       ui->lineEdit->setStyleSheet("QLineEdit{ background-color : #ffffff; color : black}");

       // TableView
       ui->tableWidget->setStyleSheet("QTableView{ background-color : #ffffff; color : black}");

       // TextEdit
       //ui->textEdit->setStyleSheet("QTextEdit{ background-color : #ffffff; color : black}");

       // CheckBox
       ui->checkBox->setStyleSheet("QCheckBox{color : white}");
       ui->checkBox_2->setStyleSheet("QCheckBox{color : white}");
       ui->checkBox_3->setStyleSheet("QCheckBox{color : white}");
       ui->checkBox_4->setStyleSheet("QCheckBox{color : white}");
       ui->checkBox_5->setStyleSheet("QCheckBox{color : white}");
       ui->checkBox_6->setStyleSheet("QCheckBox{color : white}");

       // SpinBox
       ui->spinBox_2->setStyleSheet("QSpinBox{ background-color : #ffffff; color : black}");
       ui->spinBox_3->setStyleSheet("QSpinBox{ background-color : #ffffff; color : black}");
       ui->spinBox_4->setStyleSheet("QSpinBox{ background-color : #ffffff; color : black}");
    //   ui->spinBox_5->setStyleSheet("QSpinBox{ background-color : #ffffff; color : black}");

       // Combo Box
       ui->comboBox->setStyleSheet("QComboBox{ background-color : #ffffff; color : black}");
//       ui->comboBox_2->setStyleSheet("QComboBox{ background-color : #ffffff; color : black}");
//       ui->comboBox_3->setStyleSheet("QComboBox{ background-color : #ffffff; color : black}");
}
CuteComm::~CuteComm()
{
    delete ui;
}
