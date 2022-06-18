#ifndef Videos_hpp
#define Videos_hpp

#include "Video.hpp"
#include <fstream>
#include <sstream>
#include <iomanip>
#include <vector>


class Videos {
    private:
		// Atributos
		std::vector<Video> videos;
		int cantidadVideos;
		
	public:
		// Metodos constuctores
		Videos();

		// Metodos modificadores - para modificar el valor de un atributo
		void setCantidadVideos(int _cantidadVideos);

		// Metodos de acceso - para acceder al valor de un atributo
		int getCantidadVideos();

		std::vector<Video> getVideos();

		// Metodos adicionales
		void addVideoAlArreglo(Video _video);
		
		void leerArchivo(std::string fileVideo);
		
};





#endif /* Videos_hpp */