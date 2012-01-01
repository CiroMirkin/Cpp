#include<iostream>
#include<stdlib.h>
using namespace std;

// Numero primo, es divisible por 1 y por si mismo

// Entrada int N

// Salida de primos hasta N

int main() {
	int n;
	int *nums;
	int cont=0, primo;
	
	cout<<"> ";
	cin>>n;
	
	nums = new int[n];
	
	for(int i=0; i<n; i++) {
		nums[i] = i+1;
	}
	
	cout<<endl;
	for(int i=0; i<n; i++) {
		int numero = nums[i];
		for(int k=0; k<n; k++) {
			if(numero % nums[k] == 0) {
				cont++;
			} 
		}
		if(cont == 2) {
			cout<<numero<<" ";
		}
		cont=0;
	}
	
	delete[] nums;

	return 0;
}

