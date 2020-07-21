//6. Utiliza las 2 estructuras del problema 5, pero ahora pedir los datos para N alumnos, y calcular cual de todos tiene mejor promedio, e imprimir sus datos

#include<iostream>
#include<conio.h>

using namespace std;

struct promedio {
	float nota1;
	float nota2;
	float nota3;
};

struct alumno{
	char nombre[20];
	char sexo[20];
	int edad;
	struct promedio prom;		//poniendo "prom" es la direccion de la estructura promedio
}alumnos[100];

int main(){
	int cant_alumnos, posAlum = 0;
	float promedioalum = 0, mejorpromedio = 0;
	
	cout<<"Digite cantidad de alumnos: ";			cin>>cant_alumnos;
	
	for(int i=0;i<cant_alumnos;i++){
		cout<<endl;
		fflush(stdin);
		cout<<i+1<<".Nombre: ";				cin.getline(alumnos[i].nombre,20,'\n');
		fflush(stdin);
		cout<<i+1<<".Sexo: ";				cin.getline(alumnos[i].sexo,20,'\n');
		cout<<i+1<<".Edad: ";				cin>>alumnos[i].edad;
		
		cout<<"\n--Notas del alumno--"<<endl;
		cout<<".Nota 1: ";					cin>>alumnos[i].prom.nota1;
		cout<<".Nota 2: ";					cin>>alumnos[i].prom.nota2;
		cout<<".Nota 3: ";					cin>>alumnos[i].prom.nota3;
		cout<<"*-------------------------------------------------------*"<<endl;
		
		promedioalum = (alumnos[i].prom.nota1 + alumnos[i].prom.nota2 + alumnos[i].prom.nota3) / 3;
		
		if(promedioalum > mejorpromedio){
			mejorpromedio = promedioalum;
			posAlum = i;
		}
		
	}
	
	cout<<"\n\n.::Datos del alumno con mejor promedio::."<<endl;
	cout<<"Nombre: "<<alumnos[posAlum].nombre<<endl;
	cout<<"Sexo: "<<alumnos[posAlum].sexo<<endl;
	cout<<"Edad: "<<alumnos[posAlum].edad<<endl;
	cout<<"Promedio: "<<mejorpromedio<<endl;
	
	getch();
	return 0;
}
