#include<iostream>
using namespace std;

// Leer N: 6

// Imprimir: suma de pares menos la suma de los impares hasta N contando N.
// (2+4+6)-(1+3+5) = 3

// Para 1 la salida es 1

int main(){
	int n, cont = 0;
	int nums[] = {1,2,3,4,5,6,7,8,9};
	int np=0, ni=0;
	
	cout<<"> ";
	cin>>n;
	
	if(n == 1) {
		cout<<1;
		return 0;
	}
	if(n == 0) {
		cout<<0;
		return 0;
	}
	
	for(int i=0; i<9; i++) {
		int numero = nums[i];
		if(numero % 2 == 0) {
			np += numero;
		} else {
			ni += numero;
		}
		if(n == numero) break;
	}
	cout<<np-ni;
	
	
	cout<<endl;
return 0; 
}

