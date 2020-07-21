// Tipo de datos C++

#include<iostream>

using namespace std;

int main(){
	int numeroentero = 15;							// Int para numeros enteros							\\ Con printf y scanf se usa "%d"
	float numeroconcoma = 10.45;					// Float es para numeros con coma (flotante)		\\ Con printf y scanf se usa "%f" - Cantidad de decimales "%.2f" (2 por ejemplo)
	double numeroconcomalargo = 16.7583929192940;	// Double es para numeros con coma largos			
	char letra = 'Di';								// Char es numero o letra
	
	cout<<numeroentero<<endl;
	cout<<numeroconcoma<<endl;
	cout<<numeroconcomalargo<<endl;
	cout<<letra<<endl;

	return 0;
}
