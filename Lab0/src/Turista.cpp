// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef TURISTA_CPP
#define TURISTA_CPP

#include "../include/Turista.h"

Turista::Turista () {

}

Turista::~Turista () {

}

string Turista::toString () {
    return this->ci+"->"+this->nombre+"/"+this->email;
}

string_set Turista::listarExperiencias (DTFecha desde, float min, float max) {  // TODO
    string_set a = {};
    return a;
}

#endif
