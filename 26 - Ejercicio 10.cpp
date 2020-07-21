//10. Escriba un programa que calcule el valor de: 1!+2!3!+...+n! (suma de factoriales)

#include<iostream>
#include<stdlib.h>	//system("pause");

using namespace std;

int main(){
	int numero, factorial = 1, sumafactorial = 0;
	
	cout<<"Digite un numero: ";		cin>>numero;
	
	for(int i=1;i<=numero;i++){
		factorial *= i;			//saca el factorial				- (!3 = 1*2*3 = 6)
		sumafactorial = sumafactorial + factorial;	//suma de factoriales		- (6[3!] + 2[2!] + 1[1!] = 9)
	}
	
	cout<<"\nLa suma de factoriales es: "<<sumafactorial<<endl;
	
	system("pause");
	return 0;
}
