/* 
			La sentencia while:
												-- Siempre se inicializa el iterador fuera del while
		while(expresion logica){
			conjunto de intrucciones;
		}
*/

#include<iostream>
#include<conio.h>			// Libreria para que el while no se cierre al abrirlo desde el ejecutable (y tampoco se termine), utilizado junto al getch()
							// getch();   <-- Equivale a GetCharacter .. es decir.. que el sistema espera a que el usuario ingrese un carácter para continuar..

using namespace std;

int main(){
	int i;
	
	// Aumenta e imprime i hasta 10
	i = 1;					// inicializo i en 1.
	
	while(i<=10){
		cout<<i<<endl;		// imprime el valor de i hasta que i sea 10
		i++;				// se puede poner "i += 1";		pero como queremos que solamente aumente de 1 en 1 podemos poner "i++"; (es lo mismo que poner i = i + 1;)
	}
	
	// Disminuye hasta 1, i empieza en 10.
	i = 10;

	cout<<endl;		// da un salto de linea.
	
	while(i>=1){			// imprime el valor de i hasta que i sea 1
		cout<<i<<endl;
		i--;
	}
	
	getch();
	return 0;
}
