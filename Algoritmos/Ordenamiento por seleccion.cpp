#include<iostream>
using namespace std;

int main() {
	
	int cNumeros = 5;
	int numeros[5] = { 4, 2, 3, 1, 5 };
	
	int aux, min;
	for(int i=0; i<cNumeros; i++) {
		min = i;
		for(int j=i+1; j<cNumeros; j++) {
			if(numeros[j] < numeros[min]) {
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	
	for(int i=0; i<cNumeros; i++) {
		cout<<numeros[i];
	}

	return 0;
}

