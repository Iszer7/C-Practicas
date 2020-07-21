//1. Hacer un programa para agregar numeros enteros a una pila, hasta que el usuario lo decida, despues mostrar todos los numeros introducidos en la pila

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
void agregarNodo(Nodo *&, int);
void sacarNodo(Nodo *&, int &);

int main(){
	Nodo *pila = NULL;
	int dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero: ";										cin>>dato;
		agregarNodo(pila,dato);
		
		cout<<"\nDeseas agregar otro elemento a PILA? S/N:\t"; 			cin>>respuesta;
		
	}while((respuesta=='S') || (respuesta=='s'));
	
	cout<<"\nSacando todos los elementos de pila: "<<endl;
	
	while(pila != NULL){
		sacarNodo(pila,dato);
		if(pila != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

//Definicion de funcion

void agregarNodo(Nodo *&pila, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\t\tElemento: "<<n<<" ha sido agregado a PILA correctamente";
}

void sacarNodo(Nodo *&pila, int &n){
	Nodo *aux = pila;
	n = aux->dato;
	pila = aux->siguiente;
	delete aux;
}
