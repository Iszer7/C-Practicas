/*Asignacion dinamica de arreglos

new: Reserva el numero de bytes solicitados por la declaracion
delete: Libera un bloque de bytes reservados con anterioridad

Ejemplo: Pedir al usuario n clasificaciones y almacenarlas en un arreglo dinamico.

---> Anteriormente = Numeros[10], si se le pedian 6 en el array.. sobraban 4 que se desperdiciaban (con arreglos dinamicos esto cambia)
*/

#include<iostream>
#include<conio.h>
#include<stdlib.h>		//Para que funcione new y delete

using namespace std;

//Prototipo de funciones
void pedirNotas();
void mostrarNotas();

//Variables Globales
int numCalif, *calif;

int main(){
	
	pedirNotas();
	mostrarNotas();
	
	delete[] calif;		//Libera el espacio en bytes usados anteriormente
	
	getch();
	return 0;
}

//Definicion de funciones

void pedirNotas(){
	cout<<"Digite numero de calificaciones: ";			cin>>numCalif;
	
	calif = new int[numCalif];		//Crea el arreglo exacto (variable puntero).
	
	for(int i=0;i<numCalif;i++){
		cout<<i+1<<".Ingrese una nota: ";			cin>>calif[i];
	}
}

void mostrarNotas(){
	cout<<"\nMostrando notas del usuario: \n";
	for(int i=0;i<numCalif;i++){
		cout<<calif[i]<<endl;
	}
}
