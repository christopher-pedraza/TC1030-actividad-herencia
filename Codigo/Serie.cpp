#include "Serie.hpp"
#include <iostream>

Serie::Serie(int _idSerie, std::string _nombre, int _cantidadEpisodios, int _idEpisodio, int _temporada, int _duracion, int _calificacion, std::string _genero, std::string _nombreEpisodio) : Video(_idEpisodio, _duracion, _calificacion, _genero, _nombreEpisodio) {
    episodios.push_back(Video(_idEpisodio, _duracion, _calificacion, _genero, _nombreEpisodio));
    cantidadEpisodios = _cantidadEpisodios;
    temporada = _temporada;
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

void Serie::setTemporada(int _temporada) {
    temporada = _temporada; 
}

void Serie::setNombreSerie(std::string _nombreSerie) {
    nombreSerie = _nombreSerie;
}

void Serie::setEpisodio(Video episodio, int _index) {
    episodios[_index] = episodio;
}

// Getters
int Serie::getIDSerie() {
    return idSerie;
}

int Serie::getCantidadEpisodios() {
    return cantidadEpisodios;
}

int Serie::getTemporada() {
    return temporada;
}

std::string Serie::getNombreSerie() {
    return nombreSerie;
}

Video Serie::getEpisodio(int _index) {
    return episodios[_index];
}

// Adicionales
void Serie::agregarEpisodio(Video _episodio) {
    episodios.push_back(_episodio);
    cantidadEpisodios++;
}

void Serie::agregarEpisodio(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre) {
    episodios.push_back(Video(_id, _duracion, _calificacion, _genero, _nombre));
    cantidadEpisodios++;
}

void Serie::mostrarEpisodios() {
    mostrarDatosSerie();
    std::cout<<std::endl;
    std::cout << "Episodios : " << std::endl;
    for(int i = 0; i < cantidadEpisodios; i++) {
        episodios[i].mostrarVideo();
        std::cout<<std::endl;
    }
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
            episodios[i].mostrarVideo();
            std::cout << std::endl;
            contador++;
        }
    }
    if (contador == 0) {
        std::cout << "No se encontró ningún episodio" << std::endl;
    }
    std::cout << std::endl;
}

std::ostream& operator << (std::ostream& os, const Serie& _serie) {
    os << "ID: " << _serie.idSerie << std::endl << "Nombre: " << _serie.nombre << std::endl << "Cantidad de episodios: " << _serie.cantidadEpisodios << std::endl << std::endl;
    return os;
}