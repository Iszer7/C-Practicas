// 3. Escribe un programa que lea de la entrada estandar un vector de numeros y muestre en la salida estandar los numeros del vector con sus indices asociados

#include<iostream>
#include<conio.h>		//getch();

using namespace std;

int main(){
	int numeros[100], n;			//Dentro de [] va la cantidad de elementos que puede pedir como max el usuario
	
	cout<<"Digite el numero que va a tener el vector: ";		cin>>n;
	
	for(int i=0;i<n;i++){	
		cout<<"Digite un numero: ";		cin>>numeros[i];		//Guarda todos los elementos del vector
	}
	
	// Ahora, vamos a mostrar los elementos con sus indices asociados
	
	for(int i=0;i<n;i++){					// Imprime los numeros con su respectivo subindice
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
