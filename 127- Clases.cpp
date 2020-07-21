//Clases

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creacion de clases
class Persona{	//Usualmente en singular
	private:	//Atributos - usualmente va en privado (encapsulado)
		int edad;
		string nombre;
	public:		//Metodo - en publico porque si se pueden modificar no como los privados
		Persona(int,string);	//Constructor de la clase
		void leer();
		void correr();
};

//Inicializacion del constructor (Variable global) - Nos sirve para inicializar los atributos de la clase
Persona::Persona(int _edad,string _nombre){
	edad = _edad;
	nombre = _nombre;
}

//Funcion de clases 
void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" anios"<<endl;
}

int main(){
	Persona p1 = Persona(20,"Diego");
	Persona p2(18,"Maria");
	Persona p3(21,"Juan");
	
	p1.leer();
	p2.correr();
	
	p3.leer();
	p3.correr();
	
	system("pause");
	return 0;
}
