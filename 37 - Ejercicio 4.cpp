// 4. Hacer una matriz preguntando al usuario el numero de filas y columnas, llenarla de numeros aleatorios, copiar el contenido a otra matriz y por ultimo mostrarla en pantalla.

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numeros[100][100], matriz2[100][100], filas, columnas;
	
	cout<<"Digite numero de filas: ";		cin>>filas;
	cout<<"Digite numero de columnas: ";	cin>>columnas;
	
	//Guarda elementos en la matriz numeros[i][j]
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]"<<"Digite un numero: ";		cin>>numeros[i][j];
		}
	}

	//Pasa los elementos de la matriz numeros a la matriz2
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			matriz2[i][j] = numeros[i][j];
		}
	}
	
	//Muestra los elementos de la matriz2
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"["<<i<<"]"<<"["<<j<<"]: "<<matriz2[i][j]<<endl;
		}
		cout<<endl;
	}
	
	system("pause");
	return 0;
}
