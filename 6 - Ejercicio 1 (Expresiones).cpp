//1. Escribe la siguiente expresion como expresion en C++   -> a/b + 1

#include<iostream>

using namespace std;

int main(){
	float a, b, resultado = 0;
	
	cout<<"El programa resolvera (a+b) + 1"<<endl<<endl;
	
	cout<<"Digite el valor de A:";		cin>>a;
	cout<<"\nDigite el valor de B:";	cin>>b;
	
	resultado = (a/b) + 1;
	
	cout.precision(3);								//Redondea el numero a 2 despues de la coma
	cout<<"\nEl resultado de (a/b) + 1 es: "<<resultado;
	return 0;
}
