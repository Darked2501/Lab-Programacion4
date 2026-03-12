// Creado: federicogravagno-creator 11/03/2026 23:30
// Actualizado: Kurogami2134 12/03/2026 10:30

#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

#include "Experiencia.h"
#include "Datatypes.h"

class Alojamiento : public Experiencia {
private:
    string hotel;
    TipoRegimen regimen;
    int cantNoches;

public:
    Alojamiento(string codReserva,
                string descripcion,
                int precioBase,
                DTFecha fecha,
                string hotel,
                TipoRegimen regimen,
                int cantNoches);

    ~Alojamiento();

    //Getters//

    string getHotel();
    TipoRegimen getRegimen();
    int getCantNoches();

    //Setters//

    void setHotel(std::string);
    void setRegimen(TipoRegimen);
    void setCantNoches(int);

    float calcularCosto();
};

#endif