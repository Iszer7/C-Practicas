//6. Convertir dos cadenas de minuscula a MAYUSCULAS. Compararlas, y decir si son iguales o no

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30], palabra2[30];
	
	cout<<"Digite una palabra: ";		cin>>palabra1;
	cout<<"Digite una palabra: ";		cin>>palabra2;
	
	//Pone las palabras en mayuscula
	strupr(palabra1);
	strupr(palabra2);
	
	cout<<endl;
	
	//Compara las palabras
	if(strcmp(palabra1,palabra2) == 0){
		cout<<"Ambas palabras son iguales"<<endl<<endl;
	} else {
		cout<<"Las palabras son distintas"<<endl<<endl;
	}
	
	system("pause");
	return 0;
}
