//11. Hacer un programa que simule un cajero automatico con saldo inicial de 1000 dolares

#include<iostream>

using namespace std;

int main(){
	int saldo_inicial = 1000, opc;
	float extra, saldo = 0, retiro;
	
	cout<<"\tBienvenido a su cajero virtual"<<endl;			//el \t es como el tabulador, deja varios espacios
	cout<<"1. Ingresar dinero en cuenta"<<endl;
	cout<<"2. Retirar dinero de la cuenta"<<endl;
	cout<<"3. Salir"<<endl<<endl;
	
	cout<<"Opcion: ";	cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"Digite la cantidad de dinero a ingresar: ";	cin>>extra;
			saldo = saldo_inicial + extra;
			cout<<"Dinero en cuenta: "<<saldo;
			break;
		case 2:
			cout<<"Digite la cantidad que va a retirar: ";	cin>>retiro;
			
			if(retiro>saldo_inicial){
				cout<<"\nNo tiene esa cantidad de dinero";
				break;
			} else {
				saldo = saldo_inicial - retiro;
				cout<<"Dinero en cuenta: "<<saldo;
				break;
			}
			
		case 3:
			cout<<"Nos vemos!";	break;
		default: cout<<"No es una opcion valida";
	}
	return 0;
}

