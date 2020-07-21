//2. Escribe un programa que defina un vector de numeros y calcule la multiplicacion acumulada de sus elementos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[5] = {1,2,3,4,5};			// Puede ir [], total ya esta definido en {}
	int multiplicacion = 1;
	
	for(int i=0;i<5;i++){
		multiplicacion = multiplicacion * numero[i];
	}
	
	cout<<"La multiplicacion de los elementos del vector es: "<<multiplicacion<<endl;
	
	getch();
	return 0;
}
