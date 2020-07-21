//18. Escriba una funcion llamada mayor() que devuelva la fecha mas reciente de cualquier par de fechas que se le trasmitan. Por ejemplo, si se trasmiten las fechas 10/9/2005 y 11/3/2015 a mayor(), sera devuelta la segunda fecha.

#include<iostream>
#include<conio.h>

using namespace std;

struct Fechas{
	int dia,mes,anio;
}f1,f2;

//Prototipo de la funcion
void pedirFechas();
Fechas mayor(Fechas,Fechas);
void mostrar(Fechas);

int main(){
	pedirFechas();
	mostrar(mayor(f1,f2));
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirFechas(){
	do{
		cout<<"Ingrese el dia de la primera fecha: ";		cin>>f1.dia;
	}while(f1.dia>32);
	do{
		cout<<"Ingrese el mes de la primera fecha: ";		cin>>f1.mes;
	}while(f1.mes > 13);
	cout<<"Ingrese el anio de la primera fecha: ";		cin>>f1.anio;
	
	do{
		cout<<"\nIngrese el dia de la segunda fecha: "; 	cin>>f2.dia;
	}while(f2.dia>32);
	do{
		cout<<"Ingrese el mes de la segunda fecha: "; 		cin>>f2.mes;
	}while(f1.mes > 13);
	cout<<"Ingrese el anio de la segunda fecha: "; 		cin>>f2.anio;
}

Fechas mayor(Fechas x, Fechas y){
	if(x.anio < y.anio){
		x.anio = y.anio;
		x.mes = y.mes;
		x.dia = y.dia;
 	} else {
 		if((x.anio == y.anio) && (x.mes < y.mes)){
			x.mes = y.mes;
			x.dia = y.dia;
 		} else {
 			if((x.anio == y.anio) && (x.mes == y.mes) && (x.dia < y.dia)){
				x.dia = y.dia;
 			}
 		}
 	}
	return x;
}

void mostrar(Fechas x){
	cout<<"La fecha mas grande es: "<<endl<<endl;
	cout<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}
