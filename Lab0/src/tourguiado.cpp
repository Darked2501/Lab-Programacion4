#include "tourguiado.h"

#ifndef TOURGUIADO_CPP
#define TOURGUIADO_CPP

TourGuiado::TourGuiado (string codigo, string desc, int precio, DTFecha fecha, string agencia, string_set lugares)
: Experiencia(codigo, desc, precio, fecha) {
    this->agencia = agencia;
    this->lugaresVisitados = lugares;
}

TourGuiado::~TourGuiado () {  // TODO

}


float TourGuiado::calcularCosto () {  // TODO
    return 1.0;
}

#endif
