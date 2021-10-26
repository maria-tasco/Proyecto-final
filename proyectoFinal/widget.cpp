#include "widget.h"
#include "ui_widget.h"
#include <QTimer>
void Widget::cambioDeBarras() //solo tres barras van a cambiar durante el juego
{

}
void Widget::keyPressEvent(QKeyEvent *i)
{
    if(i -> key() == Qt::Key_S){
        barra[0] -> setY(barra[0] ->y()+10);
    }
}

Widget::Widget(QWidget *parent) //constructor
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    for (int nbarras=0;nbarras<10 ;nbarras++ ) { //creando las barras y dandoles una posicion
        if(nbarras%2==0){
            barra[nbarras] = new ObjetosEscenario (":/ObjetosEscenario/Bloques/Imagenes/bloqueOK.png",69,21);
            barra [nbarras]-> setPos(posx,posy);
            posx-=50;
            posy+=50;
        }
        else {
            barra[nbarras] = new ObjetosEscenario (":/ObjetosEscenario/Bloques/Imagenes/bloqueNoOk.png",69,21);
            barra [nbarras]-> setPos(posx,posy);
            posx-=50;
            posy+=50;
        }
    }

    enemigo = new ObjetosEscenario (":/Personajes/imagenes/Imagenes/enemigo.png", 70,70);
    enemigo -> setPos(0,0);

    escena = new QGraphicsScene;
    escena->setSceneRect(0,0, ui->graphicsView->width()-5, ui->graphicsView->height()-5);

    for (int nbarras=0;nbarras<10 ;nbarras++ ){
        escena -> addItem(barra[nbarras]);
    }
    //escena -> addItem(barra[0]);

    timeBarras = new QTimer(this);
    connect(timeBarras,SIGNAL(timeout()),this,SLOT(cambioDeBarras()));
    timeBarras->start(1500);
    escena -> addItem(enemigo);
    ui -> graphicsView -> setScene(escena);
}

Widget::~Widget()
{
    //RECORDAR BORRAR TODO LO QUE USA MEMORIA DINAMICA
    delete ui;
    delete escena;
    delete barra[0];
}



/*void Widget::drawBackground(QPainter *painter, const QRectF &rect)
{
    painter->drawPixmap(rect,QPixmap("/home/hailersh/projects/QTProjects/ProyectoFinal/Proyecto-final/proyectoFinal/Imagenes/puebloFondo.jpg"),QRectF());
}*/



/*void Widget::on_pushButton_clicked()
{
    ui -> textBrowser -> setText("la barra esta siendo presionada");
}*/

/*
QGraphicsView view(escena);
 view.show();
 escena->setBackgroundBrush(Qt::lightGray);*/

