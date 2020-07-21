//Busqueda Binaria		->	Tiene que ordenar ascendentemente el arreglo antes de buscar

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int inf,sup,mitad,dato,i;
	char band = 'F';
	
	cout<<"Digite un numero: ";		cin>>dato;

	/*-------------------------------------------------------------------------------*/	
	//Algoritmo de la busqueda binaria
	
	inf = 0;
	sup = 5;	//cant de numeros del arreglo
	i = 0;		//contador
	
	while((inf!=sup) && (i < 5)){
		mitad = (inf+sup)/2;
		
		if(numeros[mitad] == dato){
			band = 'V';
			break;	//para que corte con el while
		}
		if(numeros[mitad] > dato){
			sup = mitad;
		}
		if(numeros[mitad] < dato){
			inf = mitad;
		}
		i++;
	}
	
	/*-------------------------------------------------------------------------------*/
	if(band == 'V'){
		cout<<"El numero ha sido encontrado en la posicion: "<<numeros[mitad]<<endl;
	} else {
		cout<<"El numero NO ha sido encontrado"<<endl;
	}
	
	system("pause");
	return 0;
}
