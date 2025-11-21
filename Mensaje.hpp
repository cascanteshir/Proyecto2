#ifndef MENSAJE_HPP
#define MENSAJE_HPP

#include <iostream>
#include <cstring> 
#include "Palabra.hpp"

using namespace std;

//clase Nodo
template <typename T>
class Nodo{
    public:
        T dato;
        Nodo<T>* siguiente;
        int puntaje;

        Nodo(T dato_){
            dato = dato_;
            siguiente = nullptr;
            puntaje = 0;
        }
};

//clase Lista
template <typename T>
class Lista{
    private:
        Nodo<T>* cabeza;
    public:
        Lista(){
            cabeza = nullptr;
        }

        void insertar(T dato_){
            Nodo<T>* nuevo = new Nodo<T>(dato_);
            nuevo->siguiente = cabeza;
            cabeza = nuevo;
        }

        Nodo<T>* getCabeza(){
            return cabeza;
        }




};

//clase Mensaje
class Mensaje{
    private:
        char* fraseComp;
        Lista<Palabra*> palEncontradas;

    public:
        Mensaje(const char* frase);
        ~Mensaje();
        void agregarPalabra(Palabra* p);
        void mostrarAnalisis() const;
        const char* getFrase() const;

};

#endif