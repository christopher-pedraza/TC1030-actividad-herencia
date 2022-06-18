/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Peliculas.cpp
*****************************************************/

#include "Peliculas.hpp"

// Metodos constuctores
Peliculas::Peliculas(){

    cantidadPeliculas = 0;
}

// Metodos modificadores - para modificar el valor de un atributo
void Peliculas::setCantidadPeliculas(int _cantidadPelis){

    cantidadPeliculas = _cantidadPelis;
}

// Metodos de acceso - para acceder al valor de un atributo
int Peliculas::getCantidadPeliculas(){
    return cantidadPeliculas;
}



std::vector<Pelicula> Peliculas::getPeliculas(){

    return peliculas;
}
// Metodos adicionales
void addPeliculaAlArreglo(Pelicula  _pelicula){

}
		
void leerArchivo(std::string filepelis);