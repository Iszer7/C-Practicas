//2. Realice un programa que pida al usuario el nombre o ubicacion del fichero de texto y, a continuacion de lectura a todo el fichero

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
	ifstream archivo;
	string texto, nombreArchivo;
	

	
	do{
		cout<<"Digite nombre del archivo a abrir: ";			getline(cin,nombreArchivo);
		archivo.open(nombreArchivo.c_str(),ios::in);
		
		if(archivo.fail()){
			cout<<"**El archivo no se pudo abrir o no existe**"<<endl;
			archivo.close();
		}
		cout<<endl;
	}while(archivo.fail());
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	cout<<endl;
	archivo.close();
}
