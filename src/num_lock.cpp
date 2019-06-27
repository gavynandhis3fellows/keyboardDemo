#include "num_lock.h"
#include "ui_num_lock.h"

Num_Lock::Num_Lock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Num_Lock)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    ui->setupUi(this);
}

Num_Lock::~Num_Lock()
{
    delete ui;
}

void Num_Lock::on_num_bd_clicked()
{
    emit checkout();
    close();
}
