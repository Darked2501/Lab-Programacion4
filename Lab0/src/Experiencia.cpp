// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef EXPERIENCIA_CPP
#define EXPERIENCIA_CPP

#include "../include/Experiencia.h"

Experiencia::Experiencia (string codigo, string desc, int precio, DTFecha fecha) {
    this->codReserva = codigo;
    this->descripcion = desc;
    this->precioBase = precio;
    this->fecha = fecha;
}

Experiencia::~Experiencia () {  // TODO
}

DTExpe Experiencia::getDT () {  // TODO: añadir a.turistas
    DTExpe a;
    a.codigoReserva = this->codReserva;
    a.descripcion = this->descripcion;
    a.fecha = this->fecha;
    
    return a;
}

int Experiencia::cantTuristas() {
    return this->turistas.size();
}

DTFecha Experiencia::getFecha() {
    return this->fecha;
}

string Experiencia::getCodReserva() {
    return this->codReserva;
}

int Experiencia::getPrecioBase () {
    return this->precioBase;
}

float Experiencia::calcularCosto () {  // TODO
    return 1.0;
}

#endif
