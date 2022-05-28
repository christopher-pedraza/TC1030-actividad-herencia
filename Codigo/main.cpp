#include "Pelicula.hpp"
#include "Serie.hpp"

Pelicula pelicula1 = Pelicula(0, 150, 3, "Drama", "nombre1");
Pelicula pelicula1 = Pelicula(1, 230, 4, "Acción", "nombre2");

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
