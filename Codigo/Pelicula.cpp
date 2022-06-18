/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Pelicula.hpp
*****************************************************/

#include "Pelicula.hpp"

Pelicula::Pelicula(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre) : Video(_id, _duracion, _calificacion, _genero, _nombre) {
    // Mismos atributos que objeto video
}

void Pelicula::imprimir(int _calificacion) {
    if (calificacion == _calificacion) {
        mostrarVideo();
    }
}
// _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre
std::ostream& operator << (std::ostream& os, const Pelicula& _pelicula) {
    os << "ID: " << _pelicula.id << std::endl << "Nombre: " << _pelicula.nombre << std::endl << std::endl;
    return os;
}