#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->lineEdit, SIGNAL(clicked()), this, SLOT(lineEditClicked()));
    Num_Lock *nl=new Num_Lock(this);
    connect(nl,SIGNAL(checkout()),this,SLOT(CheckOut()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::lineEditClicked() {
    num = new Num_Lock(this);
    num->move(169,230);
    num->show();
}

void Widget::CheckOut() {
    t = new text(this);
    t->move(4,230);
    t->show();
    num = new Num_Lock(this);
    num->hide();
}
