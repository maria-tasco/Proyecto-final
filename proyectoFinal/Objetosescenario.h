#ifndef OBJETOSESCENARIO_H
#define OBJETOSESCENARIO_H

#include <QMainWindow>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
#include <QGraphicsScene>
#include <QPaintEvent>
#include <QPainter>
#include <QPixmap>
#include <QKeyEvent>


class ObjetosEscenario : public virtual QObject, public QGraphicsPixmapItem  //heredando clases
{
public:
    ObjetosEscenario(QString nameImagen, int w, int h);
    //int posicionesBarras(int *posx, int *posy);



};

#endif // OBJETOSESCENARIO_H
