/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Series.hpp
*****************************************************/

#include "Series.hpp"

/*
* Metodos constuctores
*/
// Constructor por defecto
Series::Series() {
	// Se inicializa la cantidad de series como 0 ya que, aunque el arreglo tecnicamente no esta vacio,
	// no hay ninguna serie en si
	cantidadSeries = 0;
}


/*
* Metodos modificadores - para modificar el valor de un atributo
*/
// Asignar valor al atributo cantidadSeries (int)
// Recibe: un entero
// Regresa: nada
void Series::setCantidadSeries(int _cantidadSeries) {
	cantidadSeries = _cantidadSeries;
}


/*
* Metodos de acceso - para acceder al valor de un atributo
*/
// Acceder al valor del atributo cantidadSeries (int)
// Recibe: Nada
// Regresa: el valor de cantidadSeries (int)
int Series::getCantidadSeries() {
	return cantidadSeries;
}
std::vector<Serie> Series::getSeries(){
	return series;
}


void Series::addSerieAlArreglo(Serie _serie){
	series.push_back(_serie);
	cantidadSeries++;
}
/*
* Metodos adicionales
*/
// Metodo para agregar una serie al arreglo de series
// Solo agrega hasta un maximo de 100 series que es el tamaño maximo del arreglo
// Recibe: Un objeto de la clase Serie
// Regresa: Nada


// Metodo para leer los archivos Series.csv y Episodios.csv y gaurdar sus datos en el arreglo de series
// Recibe: Nada
// Regresa: Nada
void Series::leerArchivo(std::string fileserie, std::string fileepisodio) {
	// Variables e instancias de clases
	std::string linea, dato;
	int indice = 0;
	int columna;
	Episodio tempEpisodio;
	Serie tempSerie;
    std::ifstream lectura; // Input stream
	
	/*
	* Series.csv
	*/
	// Se abre el archivo .csv
    lectura.open(fileserie.c_str(),std::ios::in);

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
					tempSerie.setIDSerie(stoi(dato));
                	break;
				}
                case 1: {
					tempSerie.setNombreSerie(dato);
                	break;
				}
				case 2: {
					tempSerie.setDuracion(stoi(dato));
                	break;
				}
				case 3: {
					tempSerie.setGenero(dato);
					break;
				}
				case 4: {
					tempSerie.setCalificacion(stod(dato));
					break;
				}
				case 5: {
					tempSerie.setEpisodios(0);
					break;
				}
        	}
    	}
		// Se agrega el objeto de serie al arreglo de series
		addSerieAlArreglo(tempSerie);
	}
	// Se cierra el archivo de lectura
	lectura.close();

	/*
	* Episodios.csv
	*/
	// Se abre el archivo .csv
    lectura.open(fileepisodio.c_str(),std::ios::in);

	// Mientras que el archivo tenga otra linea se itera
	while (getline(lectura, linea)) {
		columna = 0;

		// Se toma un registro/linea
        std::stringstream registro;
		registro.str(linea);

		// Mientras que el registro tenga otro dato se itera
        while (getline(registro, dato, ';')) {
			// Cada iteración aumenta el valor de columna y eso se evalua en los cases
			// Dependiendo de en que columna se esta iterando, se asigna a un atributo diferente del objeto
            switch (columna++) {
                case 0: {
					indice = stoi(dato)-1;
                	break;
				}
                case 1: {
					tempEpisodio.setTitulo(dato);
                	break;
				}
				case 2: {
					tempEpisodio.setTemporada(stoi(dato));
                	break;
				}
				case 3: {
					tempEpisodio.setCalificacion(stod(dato));
					break;
				}
        	}
    	}
		// Dependiendo el indice que se leyo es en la serie del arreglo que se va a intentar agregar el episodio
		series[indice].agregarEpisodio(tempEpisodio);
	}
	// Se cierra el archivo de lectura
	lectura.close();
}

// Metodo para comprobar si un genero ya ha sido guardado en el arreglo de generos
// Recibe: el arreglo de generos (string), la cantidad de generos unicos, el genero a checar
// Regresa: El indice donde encontro el genero repetido / La cantidad de generos actualizada
