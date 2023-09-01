#include<iostream>
using namespace std;

int main() {
	
	int cNumeros = 5;
	int numeros[5] = { 4, 2, 3, 1, 5 };
	int dato = 4;
	
	bool flag = false;
	int i = 0;
	while(flag == false && i<cNumeros) {
		if(numeros[i] == dato) {
			flag = true;
		}
		i++;
	}
	
	if(flag) {
		cout<<"El numero existe en el arreglo";
	}

	return 0;
}
