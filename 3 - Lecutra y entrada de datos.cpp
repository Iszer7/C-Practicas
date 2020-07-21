// Lectura y entrada de datos

#include<iostream>
#include<stdio.h>				//Se usa con el printf, scanf, getch
#include<conio.h>				//Se usa con el printf, scanf, getch

using namespace std;

int main(){
	int numero1, numero2;
	
	cout<<"Digite un numero: ";					
	cin>>numero1;										//Guarda el numero
	
	printf("Digite el segundo numero: ");				
	scanf("%d" ,&numero2);								//Guarda el numero con scanf
	
	cout<<"\nEl primero numero ingresado es: "<<numero1;				//Muestra el primer numero
	printf("\nEl segundo numero ingresado es: %d", numero2);				//Muestra el segundo numero
	
	getch();			//Agarra resultados
	return 0;
}
