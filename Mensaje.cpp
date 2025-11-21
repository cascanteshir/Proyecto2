#include "Mensaje.hpp"

Mensaje::Mensaje(const char* frase){
    fraseComp = new char[strlen(frase)+1]; //Arreglo char del tamaño de la frase +1
    strcpy(fraseComp, frase); //Guardar frase en el arreglo
}

void Mensaje::agregarPalabra(Palabra* p) {
    palEncontradas.insertar(p);
}


Mensaje::~Mensaje() {
    delete[] fraseComp;
}