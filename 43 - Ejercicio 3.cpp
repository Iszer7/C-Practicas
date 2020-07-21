// 3. Pedir al usuario que digite 2 cadena de caracteres, e indicar si ambas cadenas son iguales, en caso de no serlo, indicar cual es mayor alfabeticamente.

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[30];
	char palabra2[30];
	
	cout<<"Digite una/s palabra/s 1: ";			cin.getline(palabra1,30,'\n');
	cout<<"Digite una/s palabra/s 2: ";			cin.getline(palabra2,30,'\n');
	
	if(strcmp(palabra1,palabra2) == 0){
		cout<<"\nAmbas cadenas son iguales"<<endl<<endl;
	} else {
		if(strcmp(palabra1,palabra2) < 0){
			cout<<"\nLa palabra: "<<palabra1<<" es la mayor alfabeticamente"<<endl<<endl;
		} else {
			cout<<"\nLa palabra: "<<palabra2<<" es la mayor alfabeticamente"<<endl<<endl;
		}
	}
	
	system("pause");
	return 0;
}
