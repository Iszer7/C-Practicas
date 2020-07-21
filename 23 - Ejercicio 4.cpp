//4. Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un periodo de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del dia, la temperatura mas alta y mas baja.

#include<iostream>
#include<stdlib.h>				//con system("pause");

using namespace std;

int main(){
	int temperatura, TempMedia = 0, TempAlta = -9999, TempBaja = 9999;						//Se inicializa la TempAlta para que cualquier valor sea tomado > a -9999

	for(int i=4;i<=24;i+=4){
		cout<<"La temperatura de "<<i<<"hs es: ";		cin>>temperatura;
		
		TempMedia += temperatura;				// Suma todas las temperaturas
		
		if(temperatura>TempAlta){				// Saca cual es la temperatura mas alta
			TempAlta = temperatura;
		}
		
		if(temperatura<TempBaja){				// Saca cual es la temperatura mas baja
			TempBaja = temperatura;
		}	
	}
	
	
	cout<<"\nLa temperatura media es: "<<TempMedia/6<<endl;			// Lo divide por 6 porque son 6 temperaturas.
	cout<<"\nLa temperatura alta es: "<<TempAlta<<endl;
	cout<<"\nLa temperatura baja es: "<<TempBaja<<endl;
	
	cout<<endl;
	system("pause");
	return 0;
}
