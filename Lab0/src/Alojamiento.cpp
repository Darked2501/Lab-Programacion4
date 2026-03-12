// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef ALOJAMIENTO_CPP
#define ALOJAMIENTO_CPP

#include "../include/Alojamiento.h"

Alojamiento::Alojamiento (string codigo, string desc, int precio, DTFecha fecha, string hotel, TipoRegimen regimen, int noches) 
: Experiencia(codigo, desc, precio, fecha) {
    this->cantNoches = noches;
    this->hotel = hotel;
    this->regimen = regimen;
}

Alojamiento::~Alojamiento () {  // TODO

}


float Alojamiento::calcularCosto () {
    return getPrecioBase() * this->cantNoches + (this->regimen == AllInclusive? 10 * this->cantNoches: 0);
}

#endif
