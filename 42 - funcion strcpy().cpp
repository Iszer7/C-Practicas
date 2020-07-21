//Copia el contenido de la cadena a otra - funcion strcpy()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char nombre[] = "Diego";
	char nombre2[20];
	
	strcpy(nombre2,nombre);			// Pasa lo que tiene en nombre a nombre2 
	
	cout<<nombre2<<endl;		
	
	getch();
	return 0;
}
