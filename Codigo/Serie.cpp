#include "Serie.hpp"

Serie::Serie(int _idSerie, std::string _nombre, int _cantidadEpisodios, int _idEpisodio, int _temporada, int _duracion, int _calificacion, std::string _genero, std::string _nombreEpisodio) : Video(_idEpisodio, _duracion, _calificacion, _genero, _nombreEpisodio) {
    episodios[0] = Video(_idEpisodio, _duracion, _calificacion, _genero, _nombreEpisodio);
    cantidadEpisodios = _cantidadEpisodios;
    temporada = _temporada;
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
    if (cantidadEpisodios < 10) {
        episodios[cantidadEpisodios] = _episodio;
        cantidadEpisodios++;
    }
}

void Serie::agregarEpisodio(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre) {
    Video _episodio = Video(_id, _duracion, _calificacion, _genero, _nombre);
    if (cantidadEpisodios < 10) {
        episodios[cantidadEpisodios] = _episodio;
        cantidadEpisodios++;
    }
}