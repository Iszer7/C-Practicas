/*6. Hacer una funcion para almacenar N numeros en un arreglo dinamico, posteriormente en otra funcion buscar un numero en particular.
Nota: Puedes utilizar cualquier metodo de busqueda(Secuencia o binaria)
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>

using namespace std;

//Prototipo de funcion

void pedirDatos();
void buscarDato(int *, int);

//Variables globales

int nElementos, *elemento;

int main(){
	
	pedirDatos();
	buscarDato(elemento,nElementos);
	delete[] elemento;
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	do{
		cout<<"Digite cantidad de elementos del arreglo: ";		cin>>nElementos;
		if(nElementos < 0){
			cout<<"\n*****Digite un arreglo positivo*****"<<endl;
		}
	}while(nElementos < 0);
	
	elemento = new int[nElementos];
	
	for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero ["<<i+1<<"]: ";				cin>>*(elemento+i);
	}
}

void buscarDato(int *elemento, int nElementos){
	int num_buscado;
	bool band = 0;
	
	
		cout<<"\nDigite el numero a buscar en el arreglo: ";			cin>>num_buscado;
	
	
	for(int i=0;i<nElementos;i++){
		if(num_buscado == (*elemento+i)){
			band = 1;
		}
	}
	
	if(band == 1){
		cout<<"\nEl numero "<<num_buscado<<" se encuentra en el arreglo"<<endl;
	} else {
		cout<<"\nEl numero "<<num_buscado<<" NO se encuentra en el arreglo"<<endl;
	}
}
