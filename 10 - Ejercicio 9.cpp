//9. Realice un programa que calcule el valor que toma la siguiente funcion para los valores dado de x e y.		->	f(x,y)= (x^1/2)/((y^2)-1)

#include<iostream>
#include<math.h>		//Libreria para funciones matematicas especiales y geometricas

using namespace std;

int main(){
	float x, y, resultado = 0;
	
	cout<<"Digite el valor de x: ";			cin>>x;
	cout<<"\nDigite el valor de y: ";		cin>>y;
	
	resultado = (sqrt(x))/(pow(y,2)-1);				//sqrt es raiz cuadrada ; pow es para potencias (el 2 dentro indica que es cuadrado) 
	
	cout<<"El resultado es: "<<resultado;
	return 0;
}
