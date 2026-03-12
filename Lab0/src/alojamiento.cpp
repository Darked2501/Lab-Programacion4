#include "alojamiento.h"

#ifndef ALOJAMIENTO_CPP
#define ALOJAMIENTO_CPP

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
