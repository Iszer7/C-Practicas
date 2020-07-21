/*12. Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas las etapas.
Nota: Usar punteros*/

#include<iostream>
#include<conio.h>

using namespace std;

//Variable Globa

struct TiempoEtapa{
	int hora;
	int minuto;
	int segundo;
}etapas[3], *puntero_etapas = etapas;

//Prototipo de funcion
void pedirDatos();
void sumarEtapas(TiempoEtapa *);

int main(){
	pedirDatos();
	sumarEtapas(puntero_etapas);
	
	getch();
	return 0;
}

//Definicion de funcion

void pedirDatos(){
	for(int i=0;i<3;i++){
		
		cout<<"Etapa "<<i+1<<". Digite cantidad de horas: ";			cin>>(puntero_etapas+i)->hora;
		
		do{
			cout<<"Etapa "<<i+1<<". Digite cantidad de minutos: ";			cin>>(puntero_etapas+i)->minuto;	
		}while( ((puntero_etapas+i)->minuto) > 60 );
		
		do{
			cout<<"Etapa "<<i+1<<". Digite cantidad de segundos: ";			cin>>(puntero_etapas+i)->segundo;
		}while( ((puntero_etapas+i)->segundo) > 60 );
		
		cout<<endl;
	}
}

void sumarEtapas(TiempoEtapa *puntero_etapas){
	int sumarHoras = 0, sumarMinutos = 0, sumarSegundos = 0;
	
	for(int i=0;i<3;i++){
		sumarHoras += (puntero_etapas+i)->hora;
		sumarMinutos += (puntero_etapas+i)->minuto;
		sumarSegundos += (puntero_etapas+i)->segundo;
	}
	
	do{
		if(sumarSegundos >= 60){
			sumarSegundos -= 60;
			sumarMinutos++;	
		}
		if(sumarMinutos >= 60){
			sumarMinutos -= 60;
			sumarHoras++;	
		}
	}while((sumarMinutos >= 60) || (sumarSegundos >= 60));
	
	cout<<"\nCantidad total entre todas las etapas:\n";
	cout<<"\nLa cantidad total de horas es: "<<sumarHoras;
	cout<<"\nLa cantidad total de minutos es: "<<sumarMinutos;
	cout<<"\nLa cantidad total de segundos es: "<<sumarSegundos;
}
