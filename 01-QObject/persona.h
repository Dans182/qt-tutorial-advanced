#ifndef PERSONA_H
#define PERSONA_H

#include <QObject>
//QObject, clase especial de QT, que se utiliza para ser heredada por otras clases que nosotros
//tenemos que escribir. Que nos ayudará a poner otras propiedades a la clase

class Persona : public QObject
{
    Q_OBJECT //este es el Macro de QOBJECT que siempre tenemos que ponerlo ahí cuando heredamos de QObject
    Q_PROPERTY(QString nombre READ nombre WRITE setNombre NOTIFY nombreChanged)
    Q_PROPERTY(int edad READ edad WRITE setEdad NOTIFY edadChanged)
    Q_PROPERTY(double salario READ salario WRITE setSalario NOTIFY salarioChanged)
public:
    //Persona(); // constructor
    Persona(QObject *parent = nullptr); // constructor que recibe puntero de tipo QObject
    virtual ~Persona(); //destructor

    void setNombre(const QString &nombre); //metodo setNombre que recibe el nombre en un String
    void setEdad(const int edad);
    void setSalario(const double salario);

    QString nombre()const;
    int edad()const;
    double salario()const;
private:
    QString m_nombre;
    int m_edad;
    double m_salario;
signals:
    void nombreChanged(QString &nombre); //señales que se emitirán cuando el nombre, edad o salario
    void edadChanged(int edad); //sean modificados
    void salarioChanged(double salario); //esta señal, en su interior tiene un emit
    //aca declaro la señal
};

#endif // PERSONA_H
