#ifndef Pelicula_hpp
#define Pelicula_hpp

#include "Video.hpp"

class Pelicula : public Video {
    public:
        // Metodos
        // Constructor
        Pelicula(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre);
};

#endif /* Pelicula_hpp */