//4. Escriba un programa que devuelva la parte fraccionaria de cualquier numero introducido por el usuario. Por ejemplo, si se introduce el numero 256.879, deberia desplegarse el numero 0.879

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funciones

void pedirDatos();
void fraccion(double numero);

double numero;

int main(){
	
	pedirDatos();
	
	fraccion(numero);
	
	getch();
	return 0;
}

//Definicion de funciones

void pedirDatos(){
	cout<<"Digite un numero: ";			cin>>numero;
}

void fraccion(double numero){
	int numero_no_decimal = numero;
	double resultado = numero - numero_no_decimal;
		
	cout<<"El resultado decimal es: "<<resultado<<endl;;
}
