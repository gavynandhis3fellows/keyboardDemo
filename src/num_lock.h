#ifndef NUM_LOCK_H
#define NUM_LOCK_H

#include <QWidget>
#include <QFrame>
namespace Ui {
class Num_Lock;
}

class Num_Lock : public QWidget
{
    Q_OBJECT

public:
    explicit Num_Lock(QWidget *parent = 0);
    ~Num_Lock();

private slots:
    void on_num_bd_clicked();

    void on_num_1_clicked();

private:
    Ui::Num_Lock *ui;

    QString a;
    QStringList b;

signals:
    void checkout();
};

#endif // NUM_LOCK_H
