#include<iostream>
using namespace std;

// Prototipo
int sumarDosNumeros(int a, int b);
void mostrarResultadoDeLaSumaPorPantall(int resultado);

int main() {
	int suma = sumarDosNumeros(2, 2);
	
	// Mostramos el resultado como lo hacemos siempre
	cout<<suma;
	cout<<endl<<endl;
	
	// Le damos el resultado a una funcion para que lo muestre
	mostrarResultadoDeLaSumaPorPantall(suma);

	return 0;
}

// Definicion
int sumarDosNumeros(int a, int b) {
	int suma = a + b;
	return suma;
}

void mostrarResultadoDeLaSumaPorPantall(int resultado) {
	cout<<"El resultado de la suma es: "<<resultado;
	cout<<endl<<endl;
}
