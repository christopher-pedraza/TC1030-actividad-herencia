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

void agregarVideos() {
    Pelicula pelicula1 = Pelicula(1, 120, 4, "Accion", "Piratas del Caribe");
    Pelicula pelicula2 = Pelicula(2, 90, 2, "Drama", "Doraemon");
    peliculas.push_back(pelicula1);
    peliculas.push_back(pelicula2);

    Serie serie1 = Serie(1, "Moonknight", 1, 1, 2, 40, 3, "Accion", "Episodio I M");
    serie1.agregarEpisodio(2, 40, 4, "Accion", "En la tumba");
    Serie serie2 = Serie(2, "SpyXFamily", 1, 1, 1, 20, 5, "Misterio", "Episodio I S");
    Serie serie3 = Serie(3, "Gambito de dama", 1, 1, 1, 60, 5, "Drama", "Episodio I G");
    series.push_back(serie1);
    series.push_back(serie2);
    series.push_back(serie3);

    Video video1 = Video(1, 20, 2, "Terror", "Básicos de Electromagnetismo");
    videos.push_back(video1);
}

void storePeliculas(std::string Filename, std::vector<Pelicula> peliculas){

    std::vector<Pelicula> data = peliculas;
    std::ofstream File;
    File.open(Filename.c_str(),std::ios::app);
    for (int i = 0;data.size() > i;i++){
        File.write((char*)& data[i],sizeof(data[i]));

    }
    File.close();
}

void readPeliculas(std::string Filename){

    std::ifstream File;
    File.open(Filename.c_str(),std::ios::in);
    while(!File.eof()){
        Pelicula temp(0,0,0," "," ");
        File.read((char*)& temp,sizeof(temp));
        peliculas.push_back(temp);
    }
    File.close();

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
    //agregarVideos();

    //storePeliculas("peliculas.txt", peliculas);
    readPeliculas("peliculas.txt");
    peliculas[1].mostrarVideo();
    //menu(); // Se mantiene en ciclo en esta funcion
    return 0;
} 
