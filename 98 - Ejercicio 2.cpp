/*2. Hacer un programa utilizando PILAS que contenga el siguiente menu:
1. Insertar un caracter a la pila
2. Mostrar todos los elementos de la pila
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

char dato;


//Prototipo de funcion
void agregarPila(Nodo *&, char);
void insertarElementos(Nodo *&, char);
void mostrarElementos(Nodo *&);

int main(){
	Nodo *pila = NULL;
	int respuesta;
	
	do{
		do{
			cout<<"\n***DIGITE UNA OPCION*** \n1. Insertar un caracter a la pila\n2. Mostrar todos los elementos de la pila\n3.Salir\t\t\tRespuesta: ";			cin>>respuesta;
		}while((respuesta != 3) && (respuesta != 2) && (respuesta != 1));
		
		switch(respuesta){
			case 1: insertarElementos(pila,dato); break;
			case 2: mostrarElementos(pila);	break;
			case 3: cout<<"\nSaliendo..."<<endl; break;
		}
	}while(respuesta != 3);
	
	getch();
	return 0;
}

//Definicion de funcion

void agregarPila(Nodo *&pila, char n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = pila;
	pila = nuevo_nodo;
	
	cout<<"\t\tElemento: "<<n<<" ha sido agregado a PILA correctamente"<<endl;
	cout<<"-----------------------------------------------------------";
}

void insertarElementos(Nodo *&pila, char n){
			cout<<"\nDigite un dato(letra): ";			cin>>dato;
			fflush(stdin);
			agregarPila(pila,dato);
}

void mostrarElementos(Nodo *&pila){
			system("cls");
			
			cout<<"\n*****Imprimiendo datos: *****"<<endl;
			
			Nodo *aux=pila;
			while(aux != NULL){
				if(aux != NULL){
					cout<<aux->dato<<" ,";
				} else {
					cout<<aux->dato<<".";
				}
				aux=aux->siguiente;
			}
			cout<<"\n*****************************"<<endl;
}



