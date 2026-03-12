#include "datatypes.h"

#ifndef TURISTA_H
#define TURISTA_H

class Turista {
    private:
        string ci;
        string nombre;
        string email;
    public:
        Turista();
        ~Turista();
        string toString();
        string_set listarExperiencias(DTFecha desde, float min, float max);
};

#endif
