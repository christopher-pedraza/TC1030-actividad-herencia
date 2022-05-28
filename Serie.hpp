#ifndef Serie_hpp
#define Serie_hpp

#include "Video.hpp"

class Serie : public Video {
    private:
        // Atributos
        int cantidad_episodios, temporada;
        Video episodios[10];

    public:
        // Metodos
        // Constructor
        Serie(int _cantidad_episodios, int _temporada, int _id, int _duracion, int _calificacion, string _genero, string _nombre);

        // Setters
        void setEpisodios(int _cantidad_episodios);
        void setTemporada(int _temporada);
        void setTituloEp(Video _titulo_Ep, int _index);

        // Getters
        int getCantidadEpisodios();
        int getTemporada();
        Video getEpisodio(int _index);

        // Adiocionales
        void agregarEpisodio(Video _episodio);
        void agregarEpisodio(int _id, int _duracion, int _calificacion, string _genero, string _nombre);
};

#endif /* Serie_hpp */