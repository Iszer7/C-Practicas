/*9. Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg y tres parametros de referencia enteros nombrados horas, min y seg. 
La funcion es convertir el numero de segundos trasmitido en un numero equivalente de horas, minutos y segundos
*/

#include<iostream>
#include<conio.h>

using namespace std;

//Prototipo de funcion

void tiempo(int,int&,int&,int&);

int main(){
	int totalSeg, horas, min, seg;
	
	cout<<"Digite el numero total de segundos: ";			cin>>totalSeg;
	
	tiempo(totalSeg,horas,min,seg);
	
	cout<<"\nTiempo equivalente a la cantidad de segundos: "<<endl;
	
	cout<<"Horas: "<<horas<<endl;
	cout<<"Minutos: "<<min<<endl;
	cout<<"Segundos: "<<seg<<endl;
	
	getch();
	return 0;
}

//Definicion de funciones

void tiempo(int totalSeg, int& horas, int& min, int& seg){
	horas = totalSeg / 3600;
	totalSeg = totalSeg % 3600; //Saca el resto
	
	min = totalSeg / 60;
	
	seg = totalSeg % 60;
}
