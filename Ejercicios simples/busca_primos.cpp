#include<iostream>
using namespace std;

// Numero primo, es divisible por 1 y por si mismo

// Entrada int N

// Salida de primos hasta N

int main() {
	int n;
	int nums[] = {1,2,3,4,5,6,7,8,9,10};
	int cont=0, primo;
	
	cout<<"> ";
	cin>>n;
	
	cout<<endl;
	for(int i=0; i<n; i++) {
		int numero = nums[i];
		for(int k=0; k<10; k++) {
			if(numero % nums[k] == 0) {
				cont++;
			} 
		}
		if(cont == 2) {
			cout<<numero;
		}
		cont=0;
	}

	return 0;
}

