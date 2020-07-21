// 4. Escribe un programa que defina un vector de numeros y muestre en la salida estandar el vector en orden inverso - del ultimo al primer elemento

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros [50], n;
	
	cout<<"Digite cantidad de elementos dentro del vector: ";		cin>>n;
	
	for(int i=0;i<n;i++){
		cout<<"\nDigite un numero: ";		cin>>numeros[i];
	}
	
	for(int i=n-1;i!=-1;i--){
		cout<<i<<" -> "<<numeros[i]<<endl;
	}
	
	getch();
	return 0;
}
