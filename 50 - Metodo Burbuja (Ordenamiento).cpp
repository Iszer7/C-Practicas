//Metodo burbuja	-	Ordenamiento

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {4,1,2,3,5,8,9,-2,7,5,0,5};
	int i,j,aux;
	
	//Algoritmo metodo burbuja	- 1° Bucle, cuantas veces recorre el vector. 2°Bucle, recorre la lista y ordena.
	for(i=0;i<12;i++){						// Cuantas veces recorre el vector
		for(j=0;j<12;j++){					// Recorre, compara y ordena la lista
			if(numeros[j]>=numeros[j+1]){	// Si el numero actual es > numero siguiente
				aux = numeros[j];			// Aca intercambia el actual por el siguiente
				numeros[j] = numeros[j+1];
				numeros[j+1] = aux; 	
			}
		}
	}
	
	cout<<"Orden ascendente: ";
	for(i=0;i<12;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"\nOrden descendente: ";
	for(i=11;i>=0;i--){
		cout<<numeros[i]<<" ";
	}
	
	getch();
	return 0;
}
