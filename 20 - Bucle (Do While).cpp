/*
	La sentencia do while
	
												-- Se va a ejecutar si o si al menos una vez, primero actua luego piensa
												-- El iterador siempre se inicializa fuera del do while
	do{
		conjunto de instrucciones;
	}while(expresion logica);
*/

#include<iostream>
#include<stdlib.h>							//Funcion especial, system("pause");		-> funciona igual que la funcion del getch(); libreria conio.h 

using namespace std;

int main(){
	int i;
	
	i = 1;
	
	do{
		 cout<<i<<endl;
		 i++;						//aumenta el iterador en 1 en 1
	}while(i<=10);
	
	cout<<endl;
	
	i = 10;
	
	do{
		 cout<<i<<endl;
		 i--;						//decrementa el iterador en 1 en 1
	}while(i>=1);
	
	system("pause");
	return 0;
}

