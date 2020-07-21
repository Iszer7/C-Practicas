//Paso de parametros tipo matriz

//Elevar al cuadrado todos los elementos de una matriz

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion

void mostrarMatriz(int m[][3],int,int);				//Obligatorio poner el NCOL max que debe tener la matriz
void calcularCuadrado(int m[][3],int,int);
void mostrarMatrizElevada(int m[][3],int,int);

int main(){
	const int NFILAS = 2;
	const int NCOL = 3;
	int m[NFILAS][NCOL] = {{1,2,3},{4,5,6}};
	
	mostrarMatriz(m,NFILAS,NCOL);
	calcularCuadrado(m,NFILAS,NCOL);
	mostrarMatrizElevada(m,NFILAS,NCOL);
	
	getch();
	return 0;
}

//Definicion de la funcion

void mostrarMatriz(int m[][3], int NFILAS, int NCOL){
	cout<<"Mostrando matriz original:"<<endl;
	for(int i=0;i<NFILAS;i++){
		for(int j=0;j<NCOL;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}

void calcularCuadrado(int m[][3],int NFILAS, int NCOL){
	for(int i=0;i<NFILAS;i++){
		for(int j=0;j<NCOL;j++){
			m[i][j] *= m[i][j];
		}
	}
}

void mostrarMatrizElevada(int m[][3],int NFILAS,int NCOL){
	cout<<"\nMostrando matriz elevada al cuadrado:"<<endl;
	for(int i=0;i<NFILAS;i++){
		for(int j=0;j<NCOL;j++){
			cout<<m[i][j]<<" ";
		}
		cout<<endl;
	}
}
