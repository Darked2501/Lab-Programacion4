#include "experiencia.h"
#include "datatypes.h"

#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

class Alojamiento: public Experiencia {
    private:
        string hotel;
        TipoRegimen regimen;
        int cantNoches;
    public:
        Alojamiento(string codigo, string desc, int precio, DTFecha fecha, string hotel, TipoRegimen regimen, int noches);
        ~Alojamiento();
        float calcularCosto();
};

#endif
