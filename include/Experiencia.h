#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H
#include <string>
#include "DTFecha.h"
#include "DTExp.h"

/*Definimos la clase experiencia*/
class Experiencia {
    private:
    std::string codReserva;
    std::string descripcion;
    int precioBase;
    DTFecha fecha;
    public:
    //creador/Destructor//

    Experiencia(std::string, std::string, int, DTFecha);
    virtual ~Experiencia();

    //Getters//

    std::string getCodReserva();
    std::string getDescripcion();
    int getPrecio();
    DTFecha getFecha();
    DTExp getDT();

    //Setters//

    void setCodReserva(std::string);
    void setDescripcion(std::string);
    void setPrecio(int);
    void setFecha(DTFecha);

    //Extras//
    virtual float calcularCosto() = 0;
    

};




#endif