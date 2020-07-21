//4. Escribe la siguiente expresion como expresion de c++.				-> a+(b/(c-d))

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, resultado = 0;
	
	cout<<"El programa resolvera a+(b/(c-d))"<<endl<<endl;
	
	cout<<"Digite el valor a: ";	cin>>a;
	cout<<"\nDigite el valor b: ";	cin>>b;
	cout<<"\nDigite el valor c: ";	cin>>c;
	cout<<"Digite el valor d: ";	cin>>d;
	
	resultado = a+(b/(c-d));
	
	cout<<"\nEl resultado de a+(b/(c-d)) es: "<<resultado;
	
	return 0;
}
