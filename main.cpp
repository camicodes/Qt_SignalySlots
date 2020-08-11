#include <QCoreApplication>
#include <QDebug>
#include "contador.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //Declarando dos objetos de la clase contador
    Contador contadorA, contadorB;

    //***********IMPORTANTE********************
    //Conectando el signal con el slot
    //contadorA.valorCambiado(int) ---> contadorB.setValor(int)
    QObject::connect(&contadorA, &Contador::valorCambiado,
                     &contadorB, &Contador::setValor);
    //*****************************************************

    //int valor = 15;
    qDebug() << "Contador A:" << contadorA.getvalor();
    qDebug() << "Contador B:" << contadorB.getvalor();

    //Estableciendo el valor en el objeto A
    contadorA.setValor(15);

    qDebug() << "Contador A:" << contadorA.getvalor();
    //El valor en el objeto B ha cambiado (conectado)
    qDebug() << "Contador B:" << contadorB.getvalor();

    return 0;
}
