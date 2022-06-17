#ifndef Episodio_hpp
#define Episodio_hpp

#include <iostream>
#include <stdio.h>
#include <string>

class Episodio {
    private:
		// Atributos
		std::string titulo;
		int temporada;
		double calificacion;

    public:
		// Metodos constuctores
		Episodio(); // Sin parametros
		Episodio(std::string _titulo, int _temporada, double _calificacion); // Con parametros

		// Metodos modificadores - para modificar el valor de un atributo
		void setTitulo(std::string);
		void setTemporada(int);
		void setCalificacion(double);

		// Metodos de acceso - para acceder al valor de un atributo
		std::string getTitulo();
		int getTemporada();
		double getCalificacion();

		// Metodos adicionales
		void mostrarEpisodio();
};

#endif /* Episodio_hpp */