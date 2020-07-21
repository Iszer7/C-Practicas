// 1. Hacer un programa que pida al usuario que digite una cadena de caracteres, luego verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, caso contrario no mostrarla.

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[30];
	int longitud=0;
	 
	cout<<"Escribe algo: ";
	cin.getline(palabra,100,'\n');
	
	longitud = strlen(palabra);
	
	if(longitud > 10){
		cout<<"\nLa cadena supera los 10 caracteres:\n"<<palabra<<endl;
	}
	
	getch();
	return 0;
}
