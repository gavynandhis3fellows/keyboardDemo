#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "num_lock.h"
#include"mylineedit.h"
#include "text.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();


private slots:
    void lineEditClicked();
    void CheckOut();

private:
    Ui::Widget *ui;
    Num_Lock *num;
    text *t;
};

#endif // WIDGET_H
