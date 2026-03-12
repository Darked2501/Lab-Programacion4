// Creado: federicogravagno-creator 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include "Datatypes.h"

/* Definimos la clase experiencia */
class Experiencia {
    private:
    string codReserva;
    string descripcion;
    int precioBase;
    DTFecha fecha;

    public:
    //creador/Destructor//

    Experiencia(string, string, int, DTFecha);
    virtual ~Experiencia();

    //Getters//

    string getCodReserva();
    string getDescripcion();
    int getPrecioBase();
    DTFecha getFecha();
    DTExpe getDT();

    //Setters//

    void setCodReserva(string);
    void setDescripcion(string);
    void setPrecio(int);
    void setFecha(DTFecha);

    //Extras//
    virtual float calcularCosto() = 0;
    

};

#endif