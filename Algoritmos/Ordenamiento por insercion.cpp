#include<iostream>
using namespace std;

int main() {

	int cNumeros = 5;
	int numeros[5] = { 4, 2, 3, 1, 5 };
	
	int pos, aux;
	for(int i=0; i<cNumeros; i++) {
		pos = i;
		aux = numeros[i];
		
		while(pos>0 and numeros[pos-1]>aux) {
			numeros[pos] = numeros[pos-1];
			pos--;
		}
		numeros[pos] = aux;
	}
	
	
	for(int i=0; i<cNumeros; i++) {
		cout<<numeros[i];
	}

	return 0;
}

