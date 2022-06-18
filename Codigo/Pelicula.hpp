/****************************************************
TC1030 - Equipo 8
Proyecto Integrador
Pelicula.hpp
*****************************************************/

#ifndef Pelicula_hpp
#define Pelicula_hpp

#include "Video.hpp"

class Pelicula : public Video {

    public:
        // Metodos
        // Constructor
        Pelicula(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre);
        
        // Adicionales
        void imprimir(int _calificacion);
        friend std::ostream& operator << (std::ostream& os, const Pelicula& _pelicula);
};

#endif /* Pelicula_hpp */