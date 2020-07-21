//5. Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula o no.

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite un caracter: ";		cin>>letra;
	
	switch(letra){
		case 'a': 								 					// Para los caracteres se usa ''
		case 'e':  
		case 'i': 
		case 'o': 
		case 'u': cout<<"Es una vocal minuscula"; break;			// Como no encuentra break en las anteriores no termina la secuencia, por lo tanto da como resultado vocal minuscula
		default : cout<<"NO es una vocal minuscula"; break;
	}
	
	return 0;
}
