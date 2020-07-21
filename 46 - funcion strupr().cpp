//Pasar una palabra a MAYUSCULA		- funcion strupr()

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra[] = "diego";
	
	strupr(palabra);
	
	cout<<palabra<<endl;	
	
	getch();
	return 0;
}
