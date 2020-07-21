//3. Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa y que imprima los datos del empleado con mayor y menor salario.

#include<iostream>
#include<stdlib.h>	//Se usa el fflush(stdin) aca

using namespace std;

struct empleado{
	char nombre[20];
	float salario;
}emp[100];

int main(){
	int n_empleados = 0, posM = 0, posm = 0;
	float mayor = 0, menor = 999999;
	
	cout<<"Digite el numero de empleados: ";		cin>>n_empleados;
	
	for(int i=0;i<n_empleados;i++){
		fflush(stdin);
		cout<<i+1<<".Nombre: ";		cin.getline(emp[i].nombre,20,'\n');
		cout<<i+1<<".Salario: ";		cin>>emp[i].salario;
		cout<<endl;
		
		//Determina empleado de mayor salario
		if(emp[i].salario>mayor){
			mayor = emp[i].salario;
			posM = i;
		}
		
		//Determina empleado de menor salario
		if(emp[i].salario<menor){
			menor = emp[i].salario;
			posm = i;
		}
	}
	
	cout<<"\n\n\t\tDatos del empleado con mayor salario"<<endl;
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	
	cout<<"\n\n\t\tDatos del empleado con menor salario"<<endl;
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl<<endl;
	
	system("pause");
	return 0;
}
