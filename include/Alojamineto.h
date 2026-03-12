#ifndef ALOJAMIENTO_H
#define ALOJAMIENTO_H

#include "Experiencia.h"
#include <string>

enum Regimen {
    AllInclusive,
    MediaPension
};

class Alojamiento : public Experiencia {
private:
    std::string hotel;
    Regimen regimen;
    int cantNoches;

public:
    Alojamiento(std::string codReserva,
                std::string descripcion,
                float precioBase,
                DTFecha fecha,
                std::string hotel,
                Regimen regimen,
                int cantNoches);

    ~Alojamiento();

    //Getters//

    std::string getHotel();
    Regimen getRegimen();
    int getCantNoches();

    //Setters//

    void setHotel(std::string);
    void setRegimen(Regimen);
    void setCantNoches(int);

    float calcularCosto();
};

#endif