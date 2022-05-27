#include <iostream>
#include <string>
using namespace std;



class Video {
    protected: 
        // atributos
        int id, duracion, calificacion;
        string genero, nombre;

        // metodo constructor

        Video(){
            id = 0;
            duracion = 0;
            calificacion = 0;
            genero = "";
            nombre = "";

        }

        Video(int _id, int _duracion, int _calificacion, string _genero, string _nombre){
            id = _id;
            duracion = _duracion;
            calificacion = _calificacion;
            genero = _genero;
            nombre = _nombre;
        }

        //setters

        int getID(){
            return id;
        }

        string getNombre(){
            return nombre;
        }

        int getDuracion(){
            return duracion;
        }

        string getGenero(){
            return genero;
        }
        int getCalificacion(){
            return calificacion
        }

        //getters

        void setID(int _id) {
            id = _id;
        }

        void setNombre(string _nombre) {
            nombre = _nombre;
        }

        void setDuracion(int _duracion) {
            duracion = _duracion;
        }

        void setGenero(string _genero) {
            genero = _genero;
        }

        void setCalificacion(int _calificacion) {
            calificacion = _calificacion;
        }

        void mostrarVideo(){
            cout<<"id: "<<id<<endl;
            cout<<"nombre: "<<nombre<<endl;
            cout<<"duracion: "<<duracion<<endl;
            cout<<"genero: "<<genero<<endl;
            cout<<"calificacion: "<<calificacion<<endl;
        }
};

int menu() {
    // Se declara la variable de las opciones
    int opcion = 0;

    // Se despliega el menu de opciones
    cout << "\n\n•••••••••••••••••••••••••••••••••••" <<
		"\nMenu de opciones" <<
		"\n1)  Consultar pelicula" <<
		"\n2)  Consultar serie" <<
		"\n3)  Calificar pelicula" <<
		"\n4)  Calificar serie" <<
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