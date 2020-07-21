//Comparar cadenas - funcion strcmp()					- Tambien compara alfabeticamente

#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main(){
	char palabra1[] = "Hola";
	char palabra2[] = "Hola";
	char palabra3[] = "Diego";
	char palabra4[] = "diego";
	char palabra5[] = "becerro";
	char palabra6[] = "avion";
	
	//Son iguales?
	if(strcmp(palabra1,palabra2) == 0){				// 0 == iguales 	|	1 == Diferentes
		cout<<"Ambas cadenas son iguales=>       "<<"palabra1: "<<palabra1<<" | palabra2: "<<palabra2<<endl<<endl;
	}
	
	//Son diferentes?
	if(strcmp(palabra3,palabra4) != 0){				
		cout<<"Ambas cadenas son distintas=>       "<<"palabra3: "<<palabra3<<" | palabra4: "<<palabra4<<endl<<endl;
	}	
	
	//Cual es mayor alfabeticamente?
	if(strcmp(palabra5,palabra6) > 0){
		cout<<palabra5<<" esta despues alfabeticamente"<<endl;
	}
	
	getch();
	return 0;
}
