#include<iostream>
using namespace std;

void mostrarNumero(int&);

int main() {
	int numero = 2023;
	mostrarNumero(numero);	
	return 0;
}

void mostrarNumero(int& numero) {
	cout<<numero;
}
