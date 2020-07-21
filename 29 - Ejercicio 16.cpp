// 16. Realice un programa que calcule la descomposicion en factores primos de un numero entero. Por ej: 20 = 2*2*5.

#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){
 int num, i=2;
 
 	cout<<"Digite un numero: "; cin>>num;
 
 	do{
  		if( (num % i) == 0){			// primero divide por 2, si el resto = 0 entonces divide, sino se divide por 3 (se le suma 1 a i)
   			num /= i;
   			cout<<i<<"*";  
  		} else {
   			i++;
		}
 	}while(num != 1); 
 	
 	cout<<"\n";  
 	system("pause"); 
 return 0;
}
