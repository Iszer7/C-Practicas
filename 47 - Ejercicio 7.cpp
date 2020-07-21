//7. Pedir su nombre al usuario en MAYUSCULA, si su nombre comienza por la letra A, convertir su nombre a minuscula, caso contrario no convertirlo

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[30], nombremayuscula[30];
	
	// Hasta que no digite un nombre en mayuscula no avanza
	do{
		cout<<"Digite su nombre en mayuscula: ";		cin>>nombre;
		strcpy(nombremayuscula,nombre);
		strupr(nombremayuscula);
	}while(strcmp(nombre,nombremayuscula) == 1);
	
	cout<<endl;
	
	//Si empieza con A lo muestra en minuscula
	if(nombre[0] == 'A' ){
		strlwr(nombre);
		cout<<nombre<<endl<<endl;	
	} else {
		cout<<nombre<<endl<<endl;
	}
	
	system("pause");
	return 0;
}
