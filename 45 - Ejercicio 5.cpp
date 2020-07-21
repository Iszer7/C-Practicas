// 5. Hacer un programa que determine si una palabra es polindroma

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cad[30];
	char cad2[30];
	
	cout<<"Escriba una palabra: ";		cin>>cad;
	
	//Copia la palabra en otra variable
	strcpy(cad2,cad);
	
	//Invierte la palabra copiada
	strrev(cad2);
	cout<<endl;
	
	//Compara ambas variables
	if(strcmp(cad,cad2) == 0){
		cout<<"La palabra "<<cad<<" es polindroma"<<endl<<endl;
	} else {
		cout<<"La palabra "<<cad<<" NO es polindroma"<<endl<<endl;
	}
	
	system("pause");
	return 0;
}
