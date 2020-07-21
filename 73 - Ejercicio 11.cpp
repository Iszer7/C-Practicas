//11. Realice una funcion que tome como parametros un vector de numeros enteros y devuelva la suma de sus elementos

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion

void pedirDatos();
int calcularSuma(int vec[], int);

int vec[100],tam;

int main(){
	
	pedirDatos();
	
	cout<<"\nLa suma de los elementos del vector es: "<<calcularSuma(vec,tam)<<endl;
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	cout<<"Digite el numero de elementos del vector; ";		cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";			cin>>vec[i];
	}
}

int calcularSuma(int vec[], int tam){
	int suma = 0;
	
	for(int i=0;i<tam;i++){
		suma += vec[i];
	}
	
	return suma;
}
