//Estructuras anidadas

#include<iostream>
#include<conio.h>

using namespace std;

struct info_direccion{
	char direccion[20];
	char ciudad[20];
	char provincia[20];
};

struct empleado{
	char nombre[20];
	struct info_direccion dir_empleado;			//Se pone la estructura, luego el nombre con el cual se va a localizar
	double salario;	
}empleados[2];		//Se guarda 2 empleados

int main(){
	
	for(int i=0;i<2;i++){
		fflush(stdin);				//Vacia el buffer y permitir digitar los valores |	cin.ignore(256,'\n');  tambien se puede usar eso
		cout<<"Digite su nombre: ";			cin.getline(empleados[i].nombre,20,'\n');
		cout<<"Digite su direccion: ";		cin.getline(empleados[i].dir_empleado.direccion,20,'\n');
		cout<<"Digite la ciudad: ";			cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"Digite provincia: ";			cin.getline(empleados[i].dir_empleado.provincia,20,'\n');
		cout<<"Digite salario: ";			cin>>empleados[i].salario;
		cout<<endl;
	}
	
	//Imprimiendo Datos
	
	for(int i=0;i<2;i++){
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Salario: "<<empleados[i].salario<<endl;
		cout<<endl;
	}
	
	getch();
	return 0;
}
