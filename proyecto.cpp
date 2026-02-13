#include <iostream>
#include <string>

using namespace std;

struct Jugador{
    string nombre;
    int identificador;
    Jugador* sig;
    Jugador* ant;
};

class Juego{
private:
    Jugador *pInicio;

public:
    Juego(){
        pInicio = NULL;
    }

    #include "inscribir.h"
};

int main(){
    Juego juego;
    juego.insertar();
    return 0;
}
