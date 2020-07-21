/*8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos: el nombre de la persona y un valor de tipo logico que indica si la persona tiene algun tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con discapacidad
*/

#include<iostream>
#include<stdlib.h>

using namespace std;

struct persona{
	char nombre[20];
	int discapacidad;
}pers[100];

int main(){
	int cant_pers;
	int pers_sin_disc = 0, pers_disc = 0;
	
	cout<<"Digite cantidad de personas: ";			cin>>cant_pers;
	
	for(int i=0;i<cant_pers;i++){
				cout<<endl;
		fflush(stdin);
		cout<<"Nombre de la persona: ";																cin.getline(pers[i].nombre,20,'\n');
			do{
				cout<<"Si es discapacitada escriba '1', si no discapacitada escriba '0': ";			cin>>pers[i].discapacidad;
			}while((pers[i].discapacidad != 0) && (pers[i].discapacidad != 1));
			
			switch(pers[i].discapacidad){
				case 0:
					pers_sin_disc++;
					break;
				case 1:
					pers_disc++;
					break;
			}
	}
	
	cout<<"\n*--------------------------------------*"<<endl;
	cout<<"Cantidad de personas discapacitadas: "<<pers_disc<<endl;
	cout<<"Cantidad de personas NO discapacitadas: "<<pers_sin_disc<<endl<<endl;
	
	system("pause");
	return 0;
} 
