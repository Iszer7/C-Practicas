//7. Escriba un programa que solicite una edad (un entero) e indique en la salida estandar si la edad introducida esta en el rango de [18-25].

#include<iostream>

using namespace std;

int main(){
	int edad;
	
	cout<<"Ingrese una edad: ";		cin>>edad;
	
	if((edad >= 18) && (edad <= 25)){
		cout<<"\nLa edad introducida esta en el rango de 18-25";
	}
	else {
		cout<<"\nLa  edad no se encuentra en el rango de 18-25";
	}
	
	return 0;
}
