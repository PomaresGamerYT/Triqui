#ifndef LOGICA_H
#define LOGICA_H

extern char matrizJuego[3][3];
extern bool turnoJugador1;
extern int posiciones[3][3][2];

bool hayGanador();
bool hayEmpate();
void reiniciarTablero();
void dibujarSimbolo(int fila, int columna, char simbolo);

#endif
