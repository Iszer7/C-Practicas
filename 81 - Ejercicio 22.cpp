//22. Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida una version que escriba los numeros en orden ascendente

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion

int escribeNumeros(int,int);

int main(){
	int ini,fin;
	
	cout<<"Digite un numero inicial: ";			cin>>ini;
	cout<<"Digite un numero final: ";			cin>>fin;
	
	escribeNumeros(ini,fin);
	cout<<endl;
	
	system("pause");
	return 0;
}

//Definicion de funcion

int escribeNumeros(int ini, int fin){
	
	if(ini == fin){
		cout<<ini<<" ";
	} else {
		cout<<ini<<" ";
		ini++;
		escribeNumeros(ini,fin);
	}
}
