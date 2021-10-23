#include "widget.h"
#include "ui_widget.h"


void Widget::keyPressEvent(QKeyEvent *i)
{
    if(i -> key() == Qt::Key_S){
        barra -> setY(barra ->y()+10);
    }
}

Widget::Widget(QWidget *parent) //constructor
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    barra = new ObjetosEscenario (":/ObjetosEscenario/Bloques/Imagenes/bloqueOK.png",69,21);
    barra -> setPos(200,200);

    enemigo = new ObjetosEscenario (":/Personajes/imagenes/Imagenes/enemigo.png", 70,70);
    enemigo -> setPos(0,0);

    escena = new QGraphicsScene;
    escena->setSceneRect(0,0, ui->graphicsView->width()-5, ui->graphicsView->height()-5);
    escena -> addItem(barra);
    escena -> addItem(enemigo);
    ui -> graphicsView -> setScene(escena);
}
Widget::~Widget()
{
    //RECORDAR BORRAR TODO LO QUE USA MEMORIA DINAMICA
    delete ui;
    delete escena;
    delete barra;
}


void Widget::on_pushButton_clicked()
{
    ui -> textBrowser -> setText("la barra esta siendo presionada");
}


