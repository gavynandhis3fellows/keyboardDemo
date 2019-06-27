#ifndef FULLKEYBOARD_H
#define FULLKEYBOARD_H

#include <QWidget>

namespace Ui {
class FullKeyboard;
}

class FullKeyboard : public QWidget
{
    Q_OBJECT

public:
    explicit FullKeyboard(QWidget *parent = 0);
    ~FullKeyboard();
protected slots:
    void doProcessChangeCase(bool);

private:
    Ui::FullKeyboard *ui;
    void Init();
};

#endif // FULLKEYBOARD_H
