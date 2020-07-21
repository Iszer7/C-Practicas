/* 3. Realice un programa que lea de la entrada estandar los siguentes datos de una persona:

	Edad: dato de tipo entero.
	Sexo; dato de tipo caracter.
	Altura en metros: dato de tipo real.
	
Tras leer los datos, el programa debe mostrarlos en la salida estandar. */

#include<iostream>

using namespace std;

int main(){
	int Edad;
	char Sexo[10];			// el [] da una cantidad de espacio para los caracteres (sino da uno solo)
	float Altura;
	
	cout<<"Escriba la edad:";		cin>>Edad;
	cout<<"\nEscriba el sexo:";		cin>>Sexo;
	cout<<"\nEscriba la altura:";	cin>>Altura;
	
	cout<<"\nEdad:"<<Edad<<endl;
	cout<<"Sexo:"<<Sexo<<endl;
	cout<<"Altura:"<<Altura;
	
	return 0;
}


/* 4. Ejercute el programa del ejercicio anterior con entradas erroneas y observe los resultados. 
Por ejemplo, introduzca un dato de tipo caracter cuando se espera un dato de tipo entero */
