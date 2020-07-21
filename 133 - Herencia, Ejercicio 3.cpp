//3. Realice un programa, de tal manera que se construya una solucion para la jerarquia(herencia) de clases mostrada en la siguiente figura

#include<iostream>
#include<stdlib.h>

using namespace std;

//Clases
class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		void mostrarPersona();
};

//Clases hijas
class Empleado : public Persona{		//Persona->Empleado
	private:
		int numeroEmpleado;
		float salario;
	public:
		Empleado(string,int,int,float);
		void mostrarEmpleado();
};

class Estudiante : public Persona{		//Persona->Estudiante
	private:
		string universidad;
		string codigoEstudiante;
	public:
		Estudiante(string,int,string,string);
		void mostrarEstudiante();
};

class Universitario : public Estudiante{	//Persona->Estudiante->Universitario
	private:
		string carrera;
		float promedioGeneral;
	public:
		Universitario(string,int,string,string,string,float);
		void mostrarUniversitario();
};

//Constructores - clase padre
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

//Herencias
Empleado::Empleado(string _nombre, int _edad, int _numeroEmpleado, float _salario) : Persona(_nombre,_edad){
	numeroEmpleado = _numeroEmpleado;
	salario = _salario;
}

Estudiante::Estudiante(string _nombre, int _edad, string _universidad, string _codigoEstudiante) : Persona(_nombre,_edad){	//Clase hija y Clase padre de Universitario
	universidad = _universidad;
	codigoEstudiante = _codigoEstudiante;
}

Universitario::Universitario(string _nombre, int _edad, string _universidad, string _codigoEstudiante, string _carrera, float _promedioGeneral) : Estudiante(_nombre,_edad,_universidad,_codigoEstudiante){
	carrera = _carrera;
	promedioGeneral = _promedioGeneral;
}

//Funciones Clases

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Empleado::mostrarEmpleado(){
	mostrarPersona();
	cout<<"Numero de empleado: "<<numeroEmpleado<<endl;
	cout<<"Salario: "<<salario<<endl;
}

void Estudiante::mostrarEstudiante(){
	mostrarPersona();
	cout<<"Universidad: "<<universidad<<endl;
	cout<<"Codigo de estudiante: "<<codigoEstudiante<<endl;
}

void Universitario::mostrarUniversitario(){
	mostrarEstudiante();
	cout<<"Carrera: "<<carrera<<endl;
	cout<<"Promedio general: "<<promedioGeneral<<endl;
}

//MAIN
int main(){
	Persona persona1("Diego",20);
	Empleado empleado1("Rodrigues",23,3675,50000);
	Estudiante estudiante1("Lucas",25,"UNQUI","367AB");
	Universitario universitario1("Nika",35,"UTN","HB74","Ciencias de la computacion",8.33);
	
	cout<<"\t-PERSONA-"<<endl;
	persona1.mostrarPersona();
	cout<<endl;
	
	cout<<"\t-EMPLEADO-"<<endl;
	empleado1.mostrarEmpleado();
	cout<<endl;
	
	cout<<"\t-ESTUDIANTE-"<<endl;
	estudiante1.mostrarEstudiante();
	cout<<endl;
	
	cout<<"\t-UNIVERSITARIO-"<<endl;
	universitario1.mostrarUniversitario();
	cout<<endl;
	
	system("pause");
	return 0;
}
