#include "eventocultural.h"

#ifndef EVENTOCULTURAL_CPP
#define EVENTOCULTURAL_CPP

EventoCultural::EventoCultural (string codigo, string desc, int precio, DTFecha fecha, string ubicacion, bool cupon)
: Experiencia(codigo, desc, precio, fecha) {
    this->ubicacion = ubicacion;
    this->usoCupon = cupon;
}

EventoCultural::~EventoCultural () {  // TODO

}

float EventoCultural::calcularCosto () {  // TODO: (precioBase - (usoCupon? 5: 0)) * cantTuristas
    return 1.0;
}

#endif
