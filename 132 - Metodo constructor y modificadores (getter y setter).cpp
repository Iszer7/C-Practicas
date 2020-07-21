//Metodos constructores y modificadores (Getters-Sirve para mostrar la informacion de las variables y Setters-Asigna valores a una las variables)

#include<iostream>
#include<stdlib.h>

using namespace std;

//Creacion de clase

class Punto{
	private:	//Atributo
		int x,y;
	public:	//Metodo
		Punto();
		void setPunto(int,int);	//Setters (Con esto se puede manipular los atributos de la clase)
		int getPuntoX();
		int getPuntoY();
};

//Creacion de constructor

Punto::Punto(){
}

//Funcion de clase
void Punto::setPunto(int _x, int _y){	//Establecemos los atributos
	x = _x;
	y = _y;
}

int Punto::getPuntoX(){
	return x;
}

int Punto::getPuntoY(){
	return y;
}

//MAIN
int main(){
	Punto punto1;
	
	punto1.setPunto(15,10);
	cout<<punto1.getPuntoX()<<endl;
	cout<<punto1.getPuntoY()<<endl;
	
	system("pause");
	return 0;
}
