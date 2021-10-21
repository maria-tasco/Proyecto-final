#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    escena = new QGraphicsScene;
    escena->setSceneRect(0,0, ui->graphicsView->width()-5, ui->graphicsView->height()-5);
    ui -> graphicsView -> setScene(escena);
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


