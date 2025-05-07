#include <iostream>
#include <string> //Para tener un mejor funcionamiento
#include <windows.h> //Para usar el comando Sleep
#include "gotoxy.h"

using namespace std;

void poner_color(int color) {  //Se utiliza esta funcion para cambiar el color (del 0 al 15)
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}

//Dibujado del menu
void menu(){
	poner_color(13);
	for (int x=6; x<82; x++){
        gotoxy (x,2);cout<<char(205);
        Sleep(20);
    }
    gotoxy (6,2);cout<<char(201);
    gotoxy (82,2);cout<<char(187);
    for (int y=3; y<30; y++){
        gotoxy (6,y);cout<<char(186);
        gotoxy (82,y);cout<<char(186);
        Sleep(20);
    }
    gotoxy (6,30);cout<<char(200);
    gotoxy (82,30);cout<<char(188);
    for (int x=7; x<82; x++){
        gotoxy (x,30);cout<<char(205);
        Sleep(20);
    }
    poner_color(12);
    gotoxy (24,5);cout<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219)<<char(219);
    gotoxy (24,6);cout<<"   "<<char(219)<<char(219)<<"  ";
    gotoxy (24,7);cout<<"   "<<char(219)<<char(219)<<"  ";
    gotoxy (24,8);cout<<"   "<<char(219)<<char(219)<<"  ";
    
    poner_color (14);
    gotoxy (34,5);cout<<char(219)<<char(219)<<char(219)<<char(219);
    gotoxy (34,6);cout<<char(219)<<"   "<<char(219);
    gotoxy (34,7);cout<<char(219)<<char(219)<<char(219)<<char(219);
    gotoxy (34,8);cout<<char(219)<<"   "<<char(219);
    
    poner_color (9);
    gotoxy (41,5);cout<<char(219);
    gotoxy (41,6);cout<<char(219);
    gotoxy (41,7);cout<<char(219);
    gotoxy (41,8);cout<<char(219);
    
    poner_color (10);
    gotoxy (44,4);cout<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<" ";
    gotoxy (44,5);cout<<char(219)<<"    "<<char(219);
    gotoxy (44,6);cout<<char(219)<<"  "<<char(219)<<" "<<char(219);
    gotoxy (44,7);cout<<char(219)<<"   "<<char(219);
    gotoxy (44,8);cout<<" "<<char(219)<<char(219)<<char(219)<<" "<<char(219);
    
    poner_color (11);
    gotoxy (52,5);cout<<char(219)<<"    "<<char(219);
    gotoxy (52,6);cout<<char(219)<<"    "<<char(219);
    gotoxy (52,7);cout<<char(219)<<"    "<<char(219);
    gotoxy (52,8);cout<<" "<<char(219)<<char(219)<<char(219)<<char(219)<<" ";
    
    poner_color (1);
    gotoxy (60,5);cout<<char(219);
    gotoxy (60,6);cout<<char(219);
    gotoxy (60,7);cout<<char(219);
    gotoxy (60,8);cout<<char(219);
    
    poner_color(11);
    for (int x=26; x<60; x++){
        gotoxy (x,10);cout<<char(205);
    }
    gotoxy (26,10);cout<<char(201);
    gotoxy (60,10);cout<<char(187);
    for (int y=11; y<14; y++){
        gotoxy (26,y);cout<<char(186);
        gotoxy (60,y);cout<<char(186);
    }
    gotoxy (26,14);cout<<char(200);
    gotoxy (60,14);cout<<char(188);
    for (int x=27; x<60; x++){
        gotoxy (x,14);cout<<char(205);
    }
    gotoxy (31,12);cout<<"1. Jugador 1 vs Jugador 2";

    for (int x=26; x<60; x++){
        gotoxy (x,16);cout<<char(205);
    }
    gotoxy (26,16);cout<<char(201);
    gotoxy (60,16);cout<<char(187);
    for (int y=17; y<20; y++){
        gotoxy (26,y);cout<<char(186);
        gotoxy (60,y);cout<<char(186);
    }
    gotoxy (26,20);cout<<char(200);
    gotoxy (60,20);cout<<char(188);
    for (int x=27; x<60; x++){
        gotoxy (x,20);cout<<char(205);
    }
    
    gotoxy (33,18);cout<<"2. Jugador 1 vs CPU";


    for (int x=26; x<60; x++){
        gotoxy (x,22);cout<<char(205);
    }
    gotoxy (26,22);cout<<char(201);
    gotoxy (60,22);cout<<char(187);
    for (int y=23; y<26; y++){
        gotoxy (26,y);cout<<char(186);
        gotoxy (60,y);cout<<char(186);
    }
    gotoxy (26,26);cout<<char(200);
    gotoxy (60,26);cout<<char(188);
    for (int x=27; x<60; x++){
        gotoxy (x,26);cout<<char(205);
    }
    gotoxy (40,24);cout<<"3.Salir";


    for (int x=86; x<120; x++){
        gotoxy (x,2);cout<<char(205);
        Sleep(20);
    }
    gotoxy (86,2);cout<<char(201);
    gotoxy (120,2);cout<<char(187);
    for (int y=3; y<10; y++){
        gotoxy (86,y);cout<<char(186);
        gotoxy (120,y);cout<<char(186);
        Sleep(20);
    }
    gotoxy (86,10);cout<<char(200);
    gotoxy (120,10);cout<<char(188);
    for (int x=87; x<120; x++){
        gotoxy (x,10);cout<<char(205);
        Sleep(20);
    }

    
    for (int x=86; x<120; x++){
        gotoxy (x,12);cout<<char(205);
        Sleep(20);
    }
    gotoxy (86,12);cout<<char(201);
    gotoxy (120,12);cout<<char(187);
    for (int y=13; y<20; y++){
        gotoxy (86,y);cout<<char(186);
        gotoxy (120,y);cout<<char(186);
        Sleep(20);
    }
    gotoxy (86,20);cout<<char(200);
    gotoxy (120,20);cout<<char(188);
    for (int x=87; x<120; x++){
        gotoxy (x,20);cout<<char(205);
        Sleep(20);
    }
    poner_color(15);
}

