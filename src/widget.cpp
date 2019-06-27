#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    connect(ui->lineEdit, SIGNAL(clicked()), this, SLOT(lineEditClicked()));
    num=new Num_Lock(this);
    connect(num,SIGNAL(checkout()),this,SLOT(CheckOut()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::lineEditClicked() {

    num->move(169,230);
    num->show();
}

void Widget::CheckOut() {
    FKb = new FullKeyboard(this);
    FKb->move(4,230);
    FKb->show();
}
