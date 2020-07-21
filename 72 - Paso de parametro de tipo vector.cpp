/*Paso de parametros de tipo vector

Parametros de la funcion:
	void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)
	
Llamada a la funcion:
	nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

//Cuadrados de los elementos del vector

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion

void cuadrado(int vec[], int );
void muestra(int vec[], int );

int main(){
	const int TAM = 5;			//Tamaño de tipo constante
	int vec[TAM] = {1,2,3,4,5};
	
	cuadrado(vec,TAM);
	muestra(vec,TAM);
	
	getch();
	return 0;
}

//Definicion de la funcion

void cuadrado (int vec[], int TAM){
	for(int i=0;i<TAM;i++){
		vec[i] = vec[i] * vec[i];		//Eleva todos los numeros al cuadrado
	}
}

void muestra(int vec[], int TAM){
	for(int i=0;i<TAM;i++){
		cout<<vec[i]<<" ";
	}
}
