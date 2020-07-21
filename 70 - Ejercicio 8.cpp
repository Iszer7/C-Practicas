/*8. Escriba una funcion nombrada cambio() que tenga un parametro en numero entero y seis parametros de referencia en numeros enteros nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente.
La funcion tiene que considerar el valor entero trasmitido como una cantidad en dolares y convertir el valor en el numero menor de billetes equivalentes.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de la funcion
void cambio(int dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno);

int main(){
	int dolares=0, cien=0, cincuenta=0, veinte=0, diez=0, cinco=0, uno=0;
 
	cout << "Ingrese cantidad de dolares: ";		cin >> dolares;
 
	cambio(dolares, cien, cincuenta, veinte, diez, cinco, uno);
 
	system("pause");
	return 0;
}

//Definicion de la funcion
void cambio(int dolares, int &cien, int &cincuenta, int &veinte, int &diez, int &cinco, int &uno){

	cien = dolares / 100;
	dolares = dolares % 100;				// 10 % 2 = 0 (ES EL RESTO) ----------> 10 % 3 = 1

	cincuenta = dolares / 50;
	dolares = dolares % 50;
 
	veinte = dolares / 20;
	dolares = dolares % 20;
 
	diez = dolares / 10;
	dolares = dolares % 10;

	cinco = dolares / 5;
	dolares = dolares % 5;
 
	uno = dolares;
 
 
	cout << "\nEl cambio es de: \n" << endl;
	cout << cien << " billetes de $100" << endl;
	cout << cincuenta << " billetes de $50" << endl;
	cout << veinte << " billetes de $20" << endl;
	cout << diez << " billetes de $10" << endl;
	cout << cinco << " billetes de $5" << endl;
	cout << uno << " billetes de $1" << endl;
 
}


