/*5. Hacer 2 estructuras una llamada promedio que tendra los siguientes campos: nota1, nota2, nota3; y otro llamada alumno que tendra los siguientes miembros: nombre, sexo, edad.
Hacer que la estructura promedio este añidada en la estructura alumno, luego pedir todos los datos del alumno, luego calcular su promedio, y por ultimo imprimir todos los datos incluido el promedio
*/

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
}alumno1;

int main(){
	float promedioalumno;
	
	cout<<"Nombre: ";			cin.getline(alumno1.nombre,20,'\n');
	fflush(stdin);
	cout<<"Sexo: ";				cin.getline(alumno1.sexo,20,'\n');
	cout<<"Edad: ";				cin>>alumno1.edad;
	
	cout<<"\n.\t\tNotas del alumno"<<endl;
	cout<<"Nota 1: ";			cin>>alumno1.prom.nota1;
	cout<<"Nota 2: ";			cin>>alumno1.prom.nota2;
	cout<<"Nota 3: ";			cin>>alumno1.prom.nota3;
	
	promedioalumno = (alumno1.prom.nota1 + alumno1.prom.nota2 + alumno1.prom.nota3) / 3;
	
	cout<<"\n.\t\tImpresion de los datos del alumno"<<endl;
	cout<<"Nombre: "<<alumno1.nombre<<endl;
	cout<<"Sexo: "<<alumno1.sexo<<endl;
	cout<<"Edad: "<<alumno1.edad<<endl;
	cout<<"El Promedio: "<<promedioalumno<<endl;
	
	getch();
	return 0;
}
