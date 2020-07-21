//4. Comprobar si un numero digitado por el usuario es positivo o negativo

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";		cin>>numero;
	
	if (numero==0){
		cout<<"\nEl numero es 0";
	} else {
			if (numero>0){
				cout<<"\nEl numero es positivo";
			} else {
				cout<<"\nEl numero es negarivo";
			}
	}		
	return 0;
}
