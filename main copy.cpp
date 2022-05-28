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
