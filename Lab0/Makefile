# Creado: Kurogami2134 12/03/2026 10:30

CC=g++
CFLAGS=-std=c++98 -Wall

_SRC = main.cpp Experiencia.cpp Turista.cpp Alojamiento.cpp EventoCultural.cpp TourGuiado.cpp
SRC = $(patsubst %,src/%,$(_SRC))

main: $(SRC)
	$(CC) -o build/main $^
