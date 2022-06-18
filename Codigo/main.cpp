/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Main.cpp
*****************************************************/

#include <fstream>
#include <iostream>
#include "Pelicula.hpp"
#include "Serie.hpp"
#include "Series.hpp"
#include "InvalidOptionException.hpp"

std::vector<Pelicula> peliculas;
std::vector<Serie> series;
std::vector<Video> videos;

void consultarPelicula() {
    int id = 0;
    std::cout << "Películas disponibles: " << std::endl;
    for (int i = 1; i <= peliculas.size(); i++) {
        std::cout << peliculas[i-1];
    }
    std::cout << "Introduce el id de la pelicula:" << std::endl;
    std::cin >> id;

    try {
        if (id <= peliculas.size() && id > 0) {
            peliculas[id-1].mostrarVideo();
            std::cout << std::endl;
        } else {
            throw InvalidOptionException();
        }
    } catch(InvalidOptionException& e) {
        std::cout << e.what() << std::endl;
        std::cout << "ID inválido" << std::endl;
    }
}

void consultarSerie() {
    int id = 0;
    std::cout << "Series disponibles: " << std::endl;
    for (int i = 1; i <= series.size(); i++) {
        std::cout << series[i-1];
    }
    std::cout << "Introduce el id de la serie:" << std::endl;
    std::cin >> id;
    std::cout << std::endl;
    try {
        if (id <= series.size() && id > 0) {
            series[id-1].mostrarEpisodios();
            std::cout << std::endl;
        } else {
            throw InvalidOptionException();
        }
    } catch(InvalidOptionException& e) {
        std::cout << e.what() << std::endl;
        std::cout << "ID inválido" << std::endl;
    }

}

void consultarSerieCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:";
    std::cin >> calificacion;
    std::cout << std::endl;

    for (int i = 0; i < series.size(); i++) {
        series[i].imprimir(calificacion);
    }
}

void consultarPeliculaCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:";
    std::cin >> calificacion;
    std::cout << std::endl;

    for (int i = 0; i < peliculas.size(); i++) {
        peliculas[i].imprimir(calificacion);
    }
}

void consultarVideoCalificacion() {
    int calificacion = 0;
    std::cout << "Introduce la calificacion deseada para consultar:";
    std::cin >> calificacion;
    std::cout << std::endl;

    for (int i = 0; i < videos.size(); i++) {
        videos[i].imprimir(calificacion);
    }
}

void agregarVideos() {
    Pelicula pelicula1 = Pelicula(1, 120, 4, "Accion", "Piratas del Caribe");
    Pelicula pelicula2 = Pelicula(2, 90, 2, "Drama", "Doraemon");
    peliculas.push_back(pelicula1);
    peliculas.push_back(pelicula2);

    Video video1 = Video(1, 20, 2, "Terror", "Básicos de Electromagnetismo");
    videos.push_back(video1);
}

void cargarArchivo() {
    Series data;
    std::string nombreseries,nombreepisodios;
    std::cout << "Introduce el nombre del archivo de series: ";
    std::cin>>nombreseries;
    std::cout << std::endl;
    std::cout << "Introduce el nombre del archivo de episodios: ";
    std::cin>>nombreepisodios;
    std::cout << std::endl;

    data.leerArchivo(nombreseries, nombreepisodios);

    series = data.getSeries();
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
            "\n6)  Cargar archivo de datos" <<
            "\n0)  Salir del programa" <<
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
            case 6: {
                    cargarArchivo();
                break;
            }          
            default: { // Ninguna de las anteriores
				break;
			}
        }
    } while (opcion != 0);
}

int main() {

    agregarVideos();
    menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 


