//1. Comprobar si un numero es par o impar, y señalar la posicion de memoria donde se esta guardando el numero. Con punteros

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero,*dir_numero;
	
	cout<<"Digite un numero: ";			cin>>numero;
	
	dir_numero = &numero;	//Guarda la posicion de memoria
	
	if(*dir_numero % 2 == 0){	//El numero es par
		cout<<"El numero "<<*dir_numero<<" es par"<<endl;
		cout<<"La posicion: "<<dir_numero<<endl;
	} else {
		cout<<"El numero "<<*dir_numero<<" es impar"<<endl;
		cout<<"La posicion: "<<dir_numero<<endl;
	}
	
	system("pause");
	return 0;
}
