#include <iostream>
#include "Analizador.hpp"

using namespace std;

int main() {
    Analizador analizador;
    analizador.cargarPalabras("palabras.txt");

    const char* frases[] = {
        "Usted es muy bueno y rápido jugando.",
        "El servicio fue horrible y malo.",
        "La comida estuvo excelente pero el lugar es feo.",
        "Nada especial, fue normal.",
        "Me siento feliz y contento con el resultado."
    };

    for (int i = 0; i < 5; i++) {
        cout << "Frase: " << frases[i] << endl;
        int puntaje = analizador.analizarFrase((char*)frases[i]);

        cout << "Puntaje: " << puntaje << " Resultado: ";
        if (puntaje > 0) cout << "POSITIVO";
        else if (puntaje < 0) cout << "NEGATIVO";
        else cout << "NEUTRO";
        cout << endl << "-----------------------------------" << endl;
    }

    return 0;
}
