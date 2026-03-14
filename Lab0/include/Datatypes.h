// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Darked2501 14/03/2026 14:00

#ifndef DATATYPES
#define DATATYPES

#include <string>
#include <set>

typedef std::string string;
typedef std::set<string> string_set;

enum TipoRegimen {
    AllInclusive,
    MediaPension
};

struct DTExpe {
    string codigoReserva;
    string descripcion;
    DTFecha fecha;
    string_set turistas;
};

#endif
