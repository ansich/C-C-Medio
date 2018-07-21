// fecha.h

#ifndef MARCATEMPORAL_H_INCLUDED
#define MARCATEMPORAL_H_INCLUDED

#include <string>

/// Representa un instante de tiempo: fecha y hora
class Fecha {
public:
    static const int MinAnyo = 1900;

    /**
        Crear una fecha aceptando día, mes, año
        @param a el año
        @param m el mes
        @param d el día
    */
    Fecha(int d, int m, int a);

    /** Obtiene el dia del tiempo
        @return el día, como entero */
    int getDia() const
        { return dia; }

    /** Obtiene el mes del tiempo
        @return el mes, como entero */
    int getMes() const
        { return mes; }

    /** Obtiene el año del tiempo
        @return el año, como entero */
    int getAnyo() const
        { return anyo; }

    /** Obtiene una cadena representando el instante temporal
        en el formato dd/mm/aaaa
        @return la fecha, como cadena */
    std::string toString() const;

    /** Determina si una fecha es correcta o no.
        @return true si es correcta, falso en otro caso. */
    bool esValida() const
        { return ( getAnyo() >= MinAnyo ); }

    /** Crea un fecha incorrecta
        @return Un objeto fecha, que no es correcto */
    static Fecha creaFechaInvalida();

private:
    int dia;
    int mes;
    int anyo;
};


#endif // MARCATEMPORAL_H_INCLUDED
