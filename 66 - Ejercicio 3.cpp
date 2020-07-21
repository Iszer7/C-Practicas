//3. Escriba una funcion nombrada funpot() que eleve un numero entero que se le trasmita a una potencia en un numero entero positivo y despliegue el resultado. El numero entero positivo debera ser el segundo valor trasmitido a la funcion

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipos de funciones

void pedirDatos();		//La funcion void no retorna nada
void funpot(int x, int y);

int numero, exponente;

int main(){
	
	pedirDatos();
	
	funpot(numero,exponente);
	
	system("pause");
	return 0;
}

//Definicion de las funciones
void pedirDatos(){
	cout<<"Digite un numero: ";			cin>>numero;
	cout<<"Digite exponente: ";			cin>>exponente;
}

void funpot(int x, int y){
	long resultado = 1;			//long es para numeros extensos
	
	for(int i=1;i<=y;i++){
		resultado *= x;
	}
	
	cout<<"El resultado es: "<<resultado<<endl;
}
