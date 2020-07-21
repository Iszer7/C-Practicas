// 2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que muestre la diagonal principal de la matriz

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[3][3]= {{1,2,3},
						{4,5,6},
						{7,8,9}};		//Tiene que tomar el 1,5,9		[0][0],[1][1],[2][2]
	
	//Muestra la diagonal principal de la matriz
	for(int i=0;i<3;i++){
		cout<<"["<<i<<"]"<<"["<<i<<"]"<<": "<<numeros[i][i]<<endl;
	}
		
	getch();
	return 0;
}
