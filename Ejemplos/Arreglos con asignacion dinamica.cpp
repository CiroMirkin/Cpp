#include<iostream>
#include<stdlib.h>
using namespace std;

/*

	new -> Reserva el numero de bytes solicitado por una declaracion
	delete -> Libera los bytes reservados
	
*/


int main() {
	
	int largoArray, *arregloDinamico;
	
	cout<<"ingrese el largo del arreglo: ";
	cin>>largoArray;
	
	// Reservamos 
	arregloDinamico = new int[largoArray];
	
	// Rellenamos el arreglo
	for(int i=0; i<largoArray; i++) {
		cout<<"ingrese un numero: ";
		cin>>arregloDinamico[i];
	}
	
	// Mostramos el contenido del arreglo
	for(int i=0; i<largoArray; i++) {
		cout<<arregloDinamico[i]<<" - ";
	}
	
	// Liberamos
	delete[] arregloDinamico;
	

	return 0;
}

