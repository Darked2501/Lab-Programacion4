// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Darked2501 14/03/2026 14:00

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

string_set Turista::listarExperiencias (DTFecha desde, float min, float max) { 
    string_set a = {};
    for (Experiencia* experiencia : this->experiencias) {
        if(experiencia->calcularCosto()>=min && experiencia->calcularCosto()<=max && experiencia->getFecha() > desde)
           a.insert(experiencia->getCodReserva());
    }
    return a;
}

void Turista::agregarExperiencia(Experiencia* exp){
    this->experiencias.insert(exp);
}



#endif
