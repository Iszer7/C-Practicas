//Longitud de una cadena de caracteres - funcion strlen() - Cuantos elementos tiene una cadena de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>		//para caracteres

using namespace std;

int main(){
	char palabra[] = "hola que tal?";
	int longitud=0;
	
	longitud = strlen(palabra);
	
	cout<<"Numero de elementos de la cadena es: "<<longitud<<endl;
	
	getch();
	return 0;
}
