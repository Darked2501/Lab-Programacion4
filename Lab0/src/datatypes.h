#include <string>
#include <set>

#ifndef DATATYPES
#define DATATYPES

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
