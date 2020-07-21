//Insertar elementos en una pila

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Variable global

struct Nodo{
	int dato;
	Nodo *siguiente;
	
};

//Prototipo de funcion
void agregarPila(Nodo *&, int);

int main(){
	Nodo *pila = NULL;		//Inicializo
	int n1, n2;
	
	cout<<"Digite un numero: ";				cin>>n1;
	agregarPila(pila,n1);
	
	cout<<"Digite otro numero: ";			cin>>n2;
	agregarPila(pila,n2);
	
	getch();
	return 0;
}

//Definicion de funcion

void agregarPila(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;	
	
	cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl;
}
