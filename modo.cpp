#include <iostream>
#include "gotoxy.h"
#include "modo.h"
#include "interfaz.h"
#include "logica.h"
#include "jvsj.h"
#include "cpu.h"

using namespace std;

// funcion para saber que eligio en el menu
int leerModo(int& modo) {
    bool entradaValida = false;
// cuando se equivoquen con el numero
    while (!entradaValida) {
        gotoxy(29,28); cout << "Seleccione su modo de juego: ";
        cin >> modo;

        if (modo >= 1 && modo <= 3) {
            entradaValida = true;
        } else {
            gotoxy(29,30); cout << "Ingrese una opcion valida por favor.";
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }
   //Si se elige salir, saldran los creditos y se finalizara la sesion
    if (modo==3){
    	system ("cls");
        gotoxy(15,20); cout << "Gracias por jugar!";
        exit(0);
	}
   
    system("cls");
    tablero();
// Entra al modo de juego o se sale del programa
    switch (modo) {
        case 1:
            gotoxy (1,1);cout << "1.Modo Jugador 1 vs Jugador 2.";
            jvsj();
            break;
        case 2:
            gotoxy (1,1);cout << "2.Modo Jugador 1 vs CPU.";
            cpu();
            break;
    }

    return modo;
}
