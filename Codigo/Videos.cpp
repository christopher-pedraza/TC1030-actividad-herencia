#include "Videos.hpp"

// Metodos constuctores
Videos::Videos(){

    cantidadVideos = 0;
}

// Metodos modificadores - para modificar el valor de un atributo
void Videos::setCantidadVideos(int _cantidadVideos){

    cantidadVideos = _cantidadVideos;
}

// Metodos de acceso - para acceder al valor de un atributo
int Videos::getCantidadVideos(){
    return cantidadVideos;
}



std::vector<Video> Videos::getVideos(){

    return videos;
}
// Metodos adicionales
void Videos::addVideoAlArreglo(Video  _video){
    videos.push_back(_video);
	cantidadVideos++;

}
		
void Videos::leerArchivo(std::string fileVideo){
	// Variables e instancias de clases
	std::string linea, dato;
	int indice = 0;
	int columna;
	Video temp;
    std::ifstream lectura; // Input stream
	
	/*
	* Series.csv
	*/
	// Se abre el archivo .csv
    lectura.open(fileVideo.c_str(),std::ios::in);

	// Mientras que el archivo tenga otra linea se itera
	while (getline(lectura, linea)) {
		columna = 0;

		// Se toma un registro/linea
        std::stringstream registro;
		registro.str(linea);
        
		// Mientras que el registro tenga otro dato se itera
        while (getline(registro, dato, ';')) { // Se separa el registro por comas
			// Cada iteración aumenta el valor de columna y eso se evalua en los cases
			// Dependiendo de en que columna se esta iterando, se asigna a un atributo diferente del objeto
            switch (columna++) {
                case 0: {
					temp.setID(stoi(dato));
                	break;
				}
                case 1: {
					temp.setNombre(dato);
                	break;
				}
				case 2: {
					temp.setDuracion(stoi(dato));
                	break;
				}
				case 3: {
					temp.setGenero(dato);
					break;
				}
				case 4: {
					temp.setCalificacion(stod(dato));
					break;
				}
        	}
    	}
		// Se agrega el objeto de serie al arreglo de series
		addVideoAlArreglo(temp);
	}
}
