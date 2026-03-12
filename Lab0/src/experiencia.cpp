#include "experiencia.h"

#ifndef EXPERIENCIA_CPP
#define EXPERIENCIA_CPP

Experiencia::Experiencia (string codigo, string desc, int precio, DTFecha fecha) {
    this->codigoReserva = codigo;
    this->descripcion = desc;
    this->precioBase = precio;
    this->fecha = fecha;
}

Experiencia::~Experiencia () {  // TODO
}

DTExpe Experiencia::getDT () {  // TODO: añadir a.turistas
    DTExpe a;
    a.codigoReserva = this->codigoReserva;
    a.descripcion = this->descripcion;
    a.fecha = this->fecha;
    
    return a;
}

int Experiencia::getPrecioBase () {
    return this->precioBase;
}

float Experiencia::calcularCosto () {  // TODO
    return 1.0;
}

#endif
