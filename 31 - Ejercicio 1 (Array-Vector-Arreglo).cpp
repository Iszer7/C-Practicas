//1. Escribe un programa que defina un vector de numeros y calcule la suma de sus elementos

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero[5] = {1,2,3,4,5};		// No es necesario que tenga algo en el [], porque ya lo estas definiendo en {}
	int suma = 0;
	
	for(int i=0;i<5;i++){				// No se pone igual a 5 porque empieza en 0 (el 0 cuenta y llega hasta 4, lo cual son 5 elementos) (inicia su conteo desde 0)
		suma = suma + numero[i];		// El i lo que hace es ir cambiando el valor, por lo tanto toma el valor del indice del vector (suma += numero[i];)
	}
	
	cout<<"La suma de los elementos del vector es: "<<suma<<endl;
	
	getch();
	return 0;
}
