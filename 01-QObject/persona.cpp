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
        emit nombreChanged(m_nombre);//emite una señal de que se ha establecido nuevo nombre
    }
};

void Persona::setEdad(const int edad){
    if(m_edad != edad){
        m_edad = edad;
        emit edadChanged(m_edad);//emite una señal de que se ha establecido nueva edad
    }
};

void Persona::setSalario(const double salario){
    if(m_salario != salario){
        m_salario = salario;
        emit salarioChanged(m_salario); //emite una señal de que se ha establecido nuevo salario
    }
};

QString Persona::nombre()const{
    return m_nombre;
};

int Persona::edad()const{
    return m_edad;
};

double Persona::salario()const{
    return m_salario;
};
