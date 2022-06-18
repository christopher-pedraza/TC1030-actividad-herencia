#include "Pelicula.hpp"


Pelicula::Pelicula(){
    id = 0;
    duracion = 0;
    calificacion = 0;
    genero = " ";
    nombre = " ";
}

Pelicula::Pelicula(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre) : Video(_id, _duracion, _calificacion, _genero, _nombre) {
    // Mismos atributos que objeto video
}

void Pelicula::imprimir(int _calificacion) {
    if (calificacion == _calificacion) {
        mostrarVideo();
    }
}