#include "Video.hpp"

Video::Video() {
    id = 0;
    duracion = 0;
    calificacion = 0;
    genero = "";
    nombre = "";
}

Video::Video(int _id, int _duracion, int _calificacion, string _genero, string _nombre) {
    id = _id;
    duracion = _duracion;
    calificacion = _calificacion;
    genero = _genero;
    nombre = _nombre;
}

// Setters
int Video::getID() {
    return id;
}

string Video::getNombre() {
    return nombre;
}

int Video::getDuracion() {
    return duracion;
}

string Video::getGenero() {
    return genero;
}

int Video::getCalificacion() {
    return calificacion;
}

// Getters
void Video::setID(int _id) {
    id = _id;
}

void Video::setNombre(string _nombre) {
    nombre = _nombre;
}

void Video::setDuracion(int _duracion) {
    duracion = _duracion;
}

void Video::setGenero(string _genero) {
    genero = _genero;
}

void Video::setCalificacion(int _calificacion) {
    calificacion = _calificacion;
}

void Video::mostrarVideo() {
    cout << "id: " << id << endl;
    cout << "nombre: " << nombre << endl;
    cout << "duracion: " << duracion << endl;
    cout << "genero: " <<genero << endl;
    cout << "calificacion: " <<calificacion << endl;
}