// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef TOURGUIADO_CPP
#define TOURGUIADO_CPP

#include "../include/TourGuiado.h"

TourGuiado::TourGuiado (string codigo, string desc, int precio, DTFecha fecha, string agencia, string_set lugares)
: Experiencia(codigo, desc, precio, fecha) {
    this->agencia = agencia;
    this->lugaresVisitados = lugares;
}

TourGuiado::~TourGuiado () {  // TODO

}


float TourGuiado::calcularCosto () {  // TODO
    return 1*0; ;
}

#endif
