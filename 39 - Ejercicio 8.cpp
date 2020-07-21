/* 8. Realice un programa que calcule el producto de dos matrices cuadradas de 3x3

|1  2  0|		| 2 1 1|		|0  3  7|		Ej: C11 = 1(2)+2(-1)+0(1) = 0			Fila1 * columna1	Fila2 * columna1	Fila3 * columna1
|2 -1 -1|	->	|-1 1 3|	=	|4 -1 -5|		Ej: C12 = 1(1)+2(1)+0(2)  = 3			Fila1 * columna2	Fila2 * columna2	Fila3 * columna2
|3  2  3|		| 1 2 4|		|7 11 21|		Ej: C13 = 1(1)+2(3)+0(4)  = 7			Fila1 * columna3	Fila3 * columna3	Fila3 * columna3

*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int matriz1[3][3] = {{1,2,0},{2,-1,-1},{3,2,3}};
	int matriz2[3][3] = {{2,1,1},{-1,1,3},{1,2,4}};
	int MatrizResultado[3][3] = {{0,0,0},{0,0,0},{0,0,0}};
	
	//Calculo de la matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			for(int k=0; k<3; k++){
                MatrizResultado[i][j] = MatrizResultado[i][j] + (matriz1[i][k]*matriz2[k][j]);						// C11 = ([1,1] * [1,1])+([1,2] * [2,1])+([1,3] * [3,1]) = 0
            }
		}
	}
	
	//Muestra la matriz
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
				cout<<"["<<i<<"]["<<j<<"]: "<<MatrizResultado[i][j]<<endl;
		}
	}
	
	system("pause");
	return 0;
}
