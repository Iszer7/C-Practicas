/*12. Realice una funcion que tome como parametros un vector y su tamaño y diga si el vector esta ordenado crecientemente.
 Sugerencia: Compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual que el elemento que le precede en el vector.
 */
 
 #include<iostream>
 #include<stdlib.h>
 
 using namespace std;
 
 //Prototipo de la funcion
 
 void pedirDatos();
 
 void ordenamiento(int vec[], int);
 
 
 int vec[100],tam;
 
 int main(){
 	
 	pedirDatos();
 	ordenamiento(vec,tam);
 	
 	system("pause");
 	return 0;
 }
 
 //Definicion de la funcion
 
 void pedirDatos(){
 	cout<<"Digite tamaño del vector: ";			cin>>tam;
 	
 	for(int i=0;i<tam;i++){
 		cout<<i+1<<". Digite un numero: ";		cin>>vec[i];
 	}
 }
 
 void ordenamiento(int vec[], int tam){
 	bool band = false;
 	
 	for(int i=0;i<tam;i++){
 		
 		if(vec[i] < vec[i-1]){
 			band = true;
 		}
 	}
 	
 	if(band == false){
 		cout<<"\nEsta ordenado crecientemente"<<endl<<endl;
 	} else {
 		cout<<"\nNo esta ordenado crecientemente"<<endl<<endl;
 	}
 }
