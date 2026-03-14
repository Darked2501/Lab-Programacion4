# Creado: Darked2501 14/03/2026 14:00

CC=g++
CFLAGS=-std=c++98 -Wall

_SRC = main.cpp Experiencia.cpp Turista.cpp Alojamiento.cpp EventoCultural.cpp TourGuiado.cpp DTFecha.cpp
SRC = $(patsubst %,src/%,$(_SRC))

main: $(SRC)
	$(CC) -o build/main $^
