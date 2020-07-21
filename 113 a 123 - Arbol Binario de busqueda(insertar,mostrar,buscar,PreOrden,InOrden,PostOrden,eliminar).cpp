//Insertar, mostrar, buscar, Recorrido: PreOrden, InOrden, PostOrden y Eliminar hoja, rama de un arbol

#include<iostream>
#include<stdlib.h>
#include<conio.h>

using namespace std;

//Variable global

struct Nodo{
	int dato;
	Nodo *der;
	Nodo *izq;
	Nodo *padre;	//Para saber que padre tiene cada nodo
};

Nodo *arbol = NULL;

//Prototipo de funcion
void menu();
Nodo *crearNodo(int,Nodo *);
void insertarNodo(Nodo *&,int,Nodo *);
void mostrarArbol(Nodo *,int);
bool busqueda(Nodo *,int);
void recorridoPreOrden(Nodo *);
void recorridoInOrden(Nodo *);
void recorridoPostOrden(Nodo *);
void eliminar(Nodo *,int);
void eliminarNodo(Nodo *);
Nodo *minimoIzq(Nodo *);
void reemplazar(Nodo *,Nodo *);
void destruirNodo(Nodo *);

int main(){
	menu();
	
	system("pause");
	return 0;
}

//Definicion de funcion

void menu(){
	int dato, opt, contador=0;
	do{
		cout<<"\t.:MENU:."<<endl;
		cout<<"1. Insertar un nuevo nodo"<<endl;
		cout<<"2. Mostrar Arbol"<<endl;
		cout<<"3. Buscar un elemento en el arbol"<<endl;
		cout<<"4. Recorrer el arbol en PreOrden"<<endl;
		cout<<"5. Recorrer el arbol en InOrden"<<endl;
		cout<<"6. Recorrer el arbol en PostOrden"<<endl;
		cout<<"7. Eliminar un nodo del arbol"<<endl;
		cout<<"8. Salir"<<endl;
		cout<<"Opcion: ";								cin>>opt;
		
		switch(opt){
			case 1: cout<<"\nDigite un numero: ";		cin>>dato;
					insertarNodo(arbol,dato,NULL);
					cout<<endl;
					system("pause");
					break;
			case 2: cout<<"\nMostrando el arbol completo"<<endl<<endl;
					mostrarArbol(arbol,contador);
					cout<<endl;
					system("pause");
					break;
			case 3: cout<<"\nDigite el elemento a busquedar: ";			cin>>dato;
					busqueda(arbol,dato);
					if(busqueda(arbol,dato) == true){
						cout<<"\nEl elemento "<<dato<<" se a encontrado en el arbol"<<endl;
					}else{
						cout<<"\nEl elemento "<<dato<<" NO se a encontrado en el arbol"<<endl;
					}
					cout<<endl;
					system("pause");
					break;
			case 4: cout<<"\n\tRecorrido en PreOrden: ";
					recorridoPreOrden(arbol);
					cout<<endl;
					system("pause");
					break;
			case 5: cout<<"\n\tRecorrido en InOrden: ";
					recorridoInOrden(arbol);
					cout<<endl;
					system("pause");
					break;
			case 6: cout<<"\n\tRecorrido en PostOrden: ";
					recorridoPostOrden(arbol);
					cout<<endl;
					system("pause");
					break;
			case 7: cout<<"\nDigite un numero a eliminar: ";			cin>>dato;
					eliminar(arbol,dato);
					cout<<endl;
					system("pause");
					break;
		}
		system("cls");
	}while(opt != 8);
}

Nodo *crearNodo(int n, Nodo *padre){//Funcion para crear un nuevo nodo
	Nodo *nuevo_nodo = new Nodo();
	
	nuevo_nodo->dato = n;
	nuevo_nodo->der = NULL;
	nuevo_nodo->izq = NULL;
	nuevo_nodo->padre = padre;
	
	return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n, Nodo *padre){//Insertar elementos en el arbol	
	if(arbol == NULL){
		Nodo *nuevo_nodo = crearNodo(n,padre);
		arbol = nuevo_nodo;
	}else{//Si el arbol tiene un nodo o mas de uno
		int valorRaiz = arbol->dato;
		if(n < valorRaiz){//Si el elemento es menor a la raiz, lo inserta en el lado izquierdo
			insertarNodo(arbol->izq,n,arbol);
		}else{//Si el elemento es mayor a la raiz, lo inserta en el lado derecho
			insertarNodo(arbol->der,n,arbol);
		}
	}
}

