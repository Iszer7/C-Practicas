//Realice un programa que pida al usuario el nombre de un fichero de texto, y a continuacion permita almacenar al usuario tantas frases como el usuario desee

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include <stdio.h>

using namespace std;

//Variable global

//Prototipo de funcion
void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

//Definicion de funcion

void escribir(){
	ofstream archivo;
	string nombreArchivo, frases;
	char salir;
	
	cout<<"Digite nombre del archivo: ";			getline(cin,nombreArchivo);
	fflush(stdin);
	archivo.open(nombreArchivo.c_str(),ios::out);
	
	while(salir != 's' && salir != 'S'){
		cout<<"Desea salir?(s/n): ";				cin>>salir;
		if(salir == 'n' || salir == 'Nl'){
			fflush(stdin);
			cout<<"Escriba una frase: ";			getline(cin,frases);
			archivo<<frases<<endl;
		}
	}
	archivo.close();
}
