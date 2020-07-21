/* Recursividad (funcion que se llama a ella misma)

Factorial de un numero 3! = 3*2*1	=	3*2!
	
	0! = 1
	
	factorial(n) = 1					, si n=0
				   n*factorial(n-1)		, si n>0
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de la funcion
int factorial(int);

int main(){
	int numero;
	
	cout<<"Digite un numero: ";			cin>>numero;
	cout<<"Factorial: "<<factorial(numero)<<endl;
	
	getch();
	return 0;
}

//Definicion de la funcion
int factorial(int n){
	if(n==0){	//Caso base
		n = 1;
	}else{		//Caso general
		n = n * factorial(n-1);
	}
	return n;
}
