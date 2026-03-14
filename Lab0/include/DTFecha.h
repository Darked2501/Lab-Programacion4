// Creado: Darked2501 14/03/2026 14:00
// Actualizado:  Darked2501 14/03/2026 14:00

#ifndef DTFECHA_H
#define DTFECHA_H

struct DTFecha {
    int dia, mes, ano;

    // Declaración del operador > (debes definirlo en .cpp)
    bool operator>(const DTFecha& otra) const;
};

#endif