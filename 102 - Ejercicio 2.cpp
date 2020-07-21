//2. Hacer un programa que guarde datos de clientes de un banco, los almacene en cola, y por ultimo muestre los clientes en el orden correcto

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

//Variable global

struct Nodo{
	char Nombre[20];
	int edad;
	int id;
	Nodo *siguiente;
};

//Prototipo de funcion
void menu();
void agregar_Cola(Nodo *&,Nodo *&,char[],int,int);
bool colaVacia(Nodo *);
void mostrar_Cola(Nodo *);


int main(){
	Nodo *frente = NULL;
	Nodo *fin = NULL;
	int edad,id=0,opt; char cliente[20];
	
	do{
		cout<<"\n\t\tMENU OPCIONES"<<endl;
		cout<<"1. Ingresar a la cola"<<endl;
		cout<<"2. Mostrar los clientes"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";			cin>>opt;
		
		if((opt==1)||(opt==2)||(opt==3)){
			switch(opt){
				case 1: fflush(stdin);
						cout<<"Digite nombre del cliente: ";				cin.getline(cliente,20,'\n');
						cout<<"Edad: ";										cin>>edad;
						id++;
						agregar_Cola(frente,fin,cliente,edad,id);
						break;			
				case 2: system("cls");
						mostrar_Cola(frente);
						break;
				case 3: cout<<"Saliendo...";
			}
		}else{
			system("cls");
			cout<<"Digite una opcion correcta!"<<endl;
		}
	}while(opt !=3);

	
	getch();
	return 0;
}

//Definicion de funcion

void agregar_Cola(Nodo *&frente, Nodo *&fin, char cliente[], int edad, int id){
		Nodo *nuevo_nodo = new Nodo();
		strcpy(nuevo_nodo->Nombre,cliente);
		nuevo_nodo->edad = edad;
		nuevo_nodo->id = id;
		
		nuevo_nodo->siguiente = NULL;
		if(colaVacia(frente)){
			frente = nuevo_nodo;
		}else{
			fin->siguiente = nuevo_nodo;
		}
		fin = nuevo_nodo;
}

bool colaVacia(Nodo *frente){
	return (frente == NULL)? true:false;
}

void mostrar_Cola(Nodo *frente){
	Nodo *aux = frente;
	cout<<"\t\t DATOS"<<endl;
	cout<<"N-:"<<"\t\tNombre:"<<"\t\tEdad:"<<endl;
	
	while(aux!=NULL){
		cout<<"N."<<aux->id<<"\t\t"<<aux->Nombre<<"\t\t       "<<aux->edad<<endl;
		aux = aux->siguiente;
	}
}
