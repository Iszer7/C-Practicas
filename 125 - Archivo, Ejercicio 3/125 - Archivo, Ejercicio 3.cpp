//3. Realice un programa que pida al usuario el nombre o ubicacion de un archivo y, a continuacion añada texto en el hasta que el usuario lo decida

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<fstream>

using namespace std;

//Prototipo de funcion
void aniadir();

int main(){
	aniadir();
	
	return 0;
}

//Definicion de funcion

void aniadir(){
	ofstream archivo;
	char respuesta;
	string texto;
	
	archivo.open("programacion.txt",ios::app);
	
	if(archivo.fail()){
		cout<<"El archivo no existe o no ha sido creado"<<endl;
		exit(1);
	}
	
	do{
		fflush(stdin);
		cout<<"Escriba texto a aniadir: ";				getline(cin,texto);
		archivo<<texto<<endl;
		
		cout<<"\nDesea salir?(s/n): ";					cin>>respuesta;
		system("pause");
		system("cls");
	}while(respuesta == 'n' || respuesta == 'N');
	
	archivo.close();
}
