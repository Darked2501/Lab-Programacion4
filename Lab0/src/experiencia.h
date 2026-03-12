#include "datatypes.h"


#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

class Experiencia {
    private:
        string codigoReserva;
        string descripcion;
        int precioBase;
        DTFecha fecha;
    public:
        int getPrecioBase();
        Experiencia(string codigo, string desc, int precio, DTFecha fecha);
        ~Experiencia();
        DTExpe getDT();
        float calcularCosto();
};

#endif
