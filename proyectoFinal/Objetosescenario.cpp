#include "Objetosescenario.h"

ObjetosEscenario::ObjetosEscenario(QString nameImagen)
{
    setPixmap(QPixmap(nameImagen)); //De est forma cargamos la imagen
}
