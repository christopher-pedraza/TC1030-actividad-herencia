#include "Pelicula.hpp"
#include "Serie.hpp"

Pelicula pelicula1 = Pelicula(1, 120, 4, "Accion", "Piratas del Caribe");
Pelicula pelicula1 = Pelicula(2, 90, 2, "Drama", "Doraemon");

Serie serie1 = Serie(1, "Moonknight", 5, 1, 2, 150, 3, "Accion", "Episodio I");
Serie serie1 = Serie(2, "SpyXFamily", 12, 1, 1, 240, 4, "Misterio", "Episodio I");
Serie serie1 = Serie(3, "Gambito de dama", 12, 1, 1, 190, 5, "Drama", "Episodio I");

void consultarPelicula() {
    int id = 0;
    std::cout << "Dame el id de la pelicula:" << std::endl;
    std::cin >> id;
    
}

void consultarSerie() {
    int id = 0;
    std::cout << "Dame el id de la serie:" << std::endl;
    std::cin>>id;
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
/*
    P1.mostrarVideo();
    std::cout << std::endl;
    P2.mostrarVideo();
    std::cout << std::endl;

    S1.mostrarVideo();
    std::cout << std::endl;
    S2.mostrarVideo();
    std::cout << std::endl;
    S3.mostrarVideo();
*/


    menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 
