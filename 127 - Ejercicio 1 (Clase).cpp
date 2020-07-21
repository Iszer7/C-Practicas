//1. Construya una clase llamada Rectangulo que tenga los siguientes atributos: largo y ancho, y los siguientes metodos: perimetro() y area();

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creacion de clase
class Rectangulo{
	private:	//Atributos
		float largo, ancho;
	public:		//Metodos
		Rectangulo(float,float);	//Constructor
		void perimetro();
		void area();
};

//Inicializacion de constructor
Rectangulo::Rectangulo(float _largo, float _ancho){
	largo = _largo;
	ancho = _ancho;
}

//Funcion de clase

void Rectangulo::perimetro(){
	float _perimetro = (2*ancho)+(2*largo);
	cout<<"\nEl perimetro de "<<largo<<" (largo) y "<<ancho<<" (ancho) es:"<<_perimetro<<endl;
}

void Rectangulo::area(){
	float _area = ancho*largo;
	cout<<"\nEl area de "<<largo<<" (largo) y "<<ancho<<" (ancho) es:"<<_area<<endl;
}

int main(){
	Rectangulo r1(5,5);
	Rectangulo r2(10,10);
	Rectangulo r3(2,5);
	
	r1.perimetro();
	r2.area();
	
	r3.area();
	r3.perimetro();
		
	system("pause");
	return 0;
}
