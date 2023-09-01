#include<iostream>
using namespace std;

int main() {
	
	/* Crear y mostrar el contenido de un arreglo */
	
	int cantidadDeNumeros = 5;
	int numeros [cantidadDeNumeros] = { 1, 2, 3, 4, 5 };

	// Al recorrer un arreglo i tiene que empezar en 0
	// Esto porque los arreglos empiezan desde el 0
	
	for(int i = 0; i<cantidadDeNumeros; i++) {
		int numero = numeros[i];
		cout<<numero<<" ";
	}
	
	cout<<"\n\n--------------\n\n";
	
	/* Guardar datos en un arreglo */
	
	int cantidadDeNumeros2 = 3;
	int numeros2 [cantidadDeNumeros2];
	
	for(int i = 0; i<cantidadDeNumeros2; i++) {
		cout<<"Ingrese un numero: ";
		cin>>numeros2[i];
	}
	
	cout<<endl;
	
	// Ahora mostramos los datos que ingresamos

	for(int i = 0; i<cantidadDeNumeros2; i++) {
		int numero = numeros2[i];
		cout<<numero<<" ";
	}
	
	cout<<"\n\n--------------\n\n";

	/* Arreglos bidimencionales */
	
	// Este tipo de arreglos es asi matris [Y][X]
	
	int matris [2][4];
	
	// El primer ciclo reccorre el eje Y mientras que el segundo el eje X
	
	for(int i = 0; i<2; i++) {
		for(int j = 0; j<4; j++) {
			cout<<"ingrese un numero: ";
			cin>>matris[i][j];
		}
	}
	
	
	cout<<endl;
	
	// Mostramos la matris al usuario
	
	for(int i = 0; i<2; i++) {
		for(int j = 0; j<4; j++) {
			cout<<matris[i][j];
		}
		cout<<endl;
	}


	cout<<endl;
	return 0;
}

