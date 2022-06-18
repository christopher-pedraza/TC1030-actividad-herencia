/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Series.hpp
*****************************************************/

#ifndef Series_hpp
#define Series_hpp

#include "Serie.hpp"
#include <fstream>
#include <sstream>
#include <iomanip>


class Series {
    private:
		// Atributos
		std::vector<Serie> series;
		int cantidadSeries;
		
	public:
		// Metodos constuctores
		Series();

		// Metodos modificadores - para modificar el valor de un atributo
		void setCantidadSeries(int _cantidadSeries);

		// Metodos de acceso - para acceder al valor de un atributo
		int getCantidadSeries();

		std::vector<Serie> getSeries();

		// Metodos adicionales
		void addSerieAlArreglo(Serie _serie);
		
		void leerArchivo(std::string fileserie, std::string fileepisodio);
		
};





#endif /* Series_hpp */