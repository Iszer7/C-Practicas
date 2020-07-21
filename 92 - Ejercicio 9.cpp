//9. Realice un programa que calcule la suma de dos matrices dinamicas

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
void sumarMatrices(int **, int **, int, int);
void mostrarMatrizResultado(int **, int, int);

//Variable globales
int **puntero_matriz1, **puntero_matriz2;
int nFilas,nCol;

int main(){
	pedirDatos();
	sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol);
	mostrarMatrizResultado(puntero_matriz1,nFilas,nCol);
	
	//Liberando memoria
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz2[i];
	}
	delete[] puntero_matriz2;
	
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz1[i];
	}
	delete[] puntero_matriz1;
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	cout<<"Digite cantidad de filas: ";				cin>>nFilas;
	cout<<"Digite cantidad de columnas: ";			cin>>nCol;
	
	//Reservando memoria para la primera matriz
	puntero_matriz1 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz1[i] = new int[nCol];
	}
	
	cout<<"\nDigite los elementos de la primera matriz"<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero ["<<i<<"] ["<<j<<"]: ";			cin>>*(*(puntero_matriz1+i)+j);
		}
	}
	
	//Reservar memoria para la segunda matriz
	puntero_matriz2 = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz2[i] = new int[nCol];
	}
	
	cout<<"\nDigite los elementos de la segunda matriz"<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero ["<<i<<"] ["<<j<<"]: ";			cin>>*(*(puntero_matriz2+i)+j); 
		}
	}
}

void sumarMatrices(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCol){
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			*(*(puntero_matriz1+i)+j) = *(*(puntero_matriz1+i)+j) + *(*(puntero_matriz2+i)+j);
		}
	}
}

void mostrarMatrizResultado(int **puntero_matriz1, int nFilas, int nCol){
	cout<<"\nLa suma de las 2 matrices es: "<<endl;
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<*(*(puntero_matriz1+i)+j)<<" ";
		}
		cout<<endl;
	}
}
