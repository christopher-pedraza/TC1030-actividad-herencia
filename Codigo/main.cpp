#include "Pelicula.hpp"
#include "Serie.hpp"

Pelicula pelicula1 = Pelicula(1, 120, 4, "Accion", "Piratas del Caribe");
Pelicula pelicula2 = Pelicula(2, 90, 2, "Drama", "Doraemon");

Serie serie1 = Serie(1, "Moonknight", 1, 1, 2, 40, 3, "Accion", "Episodio I M");
Serie serie2 = Serie(2, "SpyXFamily", 1, 1, 1, 20, 4, "Misterio", "Episodio I S");
Serie serie3 = Serie(3, "Gambito de dama", 1, 1, 1, 60, 5, "Drama", "Episodio I G");

void consultarPelicula() {
    int id = 0;
    std::cout << "Introduce el ID de la pelicula:" << std::endl;
    std::cin >> id;
    if (id == 1){
        pelicula1.mostrarVideo();
        std::cout << std::endl;
    }
    if (id == 2){
        pelicula2.mostrarVideo();
        std::cout << std::endl;
    }
    
}

void consultarSerie() {
    int id = 0;
    std::cout << "Introduce el id de la serie:" << std::endl;
    std::cin>>id;

    if (id == 1) {
        serie1.mostrarEpisodios();
        std::cout << std::endl;
    }
    else if (id == 2) {
        serie2.mostrarEpisodios();
        std::cout << std::endl;
    }
    else if (id == 3) {
        serie3.mostrarEpisodios();
        std::cout << std::endl;
    }
    
    
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
    serie1.agregarEpisodio(2, 40, 4, "Accion", "En la tumba");

    menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 
