/*
		La sentencia for:
	
	for(expr1; expresion logica; expr2){					//expr1: casi siempre para iniciar el iterador
		conjunto de instrucciones;							//expresion logica: funcion que tiene que cumplirse hasta que se termine el bucle
	}														//expr2: sirve para aumentar el iterador

*/

#include<iostream>
#include<conio.h>			// para que no se cierre el ejecutable

using namespace std;

int main(){
	int i;
	
	for(i = 1; i<=10; i++){			// Aumenta, lo bueno del for es que permite inicializar la variable "int i = 1;" dentro del for aunque no este declarado antes "int i"
		cout<<i<<endl;
	}
	
	cout<<endl;
	
	for(i = 10; i>=1; i--){			// Disminuye
		cout<<i<<endl;
	}
	
	getch();
	return 0;
}
