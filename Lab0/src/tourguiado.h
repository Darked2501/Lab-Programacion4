#include "datatypes.h"
#include "experiencia.h"

#ifndef TOURGUIADO_H
#define TOURGUIADO_H

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
