#include "Pelicula.hpp"
#include "Serie.hpp"

Pelicula pelicula1 = Pelicula(0, 150, 3, "Drama", "nombre1");
Pelicula pelicula1 = Pelicula(1, 230, 4, "Acción", "nombre2");

void consultarPelicula() {
    std::cout << "1";
}

void consultarSerie() {
    std::cout << "2";
}

void menu() {
    // Se declara la variable de las opciones
    int opcion = -1;

    do {
        // Se despliega el menu de opciones
        std::cout << "\n\n•••••••••••••••••••••••••••••••••••" <<
            "\nMenu de opciones" <<
            "\n1)  Consultar pelicula" <<
            "\n2)  Consultar serie" <<
            "\n0) Salir del programa" <<
            "\nIntroduce la opción que desea desplegar: ";

        // Se pide al usuario que introduzca un numero
        std::cin >> opcion;

        std::cout << "•••••••••••••••••••••••••••••••••••\n\n" << std::endl;

        switch(opcion) {
            case 0: { // Opcion para salir
                std::cout << std::endl << "Gracias por usar el programa!\n";
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
				std::cout << std::endl << "Opcion invalida" << std::endl;
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
