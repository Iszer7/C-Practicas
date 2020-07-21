//12. Hacer un programa que calcule el resultado de la siguiente expresion: 1-2+3-4+5-6...n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int numero, suma = 0;
	
	cout<<"Digite un numero: ";		cin>>numero;
	
	
	for(int i=1;i<=numero;i++){			//1<=3 -> -2<=3 -> +3<=3
		if(i%2==0){
			suma = suma + i;
		} else {
			suma = suma - i;
		}
	}
	
	cout<<"\nEl resultado de la suma es: "<<suma<<endl;
	
	system("pause");
	return 0;
}
