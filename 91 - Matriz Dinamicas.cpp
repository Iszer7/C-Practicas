/*Matriz Dinamicas

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]
					*puntero_fila -> [int] [int] [int]
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
void mostrarMatriz(int **, int, int);

//Variable globables
int **puntero_matriz;	//Tiene el puntero normal(*puntero_matriz) y el segundo es la segunda variable puntero(**)	|| siempre que tenga ** señala a una variable matriz
int nFilas, nCol;

int main(){
	pedirDatos();
	mostrarMatriz(puntero_matriz,nFilas,nCol);
	
	//Liberar la memoria que hemos utilizado en la matriz
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];	
	}
	delete[] puntero_matriz;
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	cout<<"Digite el numero de filas: ";			cin>>nFilas;
	cout<<"Digite el numero de columnas: ";			cin>>nCol;
	
	//Reservar memoria para la matriz dinamica
	puntero_matriz = new int*[nFilas];		//Reserva memoria para las filas (necesita ser un puntero para señalar toda la fila)
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol];	//Reserva memoria para las columnas (no necesita ser puntero)
	}
	
	cout<<"\nDigitando los numeros"<<endl;
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero ["<<i<<"] ["<<j<<"]: ";				cin>>*(*(puntero_matriz+i)+j);	//puntero matriz[i][j]
		}
	}
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol){
	cout<<"\nImprimiendo matriz"<<endl;
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz+i)+j)<<" ";
		}
		cout<<endl;
	}
}
