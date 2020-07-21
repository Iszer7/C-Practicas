//2. Crear una lista que alamacene "n" numeros reales y calcular su suma y promedio de estos

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//Variable global

struct Nodo{
	float dato;
	Nodo *siguiente;
};

//Prototipo de funcion
void insertarLista(Nodo *&,float);
void calcularSumaPromedio(Nodo *);

int main(){
	Nodo *lista = NULL;
	float dato;
	char respuesta;
	
	do{
		cout<<"\nDigite un numero: ";					cin>>dato;
		insertarLista(lista,dato);
		
		cout<<"Desea agregar otro nodo?(S/N): ";		cin>>respuesta;
	}while(respuesta == 's' || respuesta == 'S');
	
	calcularSumaPromedio(lista);
	
	getch();
	return 0;
}

//Definicion de funcion

void insertarLista(Nodo *&lista, float n){
	Nodo *nuevo_nodo = new Nodo();
	Nodo *aux;
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(lista == NULL){
		lista = nuevo_nodo;
	}else{
		aux = lista;
		while(aux->siguiente != NULL){
			aux = aux->siguiente;
		}
		aux->siguiente = nuevo_nodo;
	}
	cout<<"Elemento "<<n<<" agregado correctamente"<<endl;
}

void calcularSumaPromedio(Nodo *lista){
	float suma = 0, promedio = 0;
	int contador = 0;
	
	while(lista != NULL){
		suma += lista->dato;
		contador++;
		lista = lista->siguiente;
	}
	promedio = suma / contador;
	
	cout<<"\nCantidad de numeros almacenados es "<<contador<<endl;
	cout<<"La suma total es: "<<suma<<endl;
	cout<<"El promedio total es: "<<promedio<<endl;
}

