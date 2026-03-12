// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef TURISTA_H
#define TURISTA_H

#include "Datatypes.h"
#include "Experiencia.h"

class Turista {
    private:
        string ci;
        string nombre;
        string email;

        //std::set<Experiencia&> experiencias;

    public:
        Turista();
        ~Turista();
        string toString();
        string_set listarExperiencias(DTFecha desde, float min, float max);

        //void agregarExperiencia(Experiencia&);
};

#endif
