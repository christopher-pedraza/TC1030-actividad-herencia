#include "Pelicula.hpp"
#include "Serie.hpp"
#include <fstream>
#include <iostream>

std::vector<Pelicula> peliculas;
std::vector<Serie> series;
std::vector<Video> videos;

void consultarPelicula() {
    int id = 0;
    std::cout << "Introduce el ID de la pelicula:" << std::endl;
    std::cin >> id;
    if (id <= peliculas.size() && id > 0) {
        peliculas[id-1].mostrarVideo();
        std::cout << std::endl;
    } else {
        std::cout << "ID inválido" << std::endl;
    }
}

void consultarSerie() {
    int id = 0;
    std::cout << "Introduce el id de la serie:" << std::endl;
    std::cin >> id;

    if (id <= series.size() && id > 0) {
        series[id-1].mostrarEpisodios();
        std::cout << std::endl;
    } else {
        std::cout << "ID inválido" << std::endl;
    }
}

void consultarSerieCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:" << std::endl;
    std::cin >> calificacion;

    for (int i = 0; i < series.size(); i++) {
        series[i].imprimir(calificacion);
    }
}

void consultarPeliculaCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:" << std::endl;
    std::cin >> calificacion;

    for (int i = 0; i < peliculas.size(); i++) {
        peliculas[i].imprimir(calificacion);
    }
}

void consultarVideoCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:" << std::endl;
    std::cin >> calificacion;

    for (int i = 0; i < videos.size(); i++) {
        videos[i].imprimir(calificacion);
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
            "\n3)  Consultar serie por calificación" <<
            "\n4)  Consultar película por calificación" <<
            "\n5)  Consultar video por calificación" <<
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
            case 3: {
                consultarSerieCalificacion();
                break;
            }
            case 4: {
                consultarPeliculaCalificacion();
                break;
            }
            case 5: {
                consultarVideoCalificacion();
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

    
    //menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 
