#include <iostream>
#include<stdio.h>
#include <stdlib.h>
#include <funciones.h>

using namespace std;
typedef char tablero[100][100];


void jugar_ingles(){
tablero tab;
inicializarTablero_ingles(tab,7,7);
mostrarTablero(tab,7,7);
int origenFila, origenColumna, destinoFila, destinoColumna, movimientoValido, entrada=1;

  while(entrada != 0){
    cout<<"\nIngresa la posición de origen (fila):";
    cin>>origenFila;
    cout<<"\nIngresa la posición de origen (columna):";
    cin>>origenColumna;
    cout<<endl;

    cout<<"Ingrese la posición de destino (fila):";
    cin>>destinoFila;
    cout<<"\nIngrese la posición de destino (columna):";
    cin>>destinoColumna;
    cout<<endl;

    movimientoValido = validar_mov(origenFila,origenColumna,destinoFila,destinoColumna,tab);
      if(movimientoValido==1){
        mover(origenFila,origenColumna,destinoFila,destinoColumna,tab);
        cout<<endl;
        mostrarTablero(tab,7,7);
      }else{
        cout<<"\nMOVIMIENTO INVÁLIDO\n";
        cout<<endl;
        mostrarTablero(tab,7,7);
      }

    final_juego(tab,7,7);  
    }
}

  

void jugar_aleman(){
tablero tab;
inicializarTablero_aleman(tab,9,9);
mostrarTablero(tab,9,9);
int origenFila, origenColumna, destinoFila, destinoColumna, movimientoValido, entrada=1;

  while(entrada != 0){
    cout<<"\nIngresa la posición de origen (fila):";
    cin>>origenFila;
    cout<<"\nIngresa la posición de origen (columna):";
    cin>>origenColumna;
    cout<<endl;

    cout<<"Ingrese la posición de destino (fila):";
    cin>>destinoFila;
    cout<<"\nIngrese la posición de destino (columna):";
    cin>>destinoColumna;
    cout<<endl;

    movimientoValido = validar_mov(origenFila,origenColumna,destinoFila,destinoColumna,tab);
      if(movimientoValido==1){
        mover(origenFila,origenColumna,destinoFila,destinoColumna,tab);
        cout<<endl;
        mostrarTablero(tab,9,9);
      }else{
        cout<<"\nMOVIMIENTO INVÁLIDO\n";
        cout<<endl;
        mostrarTablero(tab,9,9);
      }

     final_juego(tab,9,9);  
   }
}



void jugar_asimetrico(){
tablero tab;
inicializarTablero_asimetrico(tab,8,8);
mostrarTablero(tab,8,8);
int origenFila, origenColumna, destinoFila, destinoColumna, movimientoValido, entrada=1;

  while(entrada != 0){
    cout<<"\nIngresa la posición de origen (fila):";
    cin>>origenFila;
    cout<<"\nIngresa la posición de origen (columna):";
    cin>>origenColumna;
    cout<<endl;

    cout<<"Ingrese la posición de destino (fila):";
    cin>>destinoFila;
    cout<<"\nIngrese la posición de destino (columna):";
    cin>>destinoColumna;
    cout<<endl;

    movimientoValido = validar_mov(origenFila,origenColumna,destinoFila,destinoColumna,tab);
      if(movimientoValido==1){
        mover(origenFila,origenColumna,destinoFila,destinoColumna,tab);
        cout<<endl;
        mostrarTablero(tab,8,8);
      }else{
        cout<<"\nMOVIMIENTO INVÁLIDO\n";
        cout<<endl;
        mostrarTablero(tab,8,8);
      }

     final_juego(tab,8,8);   
   }
}


void menu(){
  int opcion;

  cout<<"\n Menú:        JUEGO   SENKU     ";cout<<endl;
  cout<<"-----------------------------------------------------------";
cout<<endl;
cout<<"1.Estilo Inglés";
cout<<"\n2.Estilo Alemán";
cout<<"\n3.Estilo Asimétrico";
cout<<endl;
cout<<"-----------------------------------------------------------";
cout<<"\n0.Salir del programa";
cout<<endl;
cout<<endl;
cout<<"Seleccionar una opción:";cin>>opcion;
 if(opcion==1){
 cout<<endl;
 jugar_ingles();
 }if(opcion==2){
 cout<<endl;
 jugar_aleman();
 }if(opcion==3){
 cout<<endl;
 jugar_asimetrico();
 }if(opcion==0){
 cout<<"\nVuelve cuando quieras!!!!!   :) :) :) ";
 }else 
 cout<<"Entrada inválida";cout<<endl;
}

int main(){
  menu();
  return 0;
}
