//Añadir texto al final de un archivo

#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

//Prototipo de funcion
void aniadir();

int main(){
	aniadir();
	
	system("pause");
	return 0;
}

//Definicion de funcion

void aniadir(){
	ofstream archivo; //Escribir en el archivo
	string texto;
	
	archivo.open("hola.txt",ios::app);	//Abriendo el archivo en modo añadir
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo o no existe";
		exit(1);
	}
	
	cout<<"Digite le texto que quiere añadir: ";			getline(cin,texto);
	archivo<<texto<<endl;
	
	archivo.close();
}
