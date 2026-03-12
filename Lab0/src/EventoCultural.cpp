// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef EVENTOCULTURAL_CPP
#define EVENTOCULTURAL_CPP

#include "../include/EventoCultural.h"

EventoCultural::EventoCultural (string codigo, string desc, int precio, DTFecha fecha, string ubicacion, bool cupon)
: Experiencia(codigo, desc, precio, fecha) {
    this->ubicacion = ubicacion;
    this->usoCupon = cupon;
}

EventoCultural::~EventoCultural () {  // TODO

}

float EventoCultural::calcularCosto () {  // TODO: (precioBase - (usoCupon? 5: 0)) * cantTuristas
    return (getPrecioBase() - (usoCupon? 5: 0))*turistas.size();
}

#endif
