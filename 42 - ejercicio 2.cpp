// 2. Pedir al usuario una cadena de caracteres, almacenarla en un arreglo y copiar todo su contenido hacia otro arreglo de caracteres.

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[30];
	char palabra2[30];
	
	cout<<"Escriba algo: ";			cin.getline(palabra,30,'\n');
	
	strcpy(palabra2,palabra);
	
	cout<<"\nPalabra original:"<<palabra<<endl;
	cout<<"Palabra copiada:"<<palabra2<<endl<<endl;
	
	
	system("pause");
	return 0;
}
