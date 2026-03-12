#include "datatypes.h"
#include "experiencia.h"

#ifndef EVENTOCULTURAL_H
#define EVENTOCULTURAL_H

class EventoCultural: public Experiencia {
    private:
        string ubicacion;
        bool usoCupon;
    public:
        EventoCultural(string codigo, string desc, int precio, DTFecha fecha, string ubicacion, bool cupon);
        ~EventoCultural();
        float calcularCosto();
};

#endif
