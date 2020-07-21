// 2. Escribe la siguiente expresion matematica como expresion en C++			->	(a+b)/(c+d)

#include<iostream>

using namespace std;

int main(){
	float	a, b, c, d, resultado = 0;
	
	cout<<"El programa resolvera (a+b)/(c+d)"<<endl<<endl;
	
	cout<<"Digite el valor de a:";			cin>>a;
	cout<<"\nDigite el valor de b:";		cin>>b;
	cout<<"\nDigite el valor de c:";		cin>>c;
	cout<<"\nDigite el valor de d:";		cin>>d;
	
	resultado = (a+b)/(c+d);
	
	cout.precision(3);
	cout<<"\nEl resultado de (a+b)/(c+d) es: "<<resultado;
	return 0;
}
