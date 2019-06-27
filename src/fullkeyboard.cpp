#include "fullkeyboard.h"
#include "ui_fullkeyboard.h"
#include <QPixmap>
#include <QIcon>

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
    connect(ui->btn_a,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_s,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_d,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    /*connect(ui->btn_f,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_g,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_h,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_j,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_k,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_l,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_q,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_w,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_e,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_r,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_t,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_y,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_u,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_i,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_o,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_p,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_z,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_x,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_c,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_v,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_b,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_n,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));
    connect(ui->btn_m,SIGNAL(clicked(bool)),this,SLOT(doProcessGetEdit(bool)));*/

}

//判斷點擊次數每點擊一次字母大小來回切換
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

void FullKeyboard::doProcessGetEdit(bool)
{
    QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);

    QString btns = ui->btn_s->text();
    ui->textEdit->setText(btns);

    QString btnd = ui->btn_d->text();
    ui->textEdit->setText(btnd);

   /* QString btnf = ui->btn_f->text();
    ui->textEdit->setText(btnf);

    QString btng = ui->btn_g->text();
    ui->textEdit->setText(btng);

    QString btnh = ui->btn_h->text();
    ui->textEdit->setText(btna);

    QString btnj = ui->btn_j->text();
    ui->textEdit->setText(btnj);

    QString btnk = ui->btn_k->text();
    ui->textEdit->setText(btnk);

    QString btnl = ui->btn_l->text();
    ui->textEdit->setText(btnl);

    QString btnq = ui->btn_q->text();
    ui->textEdit->setText(btnq);

    QString btnw = ui->btn_w->text();
    ui->textEdit->setText(btnw);
    QString btne = ui->btn_e->text();
    ui->textEdit->setText(btne);

    QString btnr = ui->btn_r->text();
    ui->textEdit->setText(btnr);

    QString btnt = ui->btn_t->text();
    ui->textEdit->setText(btnt);

    QString btny = ui->btn_y->text();
    ui->textEdit->setText(btny);

    QString btnu = ui->btn_u->text();
    ui->textEdit->setText(btnu);

    QString btni = ui->btn_i->text();
    ui->textEdit->setText(btni);

    QString btno = ui->btn_o->text();
    ui->textEdit->setText(btno);

    QString btnp = ui->btn_p->text();
    ui->textEdit->setText(btnp);

    QString btnz = ui->btn_z->text();
    ui->textEdit->setText(btnz);

    QString btnx = ui->btn_x->text();
    ui->textEdit->setText(btnx);

    QString btnc = ui->btn_c->text();
    ui->textEdit->setText(btnc);

    QString btnv = ui->btn_v->text();
    ui->textEdit->setText(btnv);

    QString btnb = ui->btn_b->text();
    ui->textEdit->setText(btnb);

    QString btnn = ui->btn_n->text();
    ui->textEdit->setText(btnn);

    QString btnm = ui->btn_m->text();
    ui->textEdit->setText(btnm);
    /*QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);
    QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);
    QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);
    QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);
    QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);
    QString btna = ui->btn_a->text();
    ui->textEdit->setText(btna);*/
}
