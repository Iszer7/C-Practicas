//2. Realice un programa que lea de la entrada estandar numeros hasta que se introduzca un cero. En ese momento el programa debe terminar y mostrar en la salida estandar el numero de valores mayores a cero leidos.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, cont = 0;
	
	cout<<"\tBienvenido, el programa termina al escribir cero y la cantidad de veces que introducio un numero antes que 0"<<endl<<endl;
	
	do{
		cout<<"Digite un numero: ";		cin>>numero;
		
		if((numero<0) || (numero>0)){
			cont++;
		}
	}while((numero<0) || (numero>0));
	
	cout<<"\nLa cantidad de veces que introducio un numero antes que 0 es: "<<cont<<endl<<endl;
	
	system("pause");
	return 0;
}
