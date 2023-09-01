#include<iostream>
using namespace std;

struct infoUsuario {
	char nombre[16];
	int edad;
}
usuario1 = {
	"Ciro",
	17
}, 
usuario2;

int main() {
	
	// Mostrar
	cout<<"nombre: "<<usuario1.nombre<<endl;
	cout<<"Edad: "<<usuario1.edad<<endl<<endl<<endl;
	
	// Guardar
	cout<<"Ingrese su nombre: ";
	cin.getline(usuario2.nombre, 16, '\n');

	cout<<"Ingrese su edad: ";
	cin>>usuario2.edad;

	cout<<"\n\nnombre: "<<usuario2.nombre<<endl;
	cout<<"Edad: "<<usuario2.edad<<endl;


	cout<<endl;
	return 0;
}

