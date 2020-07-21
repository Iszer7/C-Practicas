//6. Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el caracter es una vocal minuscula, es una vocal mayuscula o no es una vocal.

#include<iostream>

using namespace std;

int main(){
	char letra;
	
	cout<<"Digite una letra: ";		cin>>letra;
	
	switch(letra){
		case 'a': 
		case 'e': 
		case 'i': 
		case 'o': 
		case 'u': cout<<"La vocal es minuscula"; break;			//Verifica todas las anteriores si es minuscula y si lo es termina el programa
		case 'A':
		case 'E': 
		case 'I': 
		case 'O': 
		case 'U': cout<<"Es una vocal mayuscula"; break;
		default : cout<<"NO es una vocal"; break;
	}
	return 0;
}
