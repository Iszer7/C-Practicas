/*21. Escriba una funcion recursiva que calcule un numero elevado a una potencia entera mayor o igual que cero: x^y.
	potencia(x,y) = x					, y=1
					x*potencia(x,y-1)	, y>1
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion

int potencia(int,int);

int main(){
	int base,exponente;
	
	//Pedir datos al usuario
	cout<<"Digite la base: ";		cin>>base;
	cout<<"Digite el exponente: ";	cin>>exponente;
	
	cout<<"\nLa potencia de "<<base<<" elevado a "<<exponente<<" es : "<<potencia(base,exponente)<<endl;
	
	getch();
	return 0;
}

//Definicion de funcion

int potencia(int x, int y){
	int pot;
	
	switch(y){
		case 0: pot = 1; break;
		case 1: pot = x; break;
		default: pot = x*potencia(x,y-1); break;
	}
	return pot;
}
