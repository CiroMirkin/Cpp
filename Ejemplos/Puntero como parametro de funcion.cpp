#include<iostream>
using namespace std;

void cambiarValor(int *n, int nn){
	*n = nn;
}

int main() {
	
	int n = 1;
	int *np;
	np = &n;
	
	cout<<n<<" - ";
	cambiarValor(np, 7); // Pasando puntero
	cout<<n<<" - ";
	cambiarValor(&n, 5); // Pasando direccion
	cout<<n<<" - ";
	
	return 0;
}

