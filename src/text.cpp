#include "text.h"
#include "ui_text.h"

text::text(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::text)
{
    setWindowFlags(Qt::CustomizeWindowHint|Qt::FramelessWindowHint);
    hide();
    ui->setupUi(this);
}

text::~text()
{
    delete ui;
}
