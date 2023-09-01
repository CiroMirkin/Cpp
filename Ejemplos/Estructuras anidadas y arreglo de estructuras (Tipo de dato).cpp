#include<iostream>
using namespace std;

struct estructuraHijo {
	int numero;
};

struct estructuraPadre {
	char nombre[10];
	struct estructuraHijo hijo;
} arregloDeEstructuras[2];

int main() {

	for(int i=0; i<2; i++) {
		cout<<"Ingrese su nombre: ";
		cin.getline(arregloDeEstructuras[i].nombre, '\n');

		cout<<"Ingrese un numero: ";
		cin>>arregloDeEstructuras[i].hijo.numero;
		
		cout<<endl;
		fflush(stdin); // Esta linea vacia el buffer
	}
	
	cout<<endl<<endl;
	
	for(int i=0; i<2; i++) {
		cout<<"Nombre: "<<arregloDeEstructuras[i].nombre<<endl;
		cout<<"Numero: "<<arregloDeEstructuras[i].hijo.numero<<endl<<endl;
	}

	cout<<endl;
	return 0;
}
