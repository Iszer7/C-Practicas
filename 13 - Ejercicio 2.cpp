//2. Escriba un programa que lea 3 numeros y determine cual de ellos es el mayor.

#include<iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	
	cout<<"Digite 3 numeros: ";		cin>>n1>>n2>>n3;
	
	if ((n1==n2)&&(n1==n3)&&(n2==n3)){				// Verifica que sean iguales
		cout<<"\nLos 3 numeros son iguales:";
	} else {
		if (n1>n2 && n1>n3){						//Verifica que n1 sea mayor
			cout<<"\nEl numero mayor es: "<<n1;
		} else {
			if (n2>n1 && n2>n3){					//Verifica que n2 sea mayor, sino lo es entonces el mayor es n3
				cout<<"\nEl numero mayor es: "<<n2;
			} else {
				cout<<"\nEl numero mayor es: "<<n3;
			}
		}
	}
	
	
	return 0;
}
