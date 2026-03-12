// Creado: Kurogami2134 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

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

struct DTFecha {
    int dia, mes, ano;
};

struct DTExpe {
    string codigoReserva;
    string descripcion;
    DTFecha fecha;
    string_set turistas;
};

#endif
