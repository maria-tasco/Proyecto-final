#ifndef OBJETOSESCENARIO_H
#define OBJETOSESCENARIO_H

#include <QMainWindow>
#include <QObject>
#include <QGraphicsPixmapItem>
#include <QString>
class ObjetosEscenario : public QObject, public QGraphicsPixmapItem //heredando clases
{
public:
    ObjetosEscenario(QString nameImagen);
};

#endif // OBJETOSESCENARIO_H
