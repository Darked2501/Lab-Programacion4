#include "turista.h"

#ifndef TURISTA_CPP
#define TURISTA_CPP

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
