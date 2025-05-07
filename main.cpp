#include <iostream>
#include <windows.h> //Para la pantalla completa
#include "interfaz.h"
#include "gotoxy.h"
#include "logica.h"
#include "modo.h"

using namespace std;

int main() {
	//Para poner la pantalla completa presiona alt + enter, asi evita errores por tamaño de la pestaña del cmd
	keybd_event(VK_MENU, 0, 0, 0);
    keybd_event(VK_RETURN, 0, 0, 0);
    keybd_event(VK_RETURN, 0, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0, KEYEVENTF_KEYUP, 0);
	
	//Llama la interfaz y hace el proceso de leer el modo que se encuentra en cpp modo
    int modo;
    menu();
    leerModo(modo);
    return 0;
}
