/* Escribe un programa que lea de la entrada estandar el precio de un producto y muestre en la salida
 estandar el precio del prodcuto al aplicarle el iva */
 
#include<iostream>

using namespace std;

int main(){
	float Precio, iva = 0.21, PrecioIVA, PrecioFinal;				// Variables
	
	cout<<"Precio del producto:";	cin>>Precio;					// Guarda el precio
	
	PrecioIVA = Precio * iva;										
	PrecioFinal = Precio + PrecioIVA;								// Precio del producto + iva
	
	cout<<"\nEl precio al aplicarle iva es:"<<PrecioFinal;	
	return 0;
}
