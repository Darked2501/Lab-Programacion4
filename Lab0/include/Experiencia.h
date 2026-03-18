// Creado: federicogravagno-creator 11/03/2026 23:30
// Actualizado: Darked2501 14/03/2026 14:00

#ifndef EXPERIENCIA_H
#define EXPERIENCIA_H

#include "Datatypes.h"
#include "DTFecha.h"

//forward declaration(referencia circular)//
class Turista;

/* Definimos la clase experiencia */
class Experiencia {
    private:
    string codReserva;
    string descripcion;
    int precioBase;
    DTFecha fecha;

    std::set<Turista*> turistas;

    public:
    //creador/Destructor//

    Experiencia(string, string, int, DTFecha);
    virtual ~Experiencia();

    //Getters//

    string getCodReserva();
    string getDescripcion();
    int getPrecioBase();
    int cantTuristas();
    DTFecha getFecha();
    DTExpe getDT();

    //Setters//

    void setCodReserva(string);
    void setDescripcion(string);
    void setPrecio(int);
    void setFecha(DTFecha);

    //Extras//
    virtual float calcularCosto() = 0;
    //Se define este operador para poder usar set(necesita ordenes entre objetos)//
    bool operator<(const Experiencia& other) const {
        return codReserva < other.codReserva;
    }
    

};

#endif