//4. Crear un programa que tenga la siguiente jerarquia de clases y hacer polimorfismo con el metodo comer();

#include<iostream>
#include<stdlib.h>

using namespace std;

//Clases
class Animal{
	private:
		int edad;
	public:
		Animal(int);
		virtual void comer();
};

class Humano : public Animal{
	private:
		string nombre;
	public:
		Humano(int,string);
		void comer();
};

class Perro : public Animal{
	private:
		string nombre,raza;
	public:
		Perro(int,string,string);
		void comer();
};

//Constructores
Animal::Animal(int _edad){
	edad = _edad;
}

Humano::Humano(int _edad, string _nombre) : Animal(_edad){
	nombre = _nombre;
}

Perro::Perro(int _edad, string _nombre, string _raza) : Animal(_edad){

	nombre = _nombre;
	raza = _raza;
}

//Funciones de clases
void Animal::comer(){
	cout<<"Yo como ";
}

void Humano::comer(){
	Animal::comer();
	cout<<"en una mesa, sentado en la silla"<<endl;
}

void Perro::comer(){
	Animal::comer();
	cout<<"en el suelo con mi plato"<<endl;
}

//MAIN
int main(){
	Animal *animales[2];
	
	animales[0] = new Perro(5,"Tobby","Pastor Animal");
	animales[0]->comer();
	cout<<endl;
	
	animales[1] = new Humano(18,"Diego");
	animales[1]->comer();
	cout<<endl;
	
	system("pause");
	return 0;
}
