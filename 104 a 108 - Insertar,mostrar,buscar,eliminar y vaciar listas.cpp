//Insertar elmenetos en una lista

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//Variable Global

struct Nodo{
	int dato;
	Nodo *siguiente;	
};

Nodo *lista = NULL;

//Prototipo de funcion
void menu();
void insertarLista(Nodo *&,int);
void mostrarLista(Nodo *);
void buscarLista(Nodo *,int);
void eliminarNodo(Nodo *&,int);
void eliminarLista(Nodo *&,int&);

int main(){
	menu();
	
	getch();
	return 0;
}

//Definicio de funcion

void menu(){
	int opt, dato;
	
	do{
		cout<<"\t\t.:MENU:."<<endl;
		cout<<"1. Insertar elementos a la lista"<<endl;
		cout<<"2. Mostrar los elementos de la lista"<<endl;
		cout<<"3. Buscar un elemento en lista"<<endl;
		cout<<"4. Eliminar un nodo de la lista"<<endl;
		cout<<"5. Dejar vacia la lista"<<endl;
		cout<<"6. Salir"<<endl;
		cout<<"Opcion: ";	cin>>opt;
		
		switch(opt){
			case 1: cout<<"Digite un numero: ";					cin>>dato;
					insertarLista(lista,dato);
					cout<<endl;
					system("pause");
					break;
			case 2: mostrarLista(lista);
					cout<<endl;
					system("pause");
					break;
			case 3: cout<<"**Digite un numero a buscar: ";		cin>>dato;
					buscarLista(lista,dato);
					cout<<endl;
					system("pause");
					break;
			case 4: cout<<"Digite el elemento a eliminar: ";	cin>>dato;
					eliminarNodo(lista,dato);
					cout<<endl;
					system("pause");
			case 5: while(lista != NULL){
						eliminarLista(lista,dato);
						cout<<dato<<" -> ";
					}
					cout<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opt != 6);
}
void insertarLista(Nodo *&lista, int n){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->dato = n;
	
	Nodo *aux1 = lista;
	Nodo *aux2;
	//Esto es para que lo ordene al principio, en medio o al final
	while((aux1 != NULL)&&(aux1->dato < n)){
		aux2 = aux1;
		aux1 = aux1->siguiente;
	}
	
	if(lista == aux1){			//Lo pone al principio de la lista
		lista = nuevo_nodo;
		nuevo_nodo->siguiente = aux1;
	}else{
		aux2->siguiente = nuevo_nodo;
	}
	
	nuevo_nodo->siguiente = aux1;
	cout<<"\tElemento "<<n<<" insertado a lista correctamente"<<endl;
}

void mostrarLista(Nodo *lista){
	Nodo *actual = new Nodo();
	actual = lista;
	
	while(actual != NULL){
		if(actual->siguiente == NULL){
			cout<<actual->dato<<".";
		}else{
			cout<<actual->dato<<" -> ";
		}
		actual = actual->siguiente;
	}
	if(lista == NULL){
		cout<<"La lista se encuentra vacia"<<endl;
	}
}

void buscarLista(Nodo *lista, int n){
	bool band = false;
	
	Nodo *actual = new Nodo();
	actual = lista;
	
	while((actual != NULL)&&(actual->dato <= n)){
		if(actual->dato == n){
			band = true;
		}
		actual = actual->siguiente;
	}
	
	if(band == true){
		cout<<"El elemento "<<n<<" ha sido encontrado en lista"<<endl;
	}else{
		cout<<"El elemento "<<n<<" NO ha sido encontrado en lista"<<endl;
	}
}

void eliminarNodo(Nodo *&lista, int n){
	if(lista != NULL){
		Nodo *aux_borrar;
		Nodo *anterior = NULL;
		
		aux_borrar = lista;
		//Recorre la lista
		while((aux_borrar != NULL)&&(aux_borrar->dato != n)){
			anterior = aux_borrar;
			aux_borrar = aux_borrar->siguiente;
		}
		
		if(aux_borrar == NULL){//Elemento no encontrado
			cout<<"El elemento no ha sido encontrado";
		}else{
			if(anterior == NULL){//Elimina el primer elemento
				lista = lista->siguiente;
				delete aux_borrar;
			}else{//El elemento esta en la lista pero no es el primer nodo
				anterior->siguiente = aux_borrar->siguiente;
				delete aux_borrar;
			}
		}
	}else{
		cout<<"No hay elementos en la lista"<<endl;
	}
}

void eliminarLista(Nodo *&lista, int &n){
	Nodo *aux = lista;
	n = aux->dato;
	lista = aux->siguiente;
	delete aux;
}
