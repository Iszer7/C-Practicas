/*14.
 En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el numero de:

a) Alumnos que aprobaron todos los examenes.
b) Alumnos que aprobaron al menos 1 examen.
c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita la lectura de los datos y el calculo de las estadisticas. 

*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int alumno = 5, exam1, exam2, exam3, ExamenesAprobados = 0, Solo1Examen = 0, UltimoExamen = 0;

			
			for(int i=1;i<=alumno;i++){
				do{
					cout<<"Ingrese la nota 1 del alumno: "<<i<<" : ";		cin>>exam1;
				}while( (exam1 < 0 || exam1 > 10) );
				
				do{
					cout<<"Ingrese la nota 2 del alumno: "<<i<<" : ";		cin>>exam2;
				}while( (exam2 < 0 || exam2 > 10) );
				
				do{
					cout<<"Ingrese la nota 3 del alumno: "<<i<<" : ";		cin>>exam3;
				}while( (exam3 < 0 || exam3 > 10) );
 				
  			 	cout<<endl;
				
				if( (exam1>=7) && (exam2>=7) && (exam3>=7) ){					//a)
					ExamenesAprobados++;
				}
				
				if( (exam1>=7) || (exam2>=7) || (exam3>=7) ){					//b)
					Solo1Examen++;
				}
				
				if( (exam1<7) && (exam2<7) && (exam3>=7) ){					//c)
					UltimoExamen++;
				}
			}
			
		cout<<"\n\nCantidad de alumnos que aprobaron todos los examenes: "<<ExamenesAprobados;
		cout<<"\n\nCantidad de alumnos que aprobaron 1 solo examen: "<<Solo1Examen;
		cout<<"\n\nCantidad de alumnos que aprobaron el ultimo examen: "<<UltimoExamen;
		
	getch();
	return 0;
}

