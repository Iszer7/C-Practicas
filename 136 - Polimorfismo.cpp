//Polimorfismo		-> Objetos actuando de diferente manera ante el mismo mensaje (una acccion actuando de diferente manera)

#include<iostream>
#include<stdlib.h>

using namespace std;

//Clases
class Persona{
	private:	//Atributo
		string nombre;
		int edad;
	public:		//Metodo
		Persona(string,int);
		virtual void mostrar();	//El virtual significa que contiene polimorfismo(solamente se escribe virtual en la clase padre una sola vez)
};

class Alumno : public Persona{
	private:
		float notaFinal;
	public:
		Alumno(string,int,float);
		void mostrar();			//En ambos dice mostrar() -> En Persona y Alumno
};

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};

//Constructores
Persona::Persona(string _nombre, int _edad){
	nombre = _nombre;
	edad = _edad;
}

Alumno::Alumno(string _nombre, int _edad, float _notaFinal) : Persona(_nombre,_edad){				//Persona -> Alumno
	notaFinal = _notaFinal;
}

Profesor::Profesor(string _nombre, int _edad, string _materia) : Persona(_nombre,_edad){			//Persona -> Profesor
	materia = _materia;
}

//Funciones de clases
void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrar(){
	Persona::mostrar();		//Hay que indicarle que es de la clase Persona
	cout<<"Nota Final: "<<notaFinal<<endl;
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}

//MAIN
int main(){
	Persona *vector[3];
	
	vector[0] = new Alumno("Diego",20,8.33);
	vector[0]->mostrar();
	cout<<endl;
	
	vector[1] = new Alumno("Maria",30,7.5);
	vector[1]->mostrar();
	cout<<endl;
	
	vector[2] = new Profesor("Jose",40,"Estructora de datos");
	vector[2]->mostrar();
	cout<<endl;
	
	system("pause");
	return 0;
}
