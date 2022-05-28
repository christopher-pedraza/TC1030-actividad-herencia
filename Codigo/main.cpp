#include <iostream>
#include <string>
#include "Video.cpp"
#include "Pelicula.cpp"
#include "Serie.cpp"
using namespace std;

void consultarPelicula() {
    int id = 0;
    cout << "Dame el id de la pelicula:"<<endl;
    cin>>id;
    
}

void consultarSerie() {
    int id = 0;
    cout << "Dame el id de la serie:"<<endl;
    cin>>id;

}

void menu() {
    // Se declara la variable de las opciones
    int opcion = -1;

    do {
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

        switch(opcion) {
            case 0: { // Opcion para salir
                cout << endl << "Gracias por usar el programa!\n";
                break;
            }
            case 1: {
                consultarPelicula();
                break;
            }
            case 2: {
                consultarSerie();
                break;
            }
            default: { // Ninguna de las anteriores
				cout << endl << "Opcion invalida" << endl;
				break;
			}
        }
    } while (opcion != 0);
}

int main() {

    // Instanciar objetos

    Pelicula P1 = Pelicula(1,120,4, "accion", "piratas del caribe");
    Pelicula P2 = Pelicula(2,90,2, "aventura", "doraemon");
    P1.mostrarVideo();
    cout<<endl;
    P2.mostrarVideo();
    cout<<endl;
    Serie S1 = Serie(5,1,1,120,4,"Accion","Moonknight");
    Serie S2 = Serie(12,1,2,240,3,"Anime","SpyXFamily");
    Serie S3 = Serie(7,1,3,480,5,"Drama","Gambito de dama");
    S1.mostrarVideo();
    cout<<endl;
    S2.mostrarVideo();
    cout<<endl;
    S3.mostrarVideo();



    menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 
