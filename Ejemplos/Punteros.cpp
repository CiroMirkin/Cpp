#include<iostream>
using namespace std;

int main() {
	
	int numero;
	int *direccionDelNumero;
	
	numero = 18;
	direccionDelNumero = &numero;
	
	// Mostrar
	cout<<"Contenido de la direccion: ";
	cout<<*direccionDelNumero;
	
	cout<<endl<<"Direccion que almacena la variable: ";
	cout<<direccionDelNumero;
	
	
	cout<<endl<<endl<<endl;
	/* Arreglos */

	int num[] = { 1, 2, 3 };
	int *dirNum; 
	
	dirNum = num;
	
	// Ver contenido
	for(int i=0; i<3; i++) {
		cout<<"numero: "<<*dirNum++;
		cout<<endl;
	}
	// Ver direccion
	for(int i=0; i<3; i++) {
		cout<<endl;	
		cout<<"Direccion del numero: "<<dirNum++;
	}
	return 0;
}

