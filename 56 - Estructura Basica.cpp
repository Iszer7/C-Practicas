//Estructura basica en C++

#include<iostream>
#include<conio.h>

using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona;


int main(){

	cout<<"Digite un nombre: ";		cin.getline(persona.nombre,20,'\n');
	cout<<"Digite la edad: ";		cin>>persona.edad;
	
	//Muestra nombre y edad
	cout<<"\nNombre: "<<persona.nombre;
	cout<<"\nEdad: "<<persona.edad;
	
	getch();
	return 0;
}
