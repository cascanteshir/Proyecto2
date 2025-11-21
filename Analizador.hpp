#ifndef ANALIZADOR_HPP
#define ANALIZADOR_HPP

#include <iostream>
#include "Mensaje.hpp"
#include <fstream>

using namespace std;

class Analizador{
    private:
        Lista<Palabra*> bancoPalabras;
    
    public:
        Analizador();
        void cargarPalabras(const char* archivo);
        int analizarFrase(char * frase);
        const char* calcularSentimiento(int puntaje);
};

#endif