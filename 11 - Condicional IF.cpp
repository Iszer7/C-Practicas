/*
	if(condicion){
		Instruccion 1;
	}else{
		Instruccion 2;
	}
*/

#include<iostream>

using namespace std;

int main(){

	int numero, dato = 5;
	
	cout<<"Digite un numero: ";		cin>>numero;

	if(numero == dato){								// (numero != dato) -> esto para decir que es diferente;	(numero > dato); (numero < dato); (numero >= dato); (numero <= dato) 
		cout<<"\nEl numero es 5";
	}else{
		cout<<"\nEl numero es diferente de 5";
	}
}

