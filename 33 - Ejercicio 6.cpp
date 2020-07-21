// 6. Escribe un programa que defina un vector de numeros y calcule si existe algun numero en el vector cuyo valor equivale a la suma del resto de numeros del vector

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[100], n, suma = 0;
	
	cout<<"Digite el numero de elementos del vector: ";		cin>>n;
	
	for(int i=0;i<n;i++){													// [5,14,19]
		cout<<i+1<<". Digite un numero: ";			cin>>numeros[i];		// Ejemplo: 10 = [2+3+5] 
		
		suma += numeros[i];													// Total= 38
	}
	
	for(int i=0;i<n;i++){
		suma -= numeros[i];
		
		if(suma == numeros[i]){
			cout<<"\n"<<i+1<<" -> "<<numeros[i]<<" equivale a la suma de todos los demas";
		} else {
			suma +=numeros[i];
		}
	}
	
	getch();
	return 0;
}
