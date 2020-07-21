//Transformar una cadena a numeros - funcion atoi() y atof()
//"123"	-> 123 (al principio es una cadena de caracteres)
//ATOI para valor entero, ATOF para valor flotante

#include<iostream>
#include<conio.h>
#include<stdlib.h>			//funciona atoi/atof

using namespace std;

int main(){
	char cad[] = "123";
	int numero;
	char cad2[] = "124.546546";
	float numero2;
	
	numero = atoi(cad);
	numero2 = atof(cad2);
	
	cout<<numero<<endl;
	cout<<numero2<<endl;
	
	getch();
	return 0;
}
