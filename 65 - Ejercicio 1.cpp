//1. Escriba una funcion llamada mult() que acepte dos numeros en punto flotante como parametros, multiplique estos dos numeros y despliegue el resultado

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipos de funcion

void pedirDatos();
void mult(float x, float y);

float num1,num2;		//Variables globales que nunca se van a perder (si las pongo dentro de pedirDatos salta un error)
int main(){
	
	pedirDatos();
	
	mult(num1,num2);
	
	getch();
	return 0;
}

//Definicion de las funciones
void pedirDatos(){
	cout<<"Digite 2 numeros: ";		cin>>num1>>num2;
}

void mult(float x, float y){
	float multiplicacion = x * y;
	
	cout<<"La multiplicacion es: "<<multiplicacion<<endl;
}
