//6. Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos, sin utilizar la funcion pow.

#include<iostream>	
#include<stdlib.h>			//system("pause");

using namespace std;

int main(){
	int x, y, potencia = 1, i = 1;				// Necesito inicializar i en 1
	
	do{
		cout<<"\nEscriba un valor para x: ";		cin>>x;
		cout<<"\nEscriba un valor para y: ";		cin>>y;
	}while(	(x<=0)||(y<0) );
	
	while(i<=y){						// EJ: i = 1, 	y = 2
		potencia = potencia * x;		// potencia *=x
		i++;
	}
	
	cout<<"\nEl resultado de "<<x<<" ^ "<<y<<" es: "<<potencia<<endl;
	system("pause");
	return 0;
}


