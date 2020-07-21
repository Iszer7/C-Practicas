//INSERTAR y ELIMINAR elementos en una cola

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
void insertarCola(Nodo *&, Nodo *&, int);
bool colaVacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, int &);

int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int dato, cant_elementos;
	
	cout<<"Digite cantidad de elementos en la cola: ";			cin>>cant_elementos;
	cout<<"********************************************"<<endl;
	
	for(int i=0;i<cant_elementos;i++){
		cout<<"Digite un numero: ";								cin>>dato;
		insertarCola(frente,fin,dato);
	}
	
	cout<<"**********************************************\nEliminando los nodos de la cola"<<endl;
	while(frente != NULL){
		suprimirCola(frente,fin,dato);
		
		if(frente != NULL){
			cout<<dato<<" , ";
		}else{
			cout<<dato<<".";
		}
	}
	
	getch();
	return 0;
}

//Definicion de funcion

void insertarCola(Nodo *&frente, Nodo *&fin, int n){
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->siguiente = NULL;
	
	if(colaVacia(frente)){
		frente = nuevo_nodo;
	}else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
	
	cout<<"\tElemento "<<n<<" insertado a cola correctamente"<<endl;
}

bool colaVacia(Nodo *frente){
	return (frente ==NULL)? true : false;
}

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n){
	n = frente->dato;
	Nodo *aux = frente;
	
	if(frente == fin){
		frente = NULL;
		fin = NULL;
	}else{
		frente = frente -> siguiente;
	}
	delete aux;
}
