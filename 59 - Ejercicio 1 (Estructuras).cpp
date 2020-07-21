/*1. Hacer una estructura llamada corredor, en el cual se tendran los siguientes campos: Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asi una categoria de competicion:

- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion
*/

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;

int main(){
	char categoria[20];
	
	cout<<"Nombre: ";		cin.getline(c1.nombre,20,'\n');
	cout<<"Edad: ";			cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: ";			cin.getline(c1.sexo,10,'\n');
	fflush(stdin);
	cout<<"Club: ";			cin.getline(c1.club,20,'\n');
	
	if(c1.edad <= 18){
		strcpy(categoria,"Juvenil");
	}
	if(c1.edad <= 40){
		strcpy(categoria,"Senior");
	}
	if(c1.edad > 40){
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\n\t\tDatos del corredor"<<endl;
	
	cout<<"Nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<categoria<<endl;

	system("pause");
	return 0;
}
