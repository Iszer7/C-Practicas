/*1. Hacer un programa utilizando colas que contenga el siguiente menu.
	1. Insertar un caracter a una cola
	2. Mostrar todos los elementos de la cola
	3. Salir
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Variable global

struct Nodo{
	char dato;
	Nodo *siguiente;
};

//Prototipo de funcion
void menu();
void insertarCaracter(Nodo *&, Nodo *&, char);
bool colaVacia(Nodo *);
void mostrarCola(Nodo *&, Nodo *&, char &);

int main(){
	
	menu();
	
	system("pause");
	return 0; 
}

//Definicion de funcion

void menu(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	
	int opt;
	char dato;
	
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un caracter a una cola"<<endl;
		cout<<"2. Mostrar todos los elementos de la cola"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";		cin>>opt;
		
		switch(opt){
			case 1: cout<<"\nIngrese el caracter para agregar a la cola: ";				cin>>dato;
					insertarCaracter(frente,fin,dato);
					break;
					
			case 2: cout<<"\nMostrando los elementos de la cola:"<<endl;
					mostrarCola(frente,fin,dato);
					cout<<endl;
					system("pause");
					break;
					
			case 3: break;
		}
		system("cls");
	}while(opt != 3);
}

void insertarCaracter(Nodo *&frente, Nodo *&fin, char n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	} else {
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}

bool colaVacia(Nodo *frente){
	return (frente == NULL)? true:false;
}

void mostrarCola(Nodo *&frente, Nodo *&fin, char &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	while(aux != NULL){
		if(aux != fin){
			cout<<aux->dato<<" , ";
		}else{
			cout<<aux->dato<<".";
		}
		aux=aux->siguiente;
	}
}
