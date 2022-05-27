#include <iostream>
#include <string>
using namespace std;



class Video {
    public: 
        // atributos
        int id, duracion, calificacion;
        string genero, nombre;

        // metodo constructor

        Video(){
            id = 0;
            duracion = 0;
            calificacion = 0;
            genero = "";
            nombre = "";

        }

        Video(int _id, int _duracion, int _calificacion, string _genero, string _nombre){
            id = _id;
            duracion = _duracion;
            calificacion = _calificacion;
            genero = _genero;
            nombre = _nombre;
        }

        //setters

        int getID(){
            return id;
        }

        string getNombre(){
            return nombre;
        }

        int getDuracion(){
            return duracion;
        }

        string getGenero(){
            return genero;
        }
        int getCalificacion(){
            return calificacion;
        }

        //getters

        void setID(int _id) {
            id = _id;
        }

        void setNombre(string _nombre) {
            nombre = _nombre;
        }

        void setDuracion(int _duracion) {
            duracion = _duracion;
        }

        void setGenero(string _genero) {
            genero = _genero;
        }

        void setCalificacion(int _calificacion) {
            calificacion = _calificacion;
        }

        void mostrarVideo(){
            cout<<"id: "<<id<<endl;
            cout<<"nombre: "<<nombre<<endl;
            cout<<"duracion: "<<duracion<<endl;
            cout<<"genero: "<<genero<<endl;
            cout<<"calificacion: "<<calificacion<<endl;
        }


};

class Serie : public Video{
    public:
        int episodios, temporada;
        string titulo_Ep;


        //constructor

        Serie(int _id, int _duracion, int _calificacion, string _genero, string _nombre ,int _episodios, int _temporada, string _titulo_Ep){
            Video( _id,  _duracion,  _calificacion,  _genero,  _nombre);
            episodios = _episodios;
            temporada = _temporada;
            titulo_Ep = _titulo_Ep;
        }

        //setters

        void setEpisodios(int _episodios){
            episodios = _episodios; 
        }

        void setTemporada(int _temporada){
            temporada = _temporada; 
        }

        void setTituloEp(int _titulo_Ep){
            
        }

        //getters

        int getEpisodios(){
            return episodios;
        }

        int getTemporada(){
            return temporada;
        }

        string getTituloEp(){
            return titulo_Ep;
        }


};

class Pelicula:public Video{
    public:

        Pelicula(int _id, int _duracion, int _calificacion, string _genero, string _nombre){
            Video( _id,  _duracion,  _calificacion,  _genero,  _nombre);
        }


};
