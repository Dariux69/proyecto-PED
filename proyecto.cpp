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
    Juego();
    void insertar(void);
    void menu(void);
};

Juego::Juego(){
    pInicio = NULL;
};
    void insertar;
    void Juego::insertar(void){
        Jugador* nuevo;
        string nombre;
        char respuesta;
        int identificador;
        do {
        cout << "¿Quieres inscribir un jugador nuevo? (s/n)"<< endl;
        cin >> respuesta;
        if(respuesta == 's'){
            cout << "Digite el nombre: "<< endl;
            cin >> nombre;
            cout << "Digite un identificador numerico : "<< endl;
            cin >> identificador;
            nuevo = new Jugador;
            nuevo->identificador = identificador;
            nuevo->nombre = nombre; 
            nuevo->sig = pInicio; 
            nuevo->ant = NULL;
            if(pInicio != NULL)
                pInicio->ant = nuevo;
            pInicio = nuevo;
        }

        } while (respuesta == 's');
    };
int main()
{

    return 0;
}