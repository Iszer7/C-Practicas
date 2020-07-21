/*Plantilla de funcion		-> Pone un tipo de dato general

Ejemplo: Sacar el valor absoluto de un numero
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
template <class TIPOD>			//TIPOD engloba diferentes tipos de datos (float, int, etc)
void mostrarAbs(TIPOD numero);


int main(){
	int num1 = 4;
	float num2 = -56.57;
	double num3 = 123.56346;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	if(numero < 0){
		numero = numero * -1;
	}
	
	cout<<"El valor absoluto del numero es: "<<numero<<endl;
}
