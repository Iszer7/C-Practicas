//8.56'¿|ibe un programa que lea de la entrada estandar tres numeros. Despues debe leer un cuarto numero e indicar si el numero coincide con algunos de los introducidos con anterioridad.

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3, n4;
	
	cout<<"Digite 3 numeros: ";		cin>>n1>>n2>>n3;
	
	cout<<"\nDigite numero a comparar con los 3 anteriores: ";		cin>>n4;
	
	if((n4==n1)||(n4==n2)||(n4==n3)){								// Tambien se puede poner "or" de en ves de "||"
		cout<<"\nEl numero coicide con uno de los anteriores";
	} else {
		cout<<"\nEl numero NO coincide con uno de los anteriores";
	}
	
	
	return 0;
}