void mostrarArbol(Nodo *arbol, int cont){
	if(arbol == NULL){
		return;
	}else{
		mostrarArbol(arbol->der,cont+1);
		for(int i=0;i<cont;i++){
			cout<<"   ";
		}
		cout<<arbol->dato<<endl;
		mostrarArbol(arbol->izq,cont+1);
	}
}

bool busqueda(Nodo *arbol, int n){
	if(arbol == NULL){
		return false;
	}else if(arbol->dato == n){
		return true;
	}else if (n < arbol->dato){
		return busqueda(arbol->izq,n);
	}else{
		return busqueda(arbol->der,n);
	}
}

void recorridoPreOrden(Nodo *arbol){//Recorrido en profundida PreOrden, primero recorre el lado izquiero y luego el derecho
	if(arbol == NULL){
		return;
	}else{
		cout<<arbol->dato<<" - ";
		recorridoPreOrden(arbol->izq);//Recorre el lado izquierdo
		recorridoPreOrden(arbol->der);//Recorre el lado derecho
	}
}

void recorridoInOrden(Nodo *arbol){//Recorre todo el lado izquiero, despues raiz y luego lado derecho
	if(arbol == NULL){
		return;
	}else{
		recorridoInOrden(arbol->izq);
		cout<<arbol->dato<<" - ";
		recorridoInOrden(arbol->der);
	}
}
void recorridoPostOrden(Nodo *arbol){//Recorre el lado izquierdo, luego el derecho y por ultimo la raiz
	if(arbol == NULL){
		return;
	}else{
		recorridoPostOrden(arbol->izq);
		recorridoPostOrden(arbol->der);
		cout<<arbol->dato<<" - ";
	}
}

void eliminar(Nodo *arbol, int n){ //Busca el nodo a eliminar
	if(arbol == NULL){
		return; //No hace nada si esta vacio
			}else if(n < arbol->dato){	//Si el valor es menor busca por la izquierda
				eliminar(arbol->izq,n);
			}else if(n > arbol->dato){	//Si el valor es mayor busca por la derecha
				eliminar(arbol->der,n);
	}else{ //Si ya encontro el valor
		eliminarNodo(arbol);
	}
}

Nodo *minimoIzq(Nodo *arbol){ //Determina el nodo mas izquierdo posible
	if(arbol == NULL){
		return NULL; //No retorna nada
		}else if(arbol->izq){ //Si tiene izq
			return minimoIzq(arbol->izq);	//Buscamos la parte mas izquierda posible
	}else{
		return arbol; //Retornamos el mismo nodo si no tiene hijo izquierdo
	}
}

void reemplazar(Nodo *arbol, Nodo *nuevoNodo){
	if(arbol->padre){
		//arbol->padre hay que asignarle su nuevo hijo
		if(arbol->dato == arbol->padre->izq->dato){
			arbol->padre->izq = nuevoNodo;
		}else if(arbol->dato == arbol->padre->der->dato){
			arbol->padre->der = nuevoNodo;
		}
	}
	if(nuevoNodo){
		//Procedemos a asignarle su nuevo padre
		nuevoNodo->padre = arbol->padre;
	}
}

void eliminarNodo(Nodo *nodoEliminar){ //Elimina el nodo encontrado
	if(nodoEliminar->izq && nodoEliminar->der){ //Si el nodo tiene izq y derecho
		Nodo *menor = minimoIzq(nodoEliminar->der);
		nodoEliminar->dato = menor->dato;
		eliminarNodo(menor);
		}else if(nodoEliminar->izq){ //Si tiene hijo hizquierdo
			reemplazar(nodoEliminar,nodoEliminar->izq);
			destruirNodo(nodoEliminar);
		}else if(nodoEliminar->der){ //Si tiene hijo derecho
			reemplazar(nodoEliminar,nodoEliminar->der);
			destruirNodo(nodoEliminar);
	}else{ //No tiene hijos
		reemplazar(nodoEliminar,NULL);
		destruirNodo(nodoEliminar);
	}
}

void destruirNodo(Nodo *nodo){
	nodo->izq = NULL;
	nodo->der = NULL;
	delete nodo;
}
