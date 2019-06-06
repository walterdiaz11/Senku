#include <iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
typedef char tablero[100][100];

void inicializarTablero_ingles(tablero tab,int fila,int columna);

void mostrarTablero(tablero tab, int fila, int columna);

int validar_mov(int origenFila, int origenColumna, int destinoFila, int destinoColumna, tablero tab);

void mover(int origenFila, int origenColumna, int destinoFila, int destinoColumna, tablero tab);

void perdiste(tablero tab,int fila,int columna);

void final_juego(tablero tab,int fila,int columna);

void inicializarTablero_aleman(tablero tab,int fila, int columna);

void inicializarTablero_asimetrico(tablero tab, int fila, int columna);




