//6. Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de tres argumentos que se trasmitan a la funcion cuando sea llamada. Suponga que los tres argumentos seran el mismo tipo de datos

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funciones

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3);

int main(){
	float dato1 = 4.543554;
	float dato2 = 4.645324;
	float dato3 = 2.333;
	
	cout<<"El maximo es: "<<maximo(dato1,dato2,dato3)<<endl;
	
	
	getch();
	return 0;
}

//Definicion de funciones

template <class TIPOD>
TIPOD maximo(TIPOD dato1, TIPOD dato2, TIPOD dato3){
	TIPOD max = 0;
	
	if((dato1 > dato2) && (dato1 > dato3)){
		max = dato1;
	}
	if((dato2 > dato1) && (dato2 > dato3)){
		max = dato2;
	}
	if((dato3 > dato1) && (dato3 > dato2)){
		max = dato3;
	}
	
	return max;
}
