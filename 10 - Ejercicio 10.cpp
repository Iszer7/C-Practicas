//10. Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax^2+bx+c=0, teniendo en cuenta que ->	x = (-b+-(b^2-4ac)^1/2)/2a

#include<iostream>
#include<math.h>

using namespace std;

int main (){
	float a, b, c, x1 = 0, x2 = 0;
	
	cout<<"Digite el valor de a: ";			cin>>a;
	cout<<"\nDigite el valor de b: ";		cin>>b;
	cout<<"\nDigite el valor de c: ";		cin>>c;
	
	x1 = (-b+sqrt(pow(b,2)-4*a*c))/2*a;
	x2 = (-b-sqrt(pow(b,2)-4*a*c))/2*a;
	
	cout<<"\nEl resultado de x1 es: "<<x1;
	cout<<"\nEl resultado de x2 es: "<<x2;
	
	return 0;
}
