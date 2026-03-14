// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Darked2501 14/03/2026 13:00

#ifndef TURISTA_H
#define TURISTA_H

#include "Datatypes.h"
#include "Experiencia.h"

class Turista {
    private:
        string ci;
        string nombre;
        string email;

        std::set<Experiencia*> experiencias;

    public:
        Turista();
        ~Turista();
        string toString();
        string_set listarExperiencias(DTFecha desde, float min, float max);

        void agregarExperiencia(Experiencia&);

        //Se define este operador para poder usar set(necesita ordenes entre objetos)//
        bool operator<(const Turista& other) const {
            return ci < other.ci;
        }
};

#endif
