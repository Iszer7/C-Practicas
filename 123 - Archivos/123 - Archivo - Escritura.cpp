//Escribir un archivo de texto

#include<iostream>
#include<stdlib.h>
#include<fstream> //Libreria de archivos

using namespace std;

//Prototipo de funcion
void escribir();

int main(){
	escribir();
	
	system("pause");
	return 0;
}

//Definicion de funcion

void escribir(){
	ofstream archivo, archivoCarpeta; //ofstream se usa para guardar un archivo en este caso "archivo"
	string nombreArchivo, frase;
	
	cout<<"Digite el nombre del archivo: ";				getline(cin,nombreArchivo);
	
	//En este podes modificar el nombre del archivo
	archivo.open(nombreArchivo.c_str(),ios::out); //Abriendo el archivo (crea un archivo)
	
	if(archivo.fail()){
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}
	
	archivo<<"Creando un archivo de texto..."<<endl;
	archivo<<"Agregando mas texto al archivo"<<endl;
	
	/*******************************************************************************/
	//En este podes modificar la ubicacion donde queres que se guarde, para que no se guarde directamente en la misma carpeta
	archivoCarpeta.open("C://Users//Diego//Desktop//C++ ATS//123 - Archivos//files//texto de archivoCarpeta.txt",ios::out);
	
	cout<<"\nDigite el texto del archivo (pertenece a archivoCarpeta): ";				getline(cin,frase);
	archivoCarpeta<<frase;
	/*******************************************************************************/
	
	archivoCarpeta.close(); //Cierra el archivoCarpeta
	archivo.close(); //Sirve para cerrar el archivo
}
