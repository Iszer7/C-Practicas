/*Trasmision de arreglos			--> Se envian los arreglos gracias a los punteros

Ejemplo: Hallar el maximo elemento de un arreglo
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
int hallarMax(int *, int);

int main(){
	const int nElementos = 5;
	int numeros[nElementos] = {6,14,2,8,12,};
	
	cout<<"El mayor elemento es: "<<hallarMax(numeros,nElementos);		// numeros = &numeros[0]		|| Es exactamente lo mismo
	
	getch();
	return 0;
}

//Definicion de funcion
int hallarMax(int *dirVec, int nElementos){
	int max = *dirVec;
	
	for(int i=0;i<nElementos;i++){
		if(*(dirVec+i) > max){		//el "dirVec+i" al terminar una vuelta suma para pasar a la siguiente posicion
			max = *(dirVec+i);
		}
	}
	
	return max;
}
