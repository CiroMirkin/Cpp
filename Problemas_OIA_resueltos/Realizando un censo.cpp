#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int decada(int fecha);
bool esmayor(int edad);
string nombrecompleto(string nombre, string apellido);
int cantidadmayores(int edades[], int cedades);

int main() {
	cout<<"> ";
	int op, param, *edades;
	cin>>op;
	
	if(op == 1) {
		cin>>param;
		cout<<decada(param);
	}
	else if(op == 2) {
		cin>>param;
		cout<<esmayor(param);
	}
	else if(op == 3) {
		string name, lname;
		cin>>name>>lname;
		cout<<nombrecompleto(name, lname);
	}
	else if(op == 4) {
		cin>>param;
		edades = new int[param];
		for(int i=0; i<param; i++) {
			cin>>edades[i];
		}
		cout<<cantidadmayores(edades, param);
		delete[] edades;
	}
	
	return 0;
}

int decada(int fecha) {
	int decada = fecha%100;
	return decada;
}

bool esmayor(int edad) {
	if(edad >= 18) {
		return true;
	}
	return false;
}

string nombrecompleto(string nombre, string apellido) {
	return nombre + " " + apellido;
}

int cantidadmayores(int edades[], int cedades) {
	int cantMayores = 0;
	
	for(int i=0; i<cedades; i++) {
		if(esmayor(edades[i])) {
			cantMayores++;
		}
	}
	return cantMayores;
}
