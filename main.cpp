#include <iostream>
#include <string>
using namespace std;


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

void consultarPelicula() {

}

void consultarSerie() {

}

int main() {
    int opcion = -1;

    do {
        opcion = menu();

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
        }
    } while (opcion != 0);
    
    return 0;
} 
