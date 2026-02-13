#ifndef INSCRIBIR_H
#define INSCRIBIR_H

void insertar(){
    Jugador* nuevo;
    char respuesta;

    do {
        cout << "¿Quieres inscribir un jugador nuevo? (s/n): ";
        cin >> respuesta;

        if(respuesta == 's'){
            nuevo = new Jugador;

            cout << "Nombre: ";
            cin >> nuevo->nombre;

            cout << "Identificador numerico: ";
            cin >> nuevo->identificador;

            if(pInicio == NULL){
                nuevo->sig = nuevo;
                nuevo->ant = nuevo;
                pInicio = nuevo;
            }
            else{
                Jugador* ultimo = pInicio->ant;

                nuevo->sig = pInicio;
                nuevo->ant = ultimo;

                ultimo->sig = nuevo;
                pInicio->ant = nuevo;
            }
        }

    } while (respuesta == 's');
}

#endif

