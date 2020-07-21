// 6. Realice un programa que calcule la suma de dos matrices cuadradas de 3x3

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int matriz2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int SumaMatriz[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	
	//Suma las matrices
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			SumaMatriz[i][j] = matriz[i][j] + matriz2[i][j];
		}
	}
	
	//Muestra la suma de las matrices
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<"["<<i<<"]["<<j<<"]: "<<SumaMatriz[i][j]<<"\t"; 
		}
		cout<<endl;
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
