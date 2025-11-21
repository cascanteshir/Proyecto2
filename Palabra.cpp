#include "Palabra.hpp"

Palabra::Palabra(const char* texto_, const char* categoria_){
    texto = new char[strlen(texto_)+1];
    strcpy(texto, texto_);

    categoria = new char[strlen(categoria_)+1];
    strcpy(categoria, categoria_);
}

char* Palabra::getTexto() const{
    return texto;
}

char* Palabra::getCategoria() const{
    return categoria;
}

void Palabra::setTexto(char* texto_){
    texto = texto_;
}

void Palabra::setCategoria(char* categoria_){
    categoria = categoria_;
}

Palabra::~Palabra() {
    delete[] texto;
    delete[] categoria;
}