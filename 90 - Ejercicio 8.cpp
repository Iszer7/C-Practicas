//8. Pedir unna cadena de caracteres(string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

using namespace std;

//Prototipo de funcion
void pedirDatos();
void contadorVocales(char *);

//Variable global

char nombreUsuario[30];

int main(){
	pedirDatos();
	contadorVocales(nombreUsuario);
	
	system("pause");
	return 0;
}

//Definicion de funcion
void pedirDatos(){
	cout<<"Digite su nombre: ";			cin.getline(nombreUsuario,30,'\n');
	
	strupr(nombreUsuario);
}

void contadorVocales(char *nombre){
	int cont_A =0, cont_E =0, cont_I =0, cont_O =0, cont_U =0;
	
	while(*nombre){
		switch(*nombre){
			case 'A': cont_A++; break;
			case 'E': cont_E++; break;
			case 'I': cont_I++; break;
			case 'O': cont_O++; break;
			case 'U': cont_U++; break;
		}
		nombre++;
	}
	cout<<endl;
	cout<<"El numero de vocales A es: "<<cont_A<<endl;
	cout<<"El numero de vocales E es: "<<cont_E<<endl;
	cout<<"El numero de vocales I es: "<<cont_I<<endl;
	cout<<"El numero de vocales O es: "<<cont_O<<endl;
	cout<<"El numero de vocales U es: "<<cont_U<<endl;
	cout<<endl;
}
