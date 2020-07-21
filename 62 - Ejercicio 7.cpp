/*7. Defina una estructura que indique el tiempo empleado por un ciclica en terminar una etapa. La estructura debe tener tres campos: hora, minutos y segundos.
Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.
*/

#include<iostream>
#include<conio.h>

using namespace std;

struct etapas{
	int horas;
	int minutos;
	int segundos;
}et[100];

int main(){
	int n_etapas, horasT=0, minutosT=0, segundosT=0;
	
	cout<<"Digite cantidad de etapas: ";			cin>>n_etapas;
	
	for(int i=0;i<n_etapas;i++){
		//Pide los datos al usuario
		cout<<"Horas: ";			cin>>et[i].horas;
		cout<<"Minutos: ";			cin>>et[i].minutos;
		cout<<"Segundos: ";			cin>>et[i].segundos;
		
		horasT = horasT+ et[i].horas;
		// Si pasa los 60 minutos cuenta como 1 hora mas
		minutosT = minutosT +et[i].minutos;
		if(minutosT >= 60){
			minutosT -= 60;
			horasT++;
		}
		// Si pasa los 60 segundos cuenta como 1 minuto mas
		segundosT = segundosT + et[i].segundos;
		if(segundosT >= 60){
			segundosT -= 60;
			minutosT++;
		}
		cout<<endl;
	}
	
	cout<<"\nTiempo total empleado"<<endl;
	cout<<"Horas: "<<horasT<<endl;
	cout<<"Minutos: "<<minutosT<<endl;
	cout<<"Segundos: "<<segundosT<<endl;
	
	getch();
	return 0;
}
