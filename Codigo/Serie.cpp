#include "Serie.hpp"
#include <iostream>



Serie::Serie(){
    idSerie  = 0;
    nombreSerie = "titulo serie";
    cantidadEpisodios = 0;
    duracion = 0;
    calificacion = 0;
    genero = "genero";
}

Serie::Serie(int _idSerie, std::string _nombre, int _cantidadEpisodios, int _duracion, int _calificacion, std::string _genero):Video(_idSerie, _duracion, _calificacion, _genero, _nombre){
    cantidadEpisodios = _cantidadEpisodios;
    idSerie = _idSerie;
    nombre = _nombre;
}

// Setters
void Serie::setIDSerie(int _idSerie) {
    idSerie = _idSerie;
}

void Serie::setEpisodios(int _episodios) {
    cantidadEpisodios = _episodios; 
}

void Serie::setNombreSerie(std::string _nombreSerie) {
    nombreSerie = _nombreSerie;
}





// Getters
int Serie::getIDSerie() {
    return idSerie;
}

int Serie::getCantidadEpisodios() {
    return cantidadEpisodios;
}

std::string Serie::getNombreSerie() {
    return nombreSerie;
}


// Adicionales
void Serie::agregarEpisodio(Episodio _episodio) {
    episodios.push_back(_episodio);
    cantidadEpisodios++;
}

void Serie::mostrarEpisodios() {
    mostrarDatosSerie();
    std::cout<<std::endl;
    std::cout << "Episodios : " << std::endl;
    for(int i = 0; i < cantidadEpisodios; i++) {
        episodios[i].mostrarEpisodio();
        std::cout<<std::endl;
    }
}

void Serie::mostrarVideo() {
    std::cout << "id: " << idSerie << std::endl;
    std::cout << "nombre: " << nombreSerie << std::endl;
    std::cout << "duracion: " << duracion << std::endl;
    std::cout << "genero: " <<genero << std::endl;
    std::cout << "calificacion: " <<calificacion << std::endl;
}

void Serie::mostrarDatosSerie() {
    std::cout << "Datos de la serie: " << std::endl;
    std::cout << "ID: " << idSerie << std::endl;
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Cantidad de episodios: " << cantidadEpisodios << std::endl;
}

void Serie::imprimir(int _calificacion) {
    int contador = 0;
    mostrarDatosSerie();
    std::cout << std::endl;
    std::cout << "Episodios con califiación de: " << _calificacion << std::endl;
    for(int i = 0; i < cantidadEpisodios; i++) {
        if (episodios[i].getCalificacion() == _calificacion) {
            episodios[i].mostrarEpisodio();
            std::cout<<std::endl;
            contador++;
        }
    }
    if (contador == 0) {
        std::cout << "No se encontró ningún episodio" << std::endl;
    }
    std::cout << std::endl;
}