// Creado: Darked2501 14/03/2026 14:00
// Actualizado:  Darked2501 14/03/2026 14:00

#ifndef DATATYPES
#define DATATYPES

struct DTFecha {
    int dia, mes, ano;

    bool operator>(const DTFecha&, const DTFecha&);
};

#endif