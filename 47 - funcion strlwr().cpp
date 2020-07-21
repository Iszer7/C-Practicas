//Pasar una palabra a minuscula			- funcion strlwr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "HOLA soy YO";
	
	strlwr(palabra);
	
	cout<<palabra<<endl;
	
	getch();
	return 0;
}
