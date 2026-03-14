// Creado: Darked2501 14/03/2026 14:00
// Actualizado:  Darked2501 14/03/2026 14:00

#ifndef DTFECHA_CPP
#define DTFECHA_CPP

#include "../include/DTFecha.h"

bool operator>(const DTFecha& f1, const DTFecha& f2) {
        if (f1.ano != f2.ano) return f1.ano > f2.ano;
        if (f1.mes != f2.mes) return f1.mes > f2.mes;
        return f1.dia > f2.dia;
}

#endif
