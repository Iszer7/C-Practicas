/*20. Realice una funcion recursiva para la serie Fibonacci
Nota: La serie de Fibonacci esta formada por la secuencia de numeros:
0,1,1,2,3,5,8,13,21,34..
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion

int Fibonacci(int);

int main(){
	int nElementos;
	
	//Pide el numero de elementos que tendra la secuencia
	do{
		cout<<"Digite un numero de elementos: ";		cin>>nElementos;
		if(nElementos <= 0){
			cout<<"-----Digite un numero mayor a 0 plz-----"<<endl;
		}
	}while(nElementos <= 0);
	
	//Muestra la secuencia
	cout<<"\nLa secuencia Fibonacci es: ";
	for(int i = 0;i<nElementos;i++){
		cout<<Fibonacci(i)<<" ";
	}
	
	getch();
	return 0;
}

//Definicion de la funcion

int Fibonacci(int n){
	if((n == 0) || (n == 1)){ //Caso Base
		return n;
	} else { //Caso General
		return Fibonacci(n-1) + Fibonacci(n-2);
	}
}

