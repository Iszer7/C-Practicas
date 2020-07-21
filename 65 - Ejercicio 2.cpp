//2. Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor que se le trasmite y despliegue el resultado. La funcion debera ser capaz de elevar al cuadrado numeros flotantes

#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

//Prototipos de funcion
void pedirDatos();
void al_cuadrado(float base);

float base;

int main(){
	
	pedirDatos();
	
	al_cuadrado(base);
	
	getch();
	return 0;
}

//Definicion de las funciones
void pedirDatos(){
	cout<<"Digite la base: ";		cin>>base;
}

void al_cuadrado(float base){
	float cuadrado = pow(base,2);
	
	cout<<"El resultado al cuadrado es: "<<cuadrado<<endl;
}
