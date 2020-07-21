/*11. Hacer una estructura llamada alumno, en la cual se tendra los siguientes campos: Nombre, edad, promedio.
Pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene mejor promedio, posteriormente imprimir los datos del alumno.
Nota: Usar punteros a estructuras*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Variable global

struct Alumno{
	char nombre[30];
	int edad;
	float promedio;
}alumno[3], *puntero_alumno = alumno;

//Prototipo de funcion
void pedirDatos();
void calcularMejorPromedio(Alumno *);

int main(){
	pedirDatos();
	calcularMejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Digite un nombre: ";			cin.getline((puntero_alumno+i)->nombre,30,'\n');
		cout<<"Digite su edad: ";			cin>>(puntero_alumno+i)->edad;
		cout<<"Digite el promedio: ";		cin>>(puntero_alumno+i)->promedio;
		cout<<endl;
	}
}

void calcularMejorPromedio(Alumno *puntero_alumno){
	float mejorPromedio = 0;
	int pos = 0;
	
	for(int i=0;i<3;i++){
		if((puntero_alumno+i)->promedio > mejorPromedio){
			mejorPromedio = (puntero_alumno+i)->promedio; //Compruebo el mayor promedio
			pos = i;
		}
	}
	
	//Imprimir los datos del mejor alumno
	cout<<"\nEl alumno con mejor promedio es: \n";
	cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
	cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
	cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}
