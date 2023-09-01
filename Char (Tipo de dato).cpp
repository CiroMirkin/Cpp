#include<iostream>
#include<string.h>
using namespace std;

int main() {
	
	/* Crear y guardar */
	char nombreDeMiGato [] = "Kim";
	cout<<nombreDeMiGato;

	cout<<"\n\n--------------\n\n";
	/* Ingresar contenido*/


	char nombreDePersona[20];
	cout<<"Escriba su nombre: ";
	cin.getline(nombreDePersona, 20, '\n');
	
	cout<<nombreDePersona;
	
	cout<<"\n\n--------------\n\n";
	/* Longitud */
	
	char texto[] = "yo yo mr.White!";
	int longitudDelTexto = 0;
	
	// Utilizamos una funcion
	// En la cuenta que hace las mayusculas valen 2
	longitudDelTexto = strlen(texto);
	
	cout<<"La longitud del texto es: "<<longitudDelTexto;
	

	cout<<endl;	
	return 0;
}

