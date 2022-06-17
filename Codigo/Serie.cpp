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
    /*
    if (cantidadEpisodios < 10) {
        episodios[cantidadEpisodios] = _episodio;
        cantidadEpisodios++;
    }
    */
    episodios.push_back(_episodio);
    cantidadEpisodios++;
}



void Serie::mostrarEpisodios(){
    for(int i = 0; i < cantidadEpisodios; i++) {
        episodios[i].mostrarEpisodio();
        std::cout<<std::endl;
    }
}

void Serie::imprimir(int _calificacion) {
    for(int i = 0; i < cantidadEpisodios; i++) {
        if (episodios[i].getCalificacion() == _calificacion) {
            episodios[i].mostrarEpisodio();
            std::cout<<std::endl;
        }
    }
}