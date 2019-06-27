#include "num_lock.h"
#include "ui_num_lock.h"

Num_Lock::Num_Lock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Num_Lock)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    ui->setupUi(this);

    a.clear();
    b.clear();
}

Num_Lock::~Num_Lock()
{
    delete ui;
}

void Num_Lock::on_num_bd_clicked()
{
    close();
    emit checkout();

}

void Num_Lock::on_num_1_clicked()
{
    a+="1";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_2_clicked()
{
    a+="2";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_3_clicked()
{
    a+="3";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_4_clicked()
{
    a+="4";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_5_clicked()
{
    a+="5";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_6_clicked()
{
    a+="6";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_7_clicked()
{
    a+="7";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_8_clicked()
{
    a+="8";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_9_clicked()
{
    a+="9";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_0_clicked()
{
    a+="0";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_Dot_clicked()
{
    a+=".";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_A_clicked()
{
    a+="A";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_B_clicked()
{
    a+="B";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_C_clicked()
{
    a+="C";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_D_clicked()
{
    a+="D";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_E_clicked()
{
    a+="E";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_F_clicked()
{
    a+="F";
    ui->num_lineEdit->setText(a);
}

void Num_Lock::on_num_AC_clicked()
{
    a="-"+a;
    ui->num_lineEdit->setText(a);
}
