#include "Peliculas.hpp"

// Metodos constuctores
Peliculas::Peliculas(){

    cantidadPeliculas = 0;
}

// Metodos modificadores - para modificar el valor de un atributo
void Peliculas::setCantidadPeliculas(int _cantidadPelis){

    cantidadPeliculas = _cantidadPelis;
}

// Metodos de acceso - para acceder al valor de un atributo
int Peliculas::getCantidadPeliculas(){
    return cantidadPeliculas;
}



std::vector<Pelicula> Peliculas::getPeliculas(){

    return peliculas;
}
// Metodos adicionales
void Peliculas::addPeliculaAlArreglo(Pelicula  _pelicula){
    peliculas.push_back(_pelicula);
	cantidadPeliculas++;

}
		
void Peliculas::leerArchivo(std::string filepelis){
	// Variables e instancias de clases
	std::string linea, dato;
	int indice = 0;
	int columna;
	Pelicula temp;
    std::ifstream lectura; // Input stream
	
	/*
	* Series.csv
	*/
	// Se abre el archivo .csv
    lectura.open(filepelis.c_str(),std::ios::in);

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
		addPeliculaAlArreglo(temp);
	}
}
