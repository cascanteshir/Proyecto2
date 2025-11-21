#ifndef PALABRA_HPP
#define PALABRA_HPP

#include <iostream>
#include <cstring>

using namespace std;

class Palabra{
    private:
        char* texto;
        char* categoria;

    public:

        Palabra(const char* texto_, const char* categoria_);
        ~Palabra();
        char* getTexto() const;
        char* getCategoria() const;
        void setTexto(char* texto_);
        void setCategoria(char* categoria);
};

#endif