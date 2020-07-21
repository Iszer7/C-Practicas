/*2. Determinar si un numero es primo o no; con punteros y ademas indicar en que posicion de memoria se guardo el numero.

	 2,	 3,	 5,	 7,	11,	13,
    17, 19,	23,	29,	31, ...
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero,i,cont = 0,*dir_numero;
	
	cout<<"Digite un numero: ";			cin>>numero;
	
	dir_numero = &numero;
	
	for(int i=1;i<=*dir_numero;i++){
		if(*dir_numero%i == 0){
			cont++;
		}
	}
	
	if(cont != 2){
		cout<<"El numero NO es primo"<<endl;
		cout<<"La posicion: "<<dir_numero<<endl;
	} else {
		cout<<"El numero es primo"<<endl;
		cout<<"La posicion: "<<dir_numero<<endl;
	}
	
	getch();
	return 0;
}
