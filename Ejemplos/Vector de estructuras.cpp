#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define forn(i, n) for(int i=0; i<int(n); i++)

struct Alumno {
	string nombre, apellido;
	char divicion;
	int edad;
};

void mostrarNombreCompleto(Alumno a);

int main() {

	vector<Alumno> alumnos(2);

	forn(i, 2) {
		cout<<"Nombre: ";
		cin>>alumnos[i].nombre;
		cout<<"Apellido: ";
		cin>>alumnos[i].apellido;
		cout<<"Divicion: ";
		cin>>alumnos[i].divicion;
		cout<<"edad: ";
		cin>>alumnos[i].edad;
		cout<<endl;
	}

	cout<<endl;

	forn(i, 2) {
		Alumno a = alumnos[i];
		cout<<"Nombre: "<<a.nombre<<endl;
		cout<<"Apellido: "<<a.apellido<<endl;
		cout<<"Divicion: "<<a.divicion<<endl;
		cout<<"edad: "<<a.edad<<endl<<endl;
	}

	forn(i, 2) mostrarNombreCompleto(alumnos[i]);

	return 0;
}

void mostrarNombreCompleto(Alumno a) {
	cout<<a.nombre + " " + a.apellido + "\n";
}
