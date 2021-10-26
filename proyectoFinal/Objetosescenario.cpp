#include "Objetosescenario.h"

ObjetosEscenario::ObjetosEscenario(QString nameImagen, int w, int h)
{
    setPixmap(QPixmap(nameImagen).scaled(w,h)); //De est forma cargamos la imagen
}

/*int ObjetosEscenario::posicionesBarras(int *posx, int *posy)
{

}*/
