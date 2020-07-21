//3. Escribe la siguiente expresion como expresion de C++			->	(a+(b/c))/(d+(e/f))

#include<iostream>

using namespace std;

int main(){
	float a, b, c, d, e, f, resultado = 0;
	
	cout<<"El programa resolvera (a+(b/c))/(d+(e/f)))"<<endl<<endl;
	
	cout<<"Digite el valor a: ";	cin>>a;
	cout<<"Digite el valor b: ";	cin>>b;
	cout<<"Digite el valor c: ";	cin>>c;
	cout<<"Digite el valor d: ";	cin>>d;
	cout<<"Digite el valor e: ";	cin>>e;
	cout<<"Digite el valor f: ";	cin>>f;
	
	resultado = (a+(b/c))/(d+(e/f));
	
	cout.precision(2);
	cout<<"El resultado de (a+(b/c))/(d+(e/f)) es :"<<resultado;
	
	return 0;
}
