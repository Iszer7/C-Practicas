/*3. Realice un programa que lea un valor entero y determine si se trata de un numero par o impar */

#include<iostream>

using namespace std;

int main(){
	int numero;
	
	cout<<"Digite un numero: ";		cin>>numero;
	
	if (numero==0){						//Verifica que sea 0
		cout<<"\nEl numero es 0";
	} else {							//En esta linea no es necesaria el {} (La pongo por precaucion)
			if (numero%2==0){			//El %2 esta sacando el reciduo de la division, si es 0 entonces es par
				cout<<"\nEl numero es par";
			} else {
				cout<<"\nEl numero es impar";
			}
	}
	return 0;
}
