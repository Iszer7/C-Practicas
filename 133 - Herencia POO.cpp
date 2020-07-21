//Herencia en POO

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creacion de clase
class Persona{
	private: //Atributos
		string nombre;
		int edad;
	public: //Metodos
		Persona(string,int);	//Constructor
		void mostrarPersona();	
};

class Alumno : public Persona{	//Herencia -> Alumno es una clase hija de Persona (el public habilita que todo lo que es publico en Persona pueda ser utilizado en Alumno)
	private: //Atributos
		string codigoAlumno;
		float notaFinal;
	public:	//Metodos
		Alumno(string,int,string,float);		//Primero se pone la clase Padre en las variables (constructor)
		void mostrarAlumno();
};

//Inicializo constructor
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

//Herencia
Alumno::Alumno(string _nombre, int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre,_edad){
	codigoAlumno = _codigoAlumno;
	notaFinal = _notaFinal;
}

//Funcion de clase
void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();
	cout<<"Codigo alumno: "<<codigoAlumno<<endl;
	cout<<"Nota final: "<<notaFinal<<endl;
}

//MAIN
int main(){
	Alumno alumno1("Diego",20,"3836A",8.33);
	Persona persona1("Pedro",26);
	
	alumno1.mostrarAlumno();
	cout<<endl;
	persona1.mostrarPersona();
	
	system("pause");
	return 0;
}
