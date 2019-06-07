#include <funciones.h>

void inicializarTablero_ingles(tablero tab,int fila,int columna){
  
  for (int f = 0; f < fila; f++){
    for (int c = 0; c < columna; c++){
      if (f == 3 && c == 3){
        tab[f][c] = '+';
      }else{
        if( (f < 2 || f > 4) && (c < 2 || c > 4) ){
          tab[f][c] = ' ' ;
        }else{
          tab[f][c] = 'O';
        }
      }
    }
  }
}

void mostrarTablero(tablero tab, int fila, int columna){
  int numeros;

  for (int f = 0; f < fila; f++){
    if (f == 0){
        for (numeros = 0; numeros <= fila; numeros++){
          if (numeros == 0){
            cout<<"  ";
          }else{
            cout<<" "<<numeros;
          }         
        }cout<<endl;
      }
    cout<<" "<<(f+1);
    for (int c = 0; c < columna; c++){
      cout<<" "<<tab[f][c];
    }
    cout<<endl;
  }
}

int validar_mov(int origenFila, int origenColumna, int destinoFila, int destinoColumna, tablero tab){
  //Que la ficha a mover tenga a su costado alguna ficha
  if( (tab[origenFila-2][origenColumna-1]=='O'|| tab[origenFila][origenColumna-1]=='O') || (tab[origenFila-1][origenColumna-2]=='O' || tab[origenFila-1][origenColumna]=='O')){
    cout<<"\nHay un O al costado de la ficha\n";
    
//Que la posicion de origen sea O y la de destino +
    if(tab[origenFila - 1][origenColumna - 1] == 'O' && tab[destinoFila - 1][destinoColumna - 1] == '+'){
     cout<<"\nLa posicion de origen es O y de destino +";
//Que solo se mueva dos posiciones ya sea vertical, horizontal, arriba o abajo
     if(abs(origenFila-destinoFila)== 2 || abs(origenColumna-destinoColumna)==2){
cout<<"\nSolo se mueve dos posiciones\n";
//Movimiento horizontal
if (origenFila == destinoFila){
        //movimiento derecha ---->
         if ((origenColumna < destinoColumna) && (tab[origenFila-1][origenColumna]!='+')){
          return 1;
          cout<<"\nSe puede mover a la derecha\n";
         }else{
           //movimiento izquierda <----
          if(tab[origenFila-1][origenColumna-2] !='+'){
            cout<<"\nSe puede mover a la izquierda\n";
          return 1;
          }
         }
         }
         //Movimiento vertical
         else{
        if (origenColumna == destinoColumna){
          //movimiento hacia abajo
          if ((origenFila < destinoFila) && (tab[origenFila][origenColumna-1]!='+')){
            cout<<"\nSe puede mover hacia abajo\n";
          return 1;
          }else{
            //movimiento hacia arriba
           if(tab[origenFila-2][origenColumna-1]!='+'){
             cout<<"\nSe puede mover hacia arriba\n";
           return 1;
           }
          }
        }
         }
      
   }else{
     return 0;
   }
   }else{
     return 0;
   }
   }else{
    return 0;
    }
    return 000;
  }
  

void mover(int origenFila, int origenColumna, int destinoFila, int destinoColumna, tablero tab){
  
  tab[origenFila - 1][origenColumna - 1] = '+';
  tab[destinoFila - 1][destinoColumna - 1] = 'O';
//Movimiento horizontal
   if (origenFila == destinoFila){
    if (origenColumna < destinoColumna ){
      //movimiento derecha
      tab[origenFila - 1][origenColumna] = '+';
    }
    //movimiento izquierda
    else{
      tab[origenFila - 1][origenColumna - 2] = '+';
      }
    }
    //Movimiento vertical
  else{
    if (origenColumna == destinoColumna){
      //movimiento hacia abajo
      if (origenFila < destinoFila){
        tab[origenFila][origenColumna - 1] = '+';
      }
      //movimiento hacia arriba
      else{
        tab[origenFila - 2][origenColumna - 1] = '+';
        }
      }
    }
  }


void perdiste(tablero tab,int fila,int columna){
  int cuentaFichas=0;
  for (int f = 0; f < fila; f++){
		for (int c = 0; c < columna; c++){
     if(tab[f][c]=='O' & cuentaFichas==1){
       if(tab[f-1][c]=='O'|| tab[f+1][c]=='O'|| tab[f][c-1] =='O' || tab[f][c+1]=='O'){
         break;
         }
         else{
           cuentaFichas++;
         }
        } if (cuentaFichas>1){
          cout<<"Perdiste";
          break;
         }
       }  
    }
}

void final_juego(tablero tab,int fila,int columna){
	int contador = 0;

	for (int f = 0; f < fila; f++){
		for (int c = 0; c < columna; c++){
			if(tab[f][c] == 'O'){
				contador++;
			}
		}
	}
	if (contador == 1){
		cout<<"Ganaste!!!!! :) :) :) ";
	}else{
    if(contador>1){
     perdiste(tab,fila,columna);
    }
  }
}

void inicializarTablero_aleman(tablero tab,int fila, int columna){
  
  for (int f = 0; f < fila; f++){
    for (int c = 0; c < columna; c++){
      if (f == 4 && c == 4){
        tab[f][c] = '+';
      }else{
        if( (f < 3 || f > 5)&&(c < 3 || c > 5) ){
          tab[f][c] = ' ' ;
        }else{
          tab[f][c] = 'O';
        }
      }
    }
  }
}

void inicializarTablero_asimetrico(tablero tab, int fila, int columna){

  for (int f = 0; f < fila; f++){
    for (int c = 0; c < columna; c++){
      if (f == 4 && c == 3){
        tab[f][c] = '+';
      }else{
        if( (f < 3 || f > 5)&&(c < 2 || c > 4) ){
          tab[f][c] = ' ' ;
        }else{
          tab[f][c] = 'O';
        }
      }
    }
  }
}
