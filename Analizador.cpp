#include "Analizador.hpp"

Analizador::Analizador(){}

void Analizador::cargarPalabras(const char* archivo){
    std::ifstream in(archivo);
    char linea[256];
    while(in.getline(linea, 256)) {
        char* palabra = strtok(linea, ",");
        char* categoria = strtok(nullptr, ",");
        bancoPalabras.insertar(new Palabra(palabra, categoria));
    }
    in.close();
}

int Analizador::analizarFrase(char* frase) {
    int puntaje = 0;
    char* copia = new char[strlen(frase)+1];
    strcpy(copia, frase);

    char* token = strtok(copia, " ,.;!?");
    while(token) {
        for(int i=0; token[i]; i++) token[i] = tolower(token[i]);

        Nodo<Palabra*>* actual = bancoPalabras.getCabeza();
        while(actual != nullptr) {
            Palabra* p = actual->dato;
            if(strcmp(token, p->getTexto()) == 0) {
                if(strcmp(p->getCategoria(), "positiva") == 0) puntaje++;
                else if(strcmp(p->getCategoria(), "negativa") == 0) puntaje--;
            }
            actual = actual->siguiente;
        }

        token = strtok(nullptr, " ,.;!?");
    }

    delete[] copia;
    return puntaje;
}

const char* Analizador::calcularSentimiento(int puntaje) {
    if(puntaje > 0) return "POSITIVO";
    else if(puntaje < 0) return "NEGATIVO";
    else return "NEUTRO";
}