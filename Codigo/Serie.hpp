#ifndef Serie_hpp
#define Serie_hpp

#include "Video.hpp"


class Serie : public Video {
    private:
        // Atributos
        int cantidadEpisodios, temporada, idSerie;
        std::string nombreSerie;
        std::vector<Video> episodios;
        //Video episodios[100];

    public:
        // Metodos
        // Constructor
        Serie(int _idSerie, std::string _nombre, int _cantidadEpisodios, int _idEpisodio, int _temporada, int _duracion, int _calificacion, std::string _genero, std::string _nombreEpisodio);

        // Setters
        void setIDSerie(int _idSerie);
        void setEpisodios(int _cantidad_episodios);
        void setTemporada(int _temporada);
        void setNombreSerie(std::string _nombreSerie);
        void setEpisodio(Video _titulo_Ep, int _index);

        // Getters
        int getIDSerie();
        int getCantidadEpisodios();
        int getTemporada();
        std::string getNombreSerie();
        Video getEpisodio(int _index);

        // Adiocionales
        void agregarEpisodio(Video _episodio);
        void agregarEpisodio(int _id, int _duracion, int _calificacion, std::string _genero, std::string _nombre);
        void mostrarEpisodios();
        void imprimir(int _calificacion);
};

#endif /* Serie_hpp */