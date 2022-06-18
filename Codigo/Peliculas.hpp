#ifndef Peliculas_hpp
#define Peliculas_hpp

#include "Pelicula.hpp"
#include <fstream>
#include <sstream>
#include <iomanip>

class Peliculas {
    private:
		// Atributos
		std::vector<Pelicula> peliculas;
		int cantidadPeliculas;
		
	public:
		// Metodos constuctores
		Peliculas();

		// Metodos modificadores - para modificar el valor de un atributo
		void setCantidadPeliculas(int _cantidadPelis);

		// Metodos de acceso - para acceder al valor de un atributo
		int getCantidadPeliculas();

		std::vector<Pelicula> getPeliculas();

		// Metodos adicionales
		void addPeliculaAlArreglo(Pelicula _pelicula);
		
		void leerArchivo(std::string filepelis);
		
};



#endif /* Peliculas_hpp */