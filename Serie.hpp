#ifndef Serie_hpp
#define Serie_hpp

#include "Video.hpp"

class Serie : public Video {
    private:
        // Atributos
        int cantidad_episodios, temporada;
        string titulo_Ep;

    public:
        // Metodos
        // Constructor
        Serie(int _cantidad_episodios, int _temporada, string _titulo_Ep, int _id, int _duracion, int _calificacion, string _genero, string _nombre);

        // Setters
        void setEpisodios(int _cantidad_episodios);
        void setTemporada(int _temporada);
        void setTituloEp(string _titulo_Ep, int _index);

        // Getters
        int getEpisodios();
        int getTemporada();
        string getTituloEp(int _index);
};

#endif /* Serie_hpp */