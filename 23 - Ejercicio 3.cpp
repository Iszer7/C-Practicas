//3. Realice un programa que calcule y muestre en la salida estandar la suma de los cuadrados de los 10 primeros enteros mayores que cero

#include<iostream>
#include<conio.h>			//para getch();

using namespace std;

int main(){
	int suma = 0, cuadrado;
	
	for(int i = 1;i<=10;i++){
		cuadrado = i * i;					// lo que hace es poner los cuadrados "1*1","2*2",etc.
		suma = suma + cuadrado;				//se puede acortar poniendo "suma += cuadrado" (suma todos los cuadrados hasta 10).
	}
	
	cout<<"El resultado de la suma de todos los cuadrados hasta 10 es: "<<suma<<endl;
	getch();
	return 0;
}
