//11. Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...2^n

#include<iostream>
#include<conio.h>	//getch();
#include<math.h>

using namespace std;

int main(){
	int numero, sumaelemento = 0, elemento = 0;
	
	cout<<"Digite el numero de elementos a sumar: ";		cin>>numero;
	
	for(int i=1;i<=numero;i++){
		elemento = pow(2,i);		
		sumaelemento = sumaelemento + elemento;		// sumaelemento += elemento;
	} 
	
	cout<<"\nLa suma de los elementos es: "<<sumaelemento<<endl;
	
	getch();
	return 0;
}
