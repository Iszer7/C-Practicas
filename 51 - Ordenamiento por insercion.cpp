//Ordenamiento por Insercion			->	numero Izq > Numero Actual = Cambio

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,2,3,1,5};
	int i,pos,aux;
	
	//Algoritmo del ordenamiento por insercion
	for(i=0;i<5;i++){
		pos = i;											// 0 = 0;	||	1 = 1
		aux = numeros[i];									// 4 = 4;	||	2 = 2
		while((pos>0) && (numeros[pos -1] > aux)){			// (1>0 & 4>2) -> cambio
			numeros[pos] = numeros[pos-1];					// 2 = 4
			pos--;
		}
		numeros[pos] = aux;
	}
	
	cout<<"Orden Ascendente: ";
	for(i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden Descendente: ";
	for(i=4;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
