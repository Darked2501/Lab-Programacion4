// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef EVENTOCULTURAL_H
#define EVENTOCULTURAL_H

#include "Datatypes.h"
#include "Experiencia.h"

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
