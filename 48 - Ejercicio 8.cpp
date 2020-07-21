//8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y el otro real, convertirlos a sus respectivos valores y por ultimo sumarlos.

#include<iostream>
#include<stdlib.h>
#include<ctype.h>

using namespace std;

int main(){
	char cadnumero[30], cadreal[30];
	int numero;
	float numeroreal, suma = 0;
	
	cout<<"Digite un numero: ";			cin.getline(cadnumero,30,'\n');
	cout<<"Digite un numero real: ";	cin.getline(cadreal,30,'\n');
	
	//convierte la cadena en numeros
	numero = atoi(cadnumero);
	numeroreal = atof(cadreal);
	
	//suma ambos numeros
	suma = numero + numeroreal;
	
	cout<<"La suma es: "<<suma<<endl<<endl;
	
	system("pause");
	return 0;
}
