#include "Episodio.hpp"

/*
* Metodos constuctores
*/
// Constructor por defecto
Episodio::Episodio() {
	titulo = "<Titulo del capitulo>";
	temporada = 1;
	calificacion = 0.0;
}

// Constructor que recibe parametros para asignarle valores a los atributos
Episodio::Episodio(std::string _titulo, int _temporada, double _calificacion) {
	titulo = _titulo;
	temporada = _temporada;
	calificacion = _calificacion;
}


/*
* Metodos modificadores - para modificar el valor de un atributo
*/ 
// Asignar valor al atributo titulo (string)
// Recibe: un string
// Regresa: Nada
void Episodio::setTitulo(std::string _titulo) {
	titulo = _titulo;
}

// Asignar valor al atributo temporada (int)
// Recibe: un int
// Regresa: Nada
void Episodio::setTemporada(int _temporada) {
	temporada = _temporada;
}

// Asignar valor al atributo calificacion (double)
// Recibe: un double
// Regresa: Nada
void Episodio::setCalificacion(double _calificacion) {
	calificacion = _calificacion;
}


/*
* Metodos de acceso - para acceder al valor de un atributo
*/
// Acceder al valor del atributo titulo (string)
// Recibe: Nada
// Regresa: el valor de titulo (string)
std::string Episodio::getTitulo() {
	return titulo;
}

// Acceder al valor del atributo temporada (int)
// Recibe: Nada
// Regresa: el valor de temporada (int)
int Episodio::getTemporada() {
	return temporada;
}

// Acceder al valor del atributo calificacion (double)
// Recibe: Nada
// Regresa: el valor de calificacion (double)
double Episodio::getCalificacion() {
	return calificacion;
}


/*
* Metodos adicionales
*/
// Metodo que regresa todos los atributos concatenados en un solo string
// Recibe: Nada
// Regresa: Los atributos concatenados en formato string y separados por ','
void Episodio::mostrarEpisodio() {
    std::cout << "nombre: " << titulo << std::endl;
    std::cout << "temporada: " << temporada << std::endl;
    std::cout << "calificacion: " <<calificacion << std::endl;
}