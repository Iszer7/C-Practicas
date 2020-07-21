//6. Escriba un programa que lea la nota final de cuatro alumnos y calcule la nota final media de los cuatro alumnos

#include<iostream>

using namespace std;

int main(){
	int nota1, nota2, nota3, nota4, NotaFinal = 0;
	
	cout<<"Digite la nota del alumno 1: ";			cin>>nota1;
	cout<<"\nDigite la nota del alumno 2: ";		cin>>nota2;
	cout<<"\nDigite la nota del alumno 3: ";		cin>>nota3;
	cout<<"\nDigite la nota del alumno 4: ";		cin>>nota4;
	
	
	NotaFinal = (nota1 + nota2 + nota3 + nota4)/4;
	
	cout<<"\nLa nota final media de los cuatro alumnos es: "<<NotaFinal;
	return 0;
}
