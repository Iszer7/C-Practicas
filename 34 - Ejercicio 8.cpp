// 8. Hacer un programa que lea 5 numeros en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int numeros2[5];
	
	//Guarda los elementos del arreglo 1, en el arreglo 2. Despues multiplica por 2 el arreglo 2.
	for(int i=0;i<5;i++){
		numeros2[i] = numeros[i];
		numeros2[i] *= 2;
	}
	
	//Muestra los elementos del arreglo multiplicado por 2 (en otro arreglo)
	for(int i=0;i<5;i++){
		cout<<numeros2[i]<<" ";
	}
	
	cout<<endl;
	
	//Muestra los elementos del arreglo original
	for(int i=0;i<5;i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<endl<<endl;
	
	system("pause");
	return 0;
}
