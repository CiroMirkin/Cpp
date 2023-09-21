#include<iostream>
using namespace std;

// Crear una funcion que encuentre el minimo comun divisor de dos numeros

int mcd(int a, int b) {
	if(b==0) {
		return a;
	}
	return mcd(b, a%b);
}

int main(){
	cout<<mcd(20, 14);

	return 0;
}

