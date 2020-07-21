//Busqueda Secuencial

//a[5] = {3,4,2,1,5};	dato = 4;	realmente pertenece al arreglo?

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[5] = {3,4,2,1,5};
	char caracter[5] = {'e','i','o','a','u'}, datocaracter;
	int i,dato;
	char band = 'F';
	
	cout<<"Digite un numero: ";		cin>>dato;
	
	//Busqueda Secuencial con numero
	i = 0;
	
	while((band == 'F') && (i<5)){
		if(numeros[i] == dato){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"\nEl numero a buscar no existe en el arreglo";
	} else if(band == 'V'){
		cout<<"\nEl numero a sido encontrado en la posicion del arreglo: "<<i-1<<endl;
	}
	
	/*----------------------------------------------------------------------------------------------------*/
	
	cout<<"\n\nDigite un caracter: ";		cin>>datocaracter;
	
	//Busqueda Secuencial con caracter
	i = 0;
	band = 'F';
	
	while((band == 'F') && (i<5)){
		if(caracter[i] == datocaracter){
			band = 'V';
		}
		i++;
	}
	
	if(band == 'F'){
		cout<<"\nEl caracter a buscar no existe en el arreglo";
	} else if(band == 'V'){
		cout<<"\nEl caracter a sido encontrado en la posicion del arreglo: "<<i-1<<endl;
	}
	
	getch();
	return 0;
}
