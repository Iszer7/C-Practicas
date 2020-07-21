/*10. Realice un programa que lea una matriz dinamica de NxM y cree su matriz traspuesta
Nota: La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
void mostrarTraspuesta(int **, int, int);

//Variable global
int **puntero_matriz, nFilas, nCol;

int main(){
	pedirDatos();
	mostrarTraspuesta(puntero_matriz,nFilas,nCol);
	
	//Liberando memoria
	for(int i=0;i<nFilas;i++){
		delete[] puntero_matriz[i];
	}
	delete[] puntero_matriz;
	
	system("pause");
	return 0;
}

//Definicion de matriz

void pedirDatos(){
	cout<<"Digite numero de filas: ";			cin>>nFilas;
	cout<<"Digite numero de columnas: ";		cin>>nCol;
	
	puntero_matriz = new int*[nFilas];
	for(int i=0;i<nFilas;i++){
		puntero_matriz[i] = new int[nCol];
	}
	
	cout<<endl;
	
	for(int i=0;i<nFilas;i++){
		for(int j=0;j<nCol;j++){
			cout<<"Digite un numero ["<<i<<"] ["<<j<<"]: ";			cin>>*(*(puntero_matriz+i)+j);
		}
	}
}

void mostrarTraspuesta(int **puntero_matriz, int nFilas, int nCol){
	cout<<"\nMostrando traspuesta"<<endl;
	
	for(int i=0;i<nCol;++i){						//Cambio la columna por la fila
		for(int j=0;j<nFilas;j++){
			cout<<*(*(puntero_matriz+j)+i)<<" ";	//Pongo "j+i" (inverso a lo pedido) es como poner [j][i]
		}
		cout<<endl;
	}
}
