// 1. Hacer un programa para rellenar una matriz pidiendo al usuario el numero de filas y columnas, posteriormente mostrar la matriz en pantalla.

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100][100], filas, columnas;				// numeros[fila][columna]
	
	cout<<"Digite el numero de filas: ";		cin>>filas;
	cout<<"Digite el numero de columnas: ";		cin>>columnas;
	
	//Almacenando elementos en la matriz
	for(int i=0;i<filas;i++){			// Controla las filas
		for(int j=0;j<columnas;j++){	// Controla las columnas
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
			cin>>numeros[i][j];
		}
	}
	
	//Mostrando la matriz
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<numeros[i][j];
		}
		cout<<endl;		//cada vez que se crea una nueva fila, se pone abajo
	}
	
	getch();
	return 0;
}
