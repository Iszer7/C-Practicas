/*2. Construya una clase Tiempo que contenga los siguientes atributos enteros: horas, minutos y segundos.
Haga que la clase contenga 2 constructores, el primero debe tener 3 parametros Tiempo(int,int) y el segundo solo tendra un campo que seran los segundos y desensamble el numero entero largo en horas, minutos y segundos.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creacion de clase
class Tiempo{
	private:	//Atributos
		int horas, minutos, segundos;
	public:		//Metodos
		Tiempo(int,int,int);
		Tiempo(int);
		void mostrarTiempo();
};

//Inicializo constructor
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
	horas = _horas;
	minutos = _minutos;
	segundos = _segundos;
}

Tiempo::Tiempo(int tiempoSeg){
	horas = tiempoSeg/3600;
	minutos = (tiempoSeg - horas*3600)/60;
	segundos = tiempoSeg - horas*3600 - minutos*60;
	/* Otra forma
	hora = tiempoSeg / 3600;
	tiempoSeg %= 3600;
	minutos = tiempoSeg / 60;
	segundos = tiempoSeg % 60 
	*/
}

//Creo funcion de clase
void Tiempo::mostrarTiempo(){
	cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}

int main(){
	Tiempo horaActual(06,06,47);
	Tiempo horaEnAlgunMomento(3666);
	
	horaActual.mostrarTiempo();
	horaEnAlgunMomento.mostrarTiempo();
	
	system("pause");
	return 0;
}
