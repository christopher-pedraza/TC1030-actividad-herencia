#include "Serie.hpp"

Serie::Serie(int _cantidad_episodios, int _temporada, string _titulo_Ep, int _id, int _duracion, int _calificacion, string _genero, string _nombre) : Video(_id, _duracion, _calificacion, _genero, _nombre) {
    cantidad_episodios = _cantidad_episodios;
    temporada = _temporada;
    titulo_Ep = _titulo_Ep;
}

//setters

void Serie::setEpisodios(int _episodios) {
    cantidad_episodios = _episodios; 
}

void Serie::setTemporada(int _temporada) {
    temporada = _temporada; 
}

void Serie::setTituloEp(string _titulo_Ep, int _index) {
    
}

//getters

int Serie::getCantidadEpisodios(){
    return cantidad_episodios;
}

int Serie::getTemporada(){
    return temporada;
}

string Serie::getTituloEp(int _index){
    return titulo_Ep;
}