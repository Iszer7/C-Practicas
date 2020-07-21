//4. Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], *dir_numeros, cant_elementos, menor=9999, menorPos;
	
	cout<<"Digite cantidad de elementos: ";			cin>>cant_elementos;
	
	for(int i=0;i<cant_elementos;i++){
		cout<<"Digite un numero: ";					cin>>numeros[i];
	}
	
	dir_numeros = numeros;
	
	for(int i=0;i<cant_elementos;i++){
		if(*dir_numeros < menor){
			menor = *dir_numeros;		//toma el numero y la direccion de memoria
		}
		dir_numeros++;
	}
	
	
	cout<<"\nEl menor numero dentro del array es: "<<menor<<endl;
	cout<<"Posicion: "<<&menor<<endl;
	
	getch();
	return 0;
}
