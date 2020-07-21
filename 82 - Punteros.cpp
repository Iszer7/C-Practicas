/*Punteros - Declaracion de punteros

&n = La direccion de n
*n = La variable cuya direccion esta almacenada en n

El asterisco muestra lo que hay dentro de la posicion de memoria | Sin asterisco muestra la posicion exacta del puntero (hexadecimal)
*/

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int num,*dir_num;		//*dir_num es un puntero
	
	num = 20;
	dir_num = &num;
	
	cout<<"Numero: "<<*dir_num<<endl;		//Imprime lo que encuentra en esa posicion de memoria
	cout<<"Direccion de memoria donde se guarda esta variable es: "<<dir_num<<endl;
	
	getch();
	return 0;
}
