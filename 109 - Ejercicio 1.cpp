/*1. Crear una lista que almacene "n" numeros enteros y calcule el menor y mayor de ellos*/

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//Variable global

struct Nodo{
	int dato;
	Nodo *siguiente;
};

//Prototipo de funcion
void insertarLista(Nodo *&,int);		//pasar como referencia(&) -> significa que va a cambiar su valor o agregar uno nuevo
void mostrarLista(Nodo *);
void calcularMayorMenor(Nodo *);		//puntero(*) solo se pasa eso

int main(){
	Nodo *lista = NULL;
	int dato;
	char respuesta;
	
	do{
		cout<<"Digite un numero: ";			cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"Desea agregar otro nodo?(S/N): ";			cin>>respuesta;
	}while(respuesta == 's' || respuesta == 'S');
	
	cout<<"\nLos elementos de la lista son: "<<endl;
	mostrarLista(lista);
	
	calcularMayorMenor(lista);
	
	getch();
	return 0;
}

//Definicion de funcion

void insertarLista(Nodo *&lista, int n){ //Agrega elementos al final de la lista
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){
		lista = nuevo_nodo;	//agrega nuevo nodo a la lista
	}else{
		aux = lista; //apunta al inicio de la lista
		while(aux->siguiente != NULL){ //recorre la lista
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo; //agrego nuevo nodo a la lista
	}
	cout<<"Elemento: "<<n<<" agregado a lista correctamente"<<endl;
}

void mostrarLista(Nodo *lista){ //muestra todos los elementos de la lista
	while(lista != NULL){
		if(lista->siguiente != NULL){
			cout<<lista->dato<<"->";	
		}else{
			cout<<lista->dato<<".";
		}
		lista = lista->siguiente;
	}
	cout<<endl<<endl;
}

void calcularMayorMenor(Nodo *lista){ //calcula el menor y mayor
	int mayor=0, menor=99999;
	
	while(lista != NULL){
		if((lista->dato) > mayor){
			mayor = lista->dato;
		}
		if((lista->dato) < menor){
			menor = lista->dato;
		}
		lista = lista->siguiente; //avanzamos una posicion en lista
	}
	
	cout<<"El mayor elemento es: "<<mayor<<endl;
	cout<<"El menor elemento es: "<<menor<<endl;
}