void tablero(){
	poner_color (13);
	for (int x=6; x<82; x++){
        gotoxy (x,2);cout<<char(205);
        Sleep(20);
    }
    gotoxy (6,2);cout<<char(201);
    gotoxy (82,2);cout<<char(187);
    for (int y=3; y<30; y++){
        gotoxy (6,y);cout<<char(186);
        gotoxy (82,y);cout<<char(186);
        Sleep(20);
    }
    gotoxy (6,30);cout<<char(200);
    gotoxy (82,30);cout<<char(188);
    for (int x=7; x<82; x++){
        gotoxy (x,30);cout<<char(205);
        Sleep(20);
    }
    
    poner_color(5);
    for (int x=24; x<64; x++){
        gotoxy (x,13);cout<<char(219);
    }
    for (int x=24; x<64; x++){
        gotoxy (x,19);cout<<char(219);
    }

    for (int y=7; y<26; y++){
        gotoxy (36,y);cout<<char(219);
        gotoxy (37,y);cout<<char(219);
    }

    for (int y=7; y<26; y++){
        gotoxy (50,y);cout<<char(219);
        gotoxy (51,y);cout<<char(219);
    }

    poner_color(9);
    for (int x=86; x<120; x++){
        gotoxy (x,2);cout<<char(205);
    }
    gotoxy (86,2);cout<<char(201);
    gotoxy (120,2);cout<<char(187);
    for (int y=3; y<10; y++){
        gotoxy (86,y);cout<<char(186);
        gotoxy (120,y);cout<<char(186);
    }
    gotoxy (86,10);cout<<char(200);
    gotoxy (120,10);cout<<char(188);
    for (int x=87; x<120; x++){
        gotoxy (x,10);cout<<char(205);
    }

    
    for (int x=86; x<120; x++){
        gotoxy (x,12);cout<<char(205);
    }
    gotoxy (86,12);cout<<char(201);
    gotoxy (120,12);cout<<char(187);
    for (int y=13; y<20; y++){
        gotoxy (86,y);cout<<char(186);
        gotoxy (120,y);cout<<char(186);
    }
    gotoxy (86,20);cout<<char(200);
    gotoxy (120,20);cout<<char(188);
    for (int x=87; x<120; x++){
        gotoxy (x,20);cout<<char(205);
    }
}