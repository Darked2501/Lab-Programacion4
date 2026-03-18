// Creado: Darked2501 14/03/2026 14:00
// Actualizado:  Darked2501 14/03/2026 14:00

#ifndef DTFECHA_CPP
#define DTFECHA_CPP

#include "../include/DTFecha.h"

bool DTFecha::operator>(const DTFecha& otra) {
        if (this->ano != otra.ano) return this->ano > otra.ano;
        if (this->mes != otra.mes) return this->mes > otra.mes;
        return this->dia > otra.dia;
}

#endif
