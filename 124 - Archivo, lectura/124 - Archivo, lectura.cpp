//Lectura a un archivo de texto

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

//Prototipo de funcion
void lectura();

int main(){
	lectura();
	
	system("pause");
	return 0;
}

//Definicion de funcion

void lectura(){
	ifstream archivo;	//ifstream para lectura
	string texto;
	
	archivo.open("programacion.txt",ios::in); //Abrimos el archivo en modo lectura
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo o no existe"<<endl;
		exit(1);
	}
	
	while(!archivo.eof()){ //Mientras no sea el final del archivo
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	archivo.close();
}
