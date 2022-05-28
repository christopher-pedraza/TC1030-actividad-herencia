#ifndef Video_hpp
#define Video_hpp

#include <iostream>
#include <string>
using namespace std;

class Video {
    private: 
        // Atributos
        int id, duracion, calificacion;
        string genero, nombre;

    public: 
        // Metodos
        // Constructor
        Video();
        Video(int _id, int _duracion, int _calificacion, string _genero, string _nombre);

        // Setters
        int getID();
        string getNombre();
        int getDuracion();
        string getGenero();
        int getCalificacion();

        // Getters
        void setID(int _id);
        void setNombre(string _nombre);
        void setDuracion(int _duracion);
        void setGenero(string _genero);
        void setCalificacion(int _calificacion);
        void mostrarVideo();
};

#endif /* Video_hpp */