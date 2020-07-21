//13. Realizar una funcion que tome como parametros un vector de numeros y su tamaño y cambie el signo de los elementos del vector

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
void cambiarSigno(int vec[],int);
void mostrarVector(int vec[],int);

int vec[100],tam; 

int main(){
	
	pedirDatos();
	cambiarSigno(vec,tam);
	mostrarVector(vec,tam);
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	
	cout<<"Digite el tamaño del vector: ";			cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";			cin>>vec[i];
	}
}

void cambiarSigno(int vec[], int tam){
	for(int i=0;i<tam;i++){
		vec[i] *= -1;
	}
}

void mostrarVector(int vec[], int tam){
	cout<<"\nMostrando los elementos del vector con signo cambiado"<<endl;
	for(int i=0;i<tam;i++){
		cout<<vec[i]<<" ";
	}
}
