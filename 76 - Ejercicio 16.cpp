//16. Realice una funcion que dada una matriz y un numero de fila de la matriz devuelva el menor de los elementos almacenados en dicha fila.

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion

void pedirDatos();
void menorElemento(int m[][100], int nfilas, int ncol);

int m[100][100],nfilas,ncol;
 
int main(){
	
	pedirDatos();
	menorElemento(m,nfilas,ncol);
	
	system("pause");
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	cout<<"Digite numero de filas: ";							cin>>nfilas;
	cout<<"Digite numero de columnas: ";						cin>>ncol;
	
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			cout<<"Digite un numero ["<<i<<"]["<<j<<"]: ";		cin>>m[i][j];
		}
	}
}

void menorElemento(int m[][100], int nfilas, int ncol){
	int menor = 1000;
	for(int i=0;i<nfilas;i++){
		for(int j=0;j<ncol;j++){
			if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
	}
	
	cout<<"\nEl menor numero de todos los elementos es: "<<menor<<endl;
}
