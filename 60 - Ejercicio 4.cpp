//4. Hacer un arreglo de estructuras llamada atleta para N atletas que contenga los siguientes campos: nombre, pais, numero_medallas. Y devuelva los datos (Nombre, pais) del atleta que ha ganado el mayor numero de medallas

#include<iostream>
#include<conio.h>

using namespace std;

struct atleta{
	char nombre[20];
	char pais[20];
	int numero_medallas;
}atlet[100];

int main(){
	int cant_atletas, mayor_medallas = 0, pos = 0;
	
	cout<<"Digite cantidad de atletas: ";			cin>>cant_atletas;
	
	for(int i=0;i<cant_atletas;i++){
		cout<<endl;
		fflush(stdin);
		cout<<i+1<<".Nombre: ";					cin.getline(atlet[i].nombre,20,'\n');
		fflush(stdin);
		cout<<i+1<<".Pais: ";					cin.getline(atlet[i].pais,20,'\n');
		cout<<i+1<<".Numero de medallas: ";		cin>>atlet[i].numero_medallas;
		
		if(atlet[i].numero_medallas > mayor_medallas){
			mayor_medallas = atlet[i].numero_medallas;
			pos = i;
		}
	}
	
	cout<<"\n\n\t\tDatos del atleta que gano mayor cantidad de medallas"<<endl;
	cout<<"Nombre: "<<atlet[pos].nombre<<endl;
	cout<<"Pais: "<<atlet[pos].pais<<endl;
	cout<<"Cantidad de medallas: "<<atlet[pos].numero_medallas;
	
	getch();
	return 0;
}
