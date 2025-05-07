#include "logica.h"
#include "gotoxy.h"
#include <iostream>

using namespace std;
//Matriz de juego
char matrizJuego[3][3] = {
	{' ', ' ', ' '}, 
	{' ', ' ', ' '}, 
	{' ', ' ', ' '}
};
// Cambio de turno con el otro jugador
bool turnoJugador1 = true;

// X - Y - (X o O)
int posiciones[3][3][2] = {
    {{30,10}, {44,10}, {58,10}},
    {{30,16}, {44,16}, {58,16}},
    {{30,22}, {44,22}, {58,22}}
};

// Coloca los simbolos en la posicion seleccionada
void dibujarSimbolo(int fila, int columna, char simbolo) {
    if (fila >= 0 && fila < 3 && columna >= 0 && columna < 3) {
        int x = posiciones[fila][columna][0];
        int y = posiciones[fila][columna][1];
        gotoxy(x, y);
        cout << simbolo;
        cout.flush();
    }
}

//Comprueba si en diagonal, vertical o horizontal hay una x o un O 
bool hayGanador() {
    for (int i = 0; i < 3; i++) {
        if (matrizJuego[i][0] != ' ' && 
			matrizJuego[i][0] == matrizJuego[i][1] && 
			matrizJuego[i][1] == matrizJuego[i][2]) 
			return true;
        if (matrizJuego[0][i] != ' ' && 
			matrizJuego[0][i] == matrizJuego[1][i] && 
			matrizJuego[1][i] == matrizJuego[2][i]) 
			return true;
    }
    if (matrizJuego[0][0] != ' ' && 
		matrizJuego[0][0] == matrizJuego[1][1] && 
		matrizJuego[1][1] == matrizJuego[2][2]) 
		return true;
    if (matrizJuego[0][2] != ' ' && 
		matrizJuego[0][2] == matrizJuego[1][1] && 
		matrizJuego[1][1] == matrizJuego[2][0]) 
		return true;
    return false;
}

// Comprueba si todo esta lleno, como todo esta lleno y no hay ganador es empate
bool hayEmpate() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrizJuego[i][j] == ' ') return false;
    return true;
}

//Simplemente limpia el tablero para la siguiente partida
void reiniciarTablero() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrizJuego[i][j] = ' ';
            gotoxy(posiciones[i][j][0], posiciones[i][j][1]);
            cout << ' ';
        }
    }
    turnoJugador1 = true;
}