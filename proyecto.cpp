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
    void mostrarLista(void);
    void menu(void);
};

Juego::Juego(){
    pInicio = NULL;
};

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

   void  Juego :: mostrarLista(void){
    Jugador *s1 = pInicio;
    Jugador *s2 = NULL;
    while(s1 != NULL){
        cout << s1->nombre << "  " <<s1->identificador<< " ";
        s2 = s1;
        s1 = s1->sig;
    }
    cout << endl;
    while(s2 != NULL){
        cout << s2->nombre << "  " << s2->identificador<< " ";
        s2 = s2->ant;
    }
    cout << endl;
}

void Juego::menu(void){
    cout<<"endl";
    cout<<"Las opciones del menu son:"<<endl;

    int opcion;
    do{
        cout<< "1) Insertar jugador." << endl
            << "2) Mostrar la lista." << endl
            << "3) salir"<<endl;
            cin>> opcion;
    switch(opcion){
        case 1:
            insertar();
        break;
            mostrarLista();
        case 2:
        break; 

    };
    }while(opcion !=3);
}


int main(void){
    cout<<"endl";
    cout<< " Prueba de codigo :D"<<endl<<endl;

    Juego miJuego;
    miJuego.menu();

    cout <<endl;
    return 0;
}