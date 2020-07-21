//Destructor	-> Se encarga de borrar todos los objetos que se a creado en esa clase

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creo clase
class Perro{
	private:	//Atributo
		string nombre, raza;
	public:		//Metodo
		Perro(string,string);	//Constructor
		~Perro();	//Destructor si tiene "~"
		void mostrarDatos();
		void jugar();
};

//Inicializo el constructor

Perro::Perro(string _nombre, string _raza){
	nombre = _nombre;
	raza = _raza;
}

//Destructor
Perro::~Perro(){
}

//Funcion de clase
void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
	cout<<"El perro "<<nombre<<" esta jugando"<<endl<<endl;
}

int main(){
	Perro perro1("Frida","Aleman Belga");
	
	perro1.mostrarDatos();
	perro1.jugar();
	perro1.~Perro();	//Destruye o elimina el objeto de una clase	|| No es necesario ponerlo porque al ya terminar el programa se destruye(igual hay que crear el destructor)
	
	system("pause");
	return 0;
}
