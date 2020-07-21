/*Trasmision de direcciones

Ejemplo: Intercambiar el valor de 2 variables.
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion
void intercambio(float *,float *);

int main(){
	float num1 = 20.8, num2 = 6.78;
	
	cout<<"Primer numero: "<<num1;
	cout<<"\t\t\tPosicion numero "<<num1<<" es "<<&num1<<endl;
	cout<<"Segundo numero "<<num2;
	cout<<"\t\t\tPosicion numero "<<num2<<" es "<<&num2<<endl;
	
	intercambio(&num1,&num2);	//Envia la direccion de memoria
	
	cout<<"\n\n----Despues del intercambio----\n\n";
	cout<<"El nuevo valor de num1: "<<num1;
	cout<<"\t\tPosicion numero "<<num1<<" es "<<&num1<<endl;
	cout<<"El nuevo valor de num2: "<<num2;
	cout<<"\t\tPosicion numero "<<num2<<" es "<<&num2<<endl;
	
	getch();
	return 0;
}

//Definicion de funcion
void intercambio(float *dirNum1, float *dirNum2){
	float aux;
	
	aux = *dirNum1;
	*dirNum1 = *dirNum2;
	*dirNum2 = aux;
}
