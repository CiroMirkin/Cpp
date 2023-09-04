#include<iostream>
using namespace std;

// Entrada: Tres numeros
// Salida: Ordenados de menor a mayor

int main() {
	cout<<"> ";
	int a,b,c;
	cin>>a>>b>>c;

	if(a<b and a<c) {
		cout<<a;
		if(b<c) {
			cout<<b<<c;
		} else {
			cout<<c<<b;
		}
	}
	else if(b<a and b<c) {
		cout<<b;
		if(a<c) {
			cout<<a<<c;
		} else {
			cout<<c<<a;
		}
	}
	else {
		cout<<c;
		if(a<b) {
			cout<<a<<b;
		} else {
			cout<<b<<a;
		}
	}

	return 0;
}


