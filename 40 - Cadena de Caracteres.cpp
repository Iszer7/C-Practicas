//Cadena de caracteres

#include<iostream>
#include<conio.h>
#include<string.h>		//libreria para cadena de caracteres

using namespace std;

int main(){
	char palabra[] = "Diego1";							//No se pone nada en el [] porque ya se define con la cantidad que hay dentro de ""
	char palabra2[] = {'D','i','e','g','o'};			//Es lo mismo poner "Diego" o {'D','i','e','g','o'}.
	char nombre[30];									//Al tener [30] son los espacios disponible para escribir el nombre (sirve cuando es necesario pedirle un nombre al usuario)
	char nombre2[30];
	
	cout<<"Digite un nombre: ";		//Es preferible usar el GETS sobre CIN, porque si queremos poner "Diego Kippes" el CIN solo toma "Diego" ya que no identifica espacios
	gets(nombre);					//Al GETS no le importa el numero que hay [30], toma mas de lo necesario si te pasas.. y eso es malo
	
	
	//La mejor forma para cadena de caracteres
	cout<<"Digite un nombre: ";
	cin.getline(nombre2,20,'\n');				// cin.getline(variable,cantidad de espacios, cuando quiero que termine);
								
	
	cout<<nombre<<endl;
	cout<<nombre2<<endl;
	
	getch();
	return 0;
}
