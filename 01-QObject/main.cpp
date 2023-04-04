#include <QCoreApplication>
#include <QDebug>
#include <QVariant>

#include "persona.h"

//slots->funciones que se ejecutarán cuandose modifique alguna propiedad (de las personas)

void nombreCambiado(const QString &nombre){//slot´
    qDebug() << "nuevo nombre" << nombre;
};
void edadCambiada(const int edad){
    qDebug() << "nueva edad" << edad;
};
void salarioCambiado(const double salario){
    qDebug() << "nuevo salario" << salario;
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Persona *juan = new Persona;
    Persona *pedro = new Persona;
    Persona *ana = new Persona;

    //aca conectaremos a juan, con su señal nombre cambiado, y lo conectaremos a juan y la
    //funcion nombre cambiado.
    //esto funciona: Cuando se pone el nombre "juan", se mando a ejecutar el nombreChanged que
    //que está conectada la señal nombreChanged con la funcion nombrecambiado
    QObject::connect(juan, &Persona::nombreChanged, juan, nombreCambiado);
    QObject::connect(juan, &Persona::edadChanged, juan, edadCambiada);
    QObject::connect(juan, &Persona::salarioChanged, juan, salarioCambiado);

    QObject::connect(pedro, &Persona::nombreChanged, pedro, nombreCambiado);
    QObject::connect(pedro, &Persona::edadChanged, pedro, edadCambiada);
    QObject::connect(pedro, &Persona::salarioChanged, pedro, salarioCambiado);

    QObject::connect(ana, &Persona::nombreChanged, ana, nombreCambiado);
    QObject::connect(ana, &Persona::edadChanged, ana, edadCambiada);
    QObject::connect(ana, &Persona::salarioChanged, ana, salarioCambiado);

    //puedo perfectamente usar el juan->setName()... Pero lo correcto
    //ahora es usar el setProperty, por estar usando las Q_Property
    juan->setProperty("nombre", "Juan");
    juan->setProperty("edad", 30);
    juan->setProperty("salario", 2500.0);

    pedro->setProperty("nombre", "Pedro");
    pedro->setProperty("edad", 40);
    pedro->setProperty("salario", 500.0);

    ana->setProperty("nombre", "Ana");
    ana->setProperty("edad", 35);
    ana->setProperty("salario", 6000.0);

    delete juan;
    delete pedro;
    delete ana;

    return a.exec();
}
