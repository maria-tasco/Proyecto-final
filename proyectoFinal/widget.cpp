#include "widget.h"
#include "ui_widget.h"
#include <QGraphicsScene>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    escena = new QGraphicsScene;
}

Widget::~Widget()
{
    delete ui;
    delete escena;
}


void Widget::on_pushButton_clicked()
{
    ui -> textBrowser -> setText("la barra esta siendo presionada");
}

