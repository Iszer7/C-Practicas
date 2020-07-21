//9. Escribe un programa que calcule el valor de: 1*2*3...*n (factorial)		"N!"	(el factorial de 0 es: 1)

#include<iostream>
#include<stdlib.h>		//system("pause");

using namespace std;

int main(){
	int numero, factorial = 1;				//siempre poner 1 a la variable iteratiba 
	
	cout<<"Digite un numero: ";		cin>>numero;
	
	for(int i=1;i<=numero;i++){				//numero = 5,
		factorial = factorial * i;			//1*1 ->1*2 -> 2*3 -> 6*4 -> 24*5 (factorial * i)		// se puede poner "factorial *= i;"
	}
	
	cout<<"\nEl factorial del numero es: "<<factorial<<endl;
	
	system("pause");
	return 0;
}

