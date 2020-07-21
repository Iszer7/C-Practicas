//1. Realice un programa que solicite de la entrada estandar un entero del 1 al 10 y muestre en la salida estandar su tabla de multiplicar

#include<iostream>
#include<stdlib.h>					// Para usar el system("pause");

using namespace std;

int main(){
	int numero;
	
	do{
		cout<<"Digite un numero entre 1-10: ";		cin>>numero; 
	}while( (numero<1)||(numero>10));			// Si es menor a 1, o mayor a 10 se sigue ejecutando
	
	for(int i = 1;i<=20;i++){	// Tabla de multiplicar hasta 20
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;				// Lo escribiria asi "numero * i =". Ej: "5 * 1 = "
	}
	
	cout<<"\n\n";
	system("pause");
	return 0;
}
