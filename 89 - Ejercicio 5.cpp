/*5. Pedir al usuario N nnumeros, almacenarlos en un arreglo dinamico posteriormente ordenar los numeros en orden ascendente y mostrarlos en pantalla.
Nota: Utilizar cualquier metodo de ordenamiento
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>		//para new y delete

using namespace std;

//Prototipo de funciones
void pedirDatos();
void ordenarArreglo(int *, int);
void mostrarArreglo(int *, int);

//Variables globales
int nElementos, *elemento;

int main(){
	
	pedirDatos();
	ordenarArreglo(elemento,nElementos);
	mostrarArreglo(elemento,nElementos);
	
	delete[] elemento;		//Libera la memoria utilizada para el arreglo
	
	getch();
	return 0;
}

//Definicion de funciones

void pedirDatos(){
	cout<<"Digite numero de elementos del arreglo: ";			cin>>nElementos;
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero ["<<i<<"]: ";			cin>>*(elemento+i);		//Es lo mismo "elemento[i];"
	}
}

void ordenarArreglo(int *elemento, int nElementos){
	int aux;
	
	//Metodo Burbuja
	for(int i=0;i<nElementos;i++){
		for(int j=0;j<nElementos;j++){
			if(*(elemento+j) > *(elemento+j+1)){		//elemento[j] > elemento[j+1]
				aux = *(elemento+j);
				*(elemento+j) = *(elemento+j+1);
				*(elemento+j+1) = aux;
			}
		}
	}
}

void mostrarArreglo(int *elemento, int nElementos){
	cout<<"\n\nMostrando arreglo ordenado"<<endl;
	
	for(int i=0;i<nElementos;i++){
		cout<<*(elemento+i)<<" ";
	}
}
