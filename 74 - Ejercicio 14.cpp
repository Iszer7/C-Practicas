//14. Realiza una funcion que tome como parametros un vector de enteros y su tamaño e imprima un vector con los elementos impares del vector recibido

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion

void pedirDatos();
void numImpares(int vec[],int);

int vec[100],tam;

int main(){
	
	pedirDatos();
	numImpares(vec,tam);
	
	getch();
	return 0;
}

//Definicio de funcion

void pedirDatos(){
	cout<<"Digite el tamaño del vector: ";			cin>>tam;
	
	for(int i=0;i<tam;i++){
		cout<<i+1<<". Digite un numero: ";			cin>>vec[i];
	}
}

void numImpares(int vec[], int tam){
	for(int i=0;i<tam;i++){
		if(vec[i]%2 == 1){
			cout<<vec[i]<<" ";
		}
	}
}
