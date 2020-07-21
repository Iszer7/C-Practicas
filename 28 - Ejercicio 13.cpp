//13. Hacer un que realize la serie fibonacci -> 1 1 2 3 5 8 13... n

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
	int n, x = 0, y = 1, z = 1;
	
	cout<<"Digite el numero de elementos: ";		cin>>n;
	
	cout<<"1 ";
	for(int i=1;i<n;i++){
		z = x + y;		
		cout<<z<<" ";	// z = 1		| z = 2		| z = 3		| z = 5						//1 1 2 3 5 8 13...
		x = y;			// x = 1		| x = 1		| x = 2		| x = 3
		y = z;			// y = 1		| y = 2		| y = 3		| y = 5
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
