//Punteros a estructuras

#include<iostream>
#include<conio.h>

using namespace std;

//Variable global
struct Persona{
	char nombre[30];
	int edad;
}persona, *puntero_persona = &persona;

//Prototipo de funcion
void pedirDatos();
void mostrarDatos(Persona *);

int main(){
	pedirDatos();
	mostrarDatos(puntero_persona);

	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	cout<<"Digite el nombre del usuario: ";				cin.getline(puntero_persona->nombre,30,'\n');		//Guarda datos de una variable puntero
	cout<<"Digite su edad: ";							cin>>puntero_persona->edad;
}

void mostrarDatos(Persona *puntero_persona){
	cout<<"\n***Mostrando datos***"<<endl;
	cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
	cout<<"\nSu edad es: "<<puntero_persona->edad<<endl;
}
