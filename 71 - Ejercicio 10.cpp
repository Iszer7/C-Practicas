/*10. Escriba una funcion nombrada calc_años() que tenga un parametro entero que represente el numero total de dias desde la fecha 1/1/2000 y parametros de referencia nombrados años, mes y dia.
La funcion es calcular el año, mes y dia actual para el numero dado de dias que se le trasmitan. Para este programa suponga que cada año tiene 365 dias y cada mes tiene 30 dias.
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

//Prototipo de la funcion

void calc_anios(int,int&,int&,int&);

int main(){
	int totalDias, anios, mes, dia;
	
	cout<<"Inicia en el calendario 1/1/2000"<<endl;
	cout<<"Digite la cantidad total de dias: ";				cin>>totalDias;
	
	calc_anios(totalDias,anios,mes,dia);
	
	cout<<"\nFecha en el calendario actual: "<<dia<<"/"<<mes<<"/"<<anios+2000<<endl<<endl;
	
	system("pause");
	return 0;
}

//Definicion de la funcion

void calc_anios(int totalDias, int& anios, int& mes, int& dia){
	anios = totalDias / 365;
	totalDias %= 365;
	
	mes = totalDias / 30;
	
	dia = totalDias % 30;
}
