#include "persona.h"
#include <QDebug>

Persona::Persona(QObject *parent)
    : QObject (parent){
    setNombre("");
    setEdad(0);
    setSalario(0.0);
}

Persona::~Persona(){
    qDebug() << m_nombre << "eliminado";
};

void Persona::setNombre(const QString &nombre){
    if(m_nombre != nombre){
        m_nombre = nombre;
    }
};

void Persona::setEdad(const int edad){
    if(m_edad != edad){
        m_edad = edad;
    }
};
void Persona::setSalario(const double salario){};
QString Persona::getNombre()const{};
int Persona::getEdad()const{};
double Persona::getSalario()const{};

