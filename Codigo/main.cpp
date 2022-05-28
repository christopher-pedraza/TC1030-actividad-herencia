#include <iostream>
#include <string>
using namespace std;

void consultarPelicula() {
    cout << "1";
}

void consultarSerie() {
    cout << "2";
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

    menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 
