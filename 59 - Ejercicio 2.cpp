//2. Hacer una estructura llamada alumno, en la cual se tendra los siguientes campos: nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cual de los 3 tiene el mejor promedio y posteriormente imprimir los datos.

#include<iostream>
#include<stdlib.h>

using namespace std;

struct alumno{
	char nombre[20];
	int edad;
	float promedio; 
}alumnos[3];

int main(){
	float mejorpromedio = 0;
	int mejorpromediocontador = 0;
	
	for(int i=0;i<3;i++){
		fflush(stdin);
		cout<<"Nombre: ";		cin.getline(alumnos[i].nombre,20,'\n');
		cout<<"Edad: ";			cin>>alumnos[i].edad;
		cout<<"Promedio: ";		cin>>alumnos[i].promedio;
		cout<<endl;
		
		if(alumnos[i].promedio>mejorpromedio){
			mejorpromedio=alumnos[i].promedio;
			mejorpromediocontador=i;
		}
	}
	
	cout<<"\n\t\tDatos del mejor promedio"<<endl;
	
	cout<<"Nombre: "<<alumnos[mejorpromediocontador].nombre<<endl;
	cout<<"Edad: "<<alumnos[mejorpromediocontador].edad<<endl;
	cout<<"Promedio: "<<alumnos[mejorpromediocontador].promedio<<endl;
	
	system("pause");
	return 0;
}
