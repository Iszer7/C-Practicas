//Sobrecarga de constructor

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creacion de clase
class Fecha{
	private:	//Atributos
		int dia, mes, anio;
	public:		//Metodos
		Fecha(int,int,int);	//Constructor 1
		Fecha(long);		//Constructor 2
		void mostrarFecha();
};

//Inicializacion del constructor
Fecha::Fecha(int _dia, int _mes, int _anio){	//Constructor 1
	anio = _anio;
	mes = _mes;
	dia = _dia;
}

Fecha::Fecha(long fecha){
	anio = int(fecha/10000);	//Extraer el anio
	mes = int((fecha-anio*10000)/100);	//Extraer el mes
	dia = int(fecha-anio*10000-mes*100);	//Extraer el dia
}

//Funcion de clase
void Fecha::mostrarFecha(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	Fecha hoy(19,3,2020);
	Fecha ayer(20190318);
	
	hoy.mostrarFecha();
	ayer.mostrarFecha();	//La computadora se da cuenta que parametro le estas mandando
	
	system("pause");
	return 0;
}
