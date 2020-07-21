//10. Mostrar los meses del año, pidiendole al usuario un numero entre (1-12), y mostrar el mes que corresponnde.

#include<iostream>

using namespace std;

int main(){
	int mes;
	
	cout<<"Digite un mes entre (1-12): ";	cin>>mes;
	
	switch(mes){
		case 1: cout<<"\nEnero";			break;
		case 2: cout<<"\nFebrero";			break;
		case 3: cout<<"\nMarzo";			break;
		case 4: cout<<"\nAbril";			break;
		case 5: cout<<"\nMayo";				break;
		case 6: cout<<"\nJunio";			break;
		case 7: cout<<"\nJulio";			break;
		case 8: cout<<"\nAgosto";			break;
		case 9: cout<<"\nSeptiembre";		break;
		case 10: cout<<"\nOctubre";			break;
		case 11: cout<<"\nNoviembre";		break;
		case 12: cout<<"\nDiciembre";		break;
		default: cout<<"\nNo existe un mes que pertenezca al rango 1-12";
	}
	return 0;
}
