//8. Escriba un programa que calcule el valor de: 1+3+5+....+2n-1

#include<iostream>
#include<conio.h>	//getch();

using namespace std;

int main(){
	int n, suma = 0;
	
	cout<<"Digite un numero de elemento: ";		cin>>n;
	
	for(int i=1;i<=n;i++){
		suma += ((2*i)-1);		//suma = suma + ((2*i)-1); 	- es lo mismo
	}
	
	cout<<"\nEl resultado de la suma de (2n-1) es: "<<suma<<endl;
	
	getch();
	return 0;
}
