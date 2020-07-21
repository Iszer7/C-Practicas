/* 7. Desarrollar un programa que determine si una matriz es simetrica o no. Una matriz es simetrica si es cuadrada y si es igual a su matriz traspuesta.

|8 1 3|		|8 1 3|
|1 7 4|	->	|1 7 4|
|3 4 9|		|3 4 9|
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;
	char bandera = 'V';					// Inicializa la bandera en verdadero
	
	// Pide cantidad de fila y columna
	cout<<"Digite el numero de filas: ";		cin>>filas;
	cout<<"Digite el numero de columnas: ";	cin>>columnas;
	
	// Carga numeros en la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	// Valida si la matriz es cuadrada y traspuesta. Si lo es entonces es: simetrica 
	if(filas==columnas){
		for(int i=0;(i<filas) && (bandera == 'V');i++){
			for(int j=0;(j<columnas) && (bandera == 'V');j++){
				if(numeros[i][j] != numeros[j][i]){
					bandera = 'F';		// Pone la bandera en verdadero
				}
			}
		}
	} else {
		bandera = 'F';					// Pone la bandera en falso
	}
	
	// Valida si la matriz es simetrica a traves de la bandera
	if(bandera == 'F'){
		cout<<"\nLa matriz NO es simetrica";
	} else {
		cout<<"\nLa matriz es simetrica";
	}
	
	getch();	
	return 0;
}

