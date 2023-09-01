#include<iostream>
using namespace std;

int main() {
	
	int cNumeros = 5;
	int numeros[5] = { 1,2,3,4,5 };
	int dato = 3;
	
	bool flag = false;
	int inf = 0, sup = cNumeros, mid;
	while(inf <= sup) {
		mid = (inf + sup) / 2;
		if(numeros[mid] == dato) {
			flag = true;
			break;
		}
		if(numeros[mid] > dato) {
			sup = mid;
			mid = (inf + sup) / 2;
		}
		if(numeros[mid] < dato) {
			inf = mid;
			mid = (inf + sup) / 2;
		}
	}
	
	
	if(flag) {
		cout<<"El numero existe en el arreglo";
	}

	return 0;
}
