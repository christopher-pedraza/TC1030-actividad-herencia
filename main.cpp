#include <iostream>
#include <string>
using namespace std;


/*
* Templates de las clases
*/
// Clase base
class Video {
    private: 
        // Atributos
        int id, duracion, calificacion;
        string genero, nombre;

    public: 
        // Metodos
        // Constructor
        Video();
        Video(int _id, int _duracion, int _calificacion, string _genero, string _nombre);

        // Setters
        int getID();
        string getNombre();
        int getDuracion();
        string getGenero();
        int getCalificacion();

        // Getters
        void setID(int _id);
        void setNombre(string _nombre);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacion(int _calificacion);
        void mostrarVideo();
};

class Serie : public Video {
    private:
        // Atributos
        int cantidad_episodios, temporada;
        string titulo_Ep;

    public:
        // Metodos
        // Constructor
        Serie(int _cantidad_episodios, int _temporada, string _titulo_Ep, int _id, int _duracion, int _calificacion, string _genero, string _nombre);

        // Setters
        void setEpisodios(int _cantidad_episodios);
        void setTemporada(int _temporada);
        void setTituloEp(string _titulo_Ep, int _index);

        // Getters
        int getEpisodios();
        int getTemporada();
        string getTituloEp(int _index);
};

class Pelicula:public Video{
    public:
        Pelicula(int _id, int _duracion, int _calificacion, string _genero, string _nombre);
};


/*
* Metodos especificos de las clases
*/
// Clase Video
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


int menu() {
    // Se declara la variable de las opciones
    int opcion = 0;

    // Se despliega el menu de opciones
    cout << "\n\n•••••••••••••••••••••••••••••••••••" <<
		"\nMenu de opciones" <<
		"\n1)  Consultar pelicula" <<
		"\n2)  Consultar serie" <<
		"\n0) Salir del programa" <<
		"\nIntroduce la opción que desea desplegar: ";

	// Se pide al usuario que introduzca un numero
    cin >> opcion;

	cout << "•••••••••••••••••••••••••••••••••••\n\n" << endl;

    // Regresar el valor introducido
    return opcion;
}

int main() {
    menu();
    return 0;
} 
