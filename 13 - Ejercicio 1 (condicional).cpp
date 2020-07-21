/*1. Escriba en un programa que lea dos numeros y determine cual de ellos es el mayor */

#include<iostream>

using namespace std;

int main(){
	int n1, n2;
	
	cout<<"Digite dos numeros: ";		cin>>n1>>n2;			// Guarda un numero en n1 y otro en n2
	
	if (n1==n2){	// Este if verifica la igualdad
		cout<<"\nAmbos numeros son iguales";
	}else {
		if (n1 > n2){	// Si no son iguales verifica quien es mayor
			cout<<"\nEl numero mayor es:"<<n1;
		}else{
			cout<<"\nEl numero mayor es: "<<n2;
		}
	}

	return 0;
}
