//10. Pedir al usuario que digite una cadena, luego copiar su contenido hacia otro array de caracteres. y por ultimo modificar su mensaje poniendo a partir de la posición 10 "Buena broma".

#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main(){
	char cadena[40],cadenacopia[40];
 
 	cout<<"Digite una cadena de caracteres para que se la muestre en mayusculas: ";cin.getline(cadena,40,'\n');
 
 	strcpy(cadenacopia,cadena);
 	strupr(cadenacopia);
 
	for(int i=0;i<10;i++){
		cout<<cadenacopia[i];
 	} 
 	
 	cout<<"--Buena Broma"<<endl<<endl;
 
 	system("pause");
 	return 0;
}

