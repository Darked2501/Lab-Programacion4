// Actualizado: Darked2501 14/03/2026 14:00

#include<stdio.h>
#include<iostream>
#include "../include/Alojamiento.h"
#include "../include/Datatypes.h"
#include "../include/DTFecha.h"

int main() {  // TODO
    DTFecha fecha;
    fecha.dia = 20;
    fecha.mes = 3;
    fecha.ano = 2001;
    Alojamiento a = Alojamiento("albaca", "comer albaca", 10, fecha, "hotel", AllInclusive, 10);
}
