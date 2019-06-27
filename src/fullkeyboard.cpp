#include "fullkeyboard.h"
#include "ui_fullkeyboard.h"
#include <QPixmap>
#include <QIcon>
#include <QDebug>

FullKeyboard::FullKeyboard(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FullKeyboard)
{
    ui->setupUi(this);
    Init();

}

FullKeyboard::~FullKeyboard()
{
    delete ui;
}

void FullKeyboard::Init()
{
    connect(ui->btn_change,SIGNAL(clicked(bool)),this,SLOT(doProcessChangeCase(bool)));



}

void FullKeyboard::doProcessChangeCase(bool)
{
    static int i = 0;
    ++i;
    if(i%2==0){
        ui->btn_a->setText("A");
        ui->btn_s->setText("S");
        ui->btn_d->setText("D");
        ui->btn_f->setText("F");
        ui->btn_g->setText("G");
        ui->btn_h->setText("H");
        ui->btn_j->setText("J");
        ui->btn_k->setText("K");
        ui->btn_l->setText("L");
        ui->btn_q->setText("Q");
        ui->btn_w->setText("W");
        ui->btn_e->setText("E");
        ui->btn_r->setText("R");
        ui->btn_t->setText("T");
        ui->btn_y->setText("Y");
        ui->btn_u->setText("U");
        ui->btn_i->setText("I");
        ui->btn_o->setText("O");
        ui->btn_p->setText("P");
        ui->btn_z->setText("Z");
        ui->btn_x->setText("X");
        ui->btn_c->setText("C");
        ui->btn_v->setText("V");
        ui->btn_b->setText("B");
        ui->btn_n->setText("N");
        ui->btn_m->setText("M");

    }
    else {
        ui->btn_a->setText("a");
        ui->btn_s->setText("s");
        ui->btn_d->setText("d");
        ui->btn_f->setText("f");
        ui->btn_g->setText("g");
        ui->btn_h->setText("h");
        ui->btn_j->setText("j");
        ui->btn_k->setText("k");
        ui->btn_l->setText("l");
        ui->btn_q->setText("q");
        ui->btn_w->setText("w");
        ui->btn_e->setText("e");
        ui->btn_r->setText("r");
        ui->btn_t->setText("t");
        ui->btn_y->setText("y");
        ui->btn_u->setText("u");
        ui->btn_i->setText("i");
        ui->btn_o->setText("o");
        ui->btn_p->setText("p");
        ui->btn_z->setText("z");
        ui->btn_x->setText("x");
        ui->btn_c->setText("c");
        ui->btn_v->setText("v");
        ui->btn_b->setText("b");
        ui->btn_n->setText("n");
        ui->btn_m->setText("m");
    }

}
