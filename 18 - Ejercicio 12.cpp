/*12. Hacer un menu que considere las siguientes opciones:
Caso 1: Cubo de un numero
Caso 2: Numero par o impar
Caso 3: Salir
*/

#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int opc, resultado, numero;
	
	cout<<"\tBienvenido al menu"<<endl;
	cout<<"1. Cubo de un numero"<<endl;
	cout<<"2. Numero par o impar"<<endl;
	cout<<"3. Salir"<<endl<<endl;
	
	cout<<"Opcion: ";		cin>>opc;
	
	switch(opc){
		case 1:
			cout<<"\nDigite un numero: ";	cin>>numero;
			
			resultado = pow(numero,3);			//El cubo de un numero elevado a 3 seria.
			
			cout<<"\nEl resultado del numero al cubo es: "<<resultado;
			break;
		case 2:
			cout<<"\nDigite un numero: ";	cin>>numero;
			
			if(numero==0){
				cout<<"\nEl numero es 0"; 
			} else {
					if(numero%2==0){
					cout<<"\nEl numero es par";
				} else {
					cout<<"\nEl numero es impar";
			}
			}
			break;
		case 3:
			cout<<"\nNos vemos!"; break;
		default:
			cout<<"\nNo corresponde a ninguna opcion"; break;
	}
	return 0;
}
