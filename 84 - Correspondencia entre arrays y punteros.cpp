//Correspondencia entre arrays y punteros

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {1,2,3,4,5};
	int *dir_numeros;
	
	//Muestra cada elemento del array
	dir_numeros = numeros;	// Es igual a poner "dir_numeros = &numeros[0]"
	
	for(int i=0;i<5;i++){
		cout<<"Elemento del vector ["<<i<<"]: "<<*dir_numeros++<<endl;
	}
	
	//Muestra la posicion de memoria de cada elemento del array
	dir_numeros = numeros;
	cout<<endl;
	for(int i=0;i<5;i++){
		cout<<"Posiciones de memoria "<<numeros[i]<<" es: "<<dir_numeros++<<endl;
	}
	
	getch();
	return 0;
}
