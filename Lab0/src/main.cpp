// Creado: Kurogami2134 12/03/2026 10:30

#include<stdio.h>
#include<iostream>
#include "../include/Alojamiento.h"
#include "../include/Datatypes.h"

int main() {  // TODO
    DTFecha fecha;
    fecha.dia = 20;
    fecha.mes = 3;
    fecha.ano = 2001;
    Alojamiento a = Alojamiento("albaca", "comer albaca", 10, fecha, "hotel", AllInclusive, 10);
}
