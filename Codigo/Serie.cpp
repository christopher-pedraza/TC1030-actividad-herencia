#include "Serie.hpp"

Serie::Serie(int _cantidad_episodios, int _temporada, int _id, int _duracion, int _calificacion, string _genero, string _nombre) : Video(_id, _duracion, _calificacion, _genero, _nombre) {
    cantidad_episodios = _cantidad_episodios;
    temporada = _temporada;
}

// Setters
void Serie::setEpisodios(int _episodios) {
    cantidad_episodios = _episodios; 
}

void Serie::setTemporada(int _temporada) {
    temporada = _temporada; 
}

void Serie::setTituloEp(Video episodio, int _index) {
    episodios[_index] = episodio;
}

// Getters
int Serie::getCantidadEpisodios() {
    return cantidad_episodios;
}

int Serie::getTemporada() {
    return temporada;
}

Video Serie::getEpisodio(int _index) {
    return episodios[_index];
}

// Adicionales
void Serie::agregarEpisodio(Video _episodio) {
    if (cantidad_episodios < 10) {
        episodios[cantidad_episodios] = _episodio;
        cantidad_episodios++;
    }
}

void Serie::agregarEpisodio(int _id, int _duracion, int _calificacion, string _genero, string _nombre) {
    Video _episodio = Video(_id, _duracion, _calificacion, _genero, _nombre);
    if (cantidad_episodios < 10) {
        episodios[cantidad_episodios] = _episodio;
        cantidad_episodios++;
    }
}