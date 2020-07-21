// Invertir una cadena - Funcion strrev()					- Es mejor usar [reverse()] ya que si esta documentada

#include<iostream>
#include<conio.h>
#include<string.h>		// Sirve para strrever()
#include <algorithm>	// Sirve para reverse()

using namespace std;

int main(){
	char cad[] = "Diego";
	string cad2 = "reconocer";		//Palabra polindrome		|| string es otra forma de variable (se usa con reverse())
	
	//STRREV()
	strrev(cad);			//Invierte la cadena
	
	//REVERSE()
	reverse(cad2.begin(), cad2.end());
	
	cout<<cad<<endl;	
	
	cout<<cad2<<endl;
	
	getch();
	return 0;
}
