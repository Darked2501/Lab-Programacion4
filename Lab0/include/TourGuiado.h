// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef TOURGUIADO_H
#define TOURGUIADO_H

#include "Datatypes.h"
#include "Experiencia.h"

class TourGuiado: public Experiencia {
    private:
        string agencia;
        string_set lugaresVisitados;
        
    public:
        TourGuiado(string codigo, string desc, int precio, DTFecha fecha, string agencia, string_set lugares);
        ~TourGuiado();
        float calcularCosto();
};

#endif
