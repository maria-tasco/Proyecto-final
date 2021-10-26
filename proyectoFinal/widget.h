#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGraphicsScene>
#include "Objetosescenario.h"
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    void keyPressEvent (QKeyEvent *i);
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    //void on_pushButton_clicked();

    void cambioDeBarras();

private:
    Ui::Widget *ui;
    QGraphicsScene * escena;
    ObjetosEscenario * barra[10];
    ObjetosEscenario *enemigo;
    QTimer * timeBarras ;
    int posx=700, posy=70;
    //void paintEvent(QPaintEvent *event);
    void drawBackground(QPainter *painter, const QRectF &rect);

};
#endif // WIDGET_H
