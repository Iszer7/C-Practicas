/*19. Realice una funcion recursiva que sume los primeros n enteros positivos.
Nota: Para plantear la funcion recursiva tenga en cuenta que la suma puede expresarse de la siguiente recurrencia:

	suma(n) = 1				, si n=1
			  n + suma(n-1)	, si n>1
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion

int sumar(int);

int main(){
	int nElementos;
	
	do{
		cout<<"Digite el numero de elementos: ";		cin>>nElementos;
		if(nElementos <= 0){
			cout<<"-----Digite un numero mayor a 0-----"<<endl;
		}
	}while(nElementos <= 0);
	
	cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;
	
	system("pause");
	return 0;
}

//Definicion de funcion

int sumar(int n){	//Funcion recursiva
	int suma = 0;
	
	if(n == 1){	//Caso base
		suma = 1;
	} else {	//Caso general
		suma = n+sumar(n-1);
	}
	return suma;
}
