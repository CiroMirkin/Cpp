#include<iostream>
#include<string.h>
#include<stdlib.h>
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
	int longitudDelTexto = strlen(texto);
	

	cout<<"La longitud del texto es: "<<longitudDelTexto;
	
	
	/* Convercion a entero */
	char caracteres[] = "12.5";
	int numero = atoi(caracteres);
	float flotante = atof(caracteres);
	cout<<endl<<numero<<endl<<flotante;
	
	/* Pasar a minusculas */
	
	char palabra[] = "PATO";
	strlwr(palabra);
	
	cout<<endl<<palabra;

	/* Copia de contenido */
	
	char palabra1[] = "Duck";
	char palabra2[10];
	
	strcpy(palabra2, palabra1);
	
	cout<<endl<<palabra1<<"  "<<palabra2<<endl<<endl;
	
	/* Comparar cadenas */
	
	char a[] = "hi";
	char b[] = "ey";
	
	if(strcmp(a, b) == 0) {
		cout<<"iguales";
	} else {
		cout<<"na que ve";
	}
	
	
	/* Invertir */
	
	char cad[] = "che";
	strrev(cad);
	cout<<endl<<cad;
	
	/* Comparar cadenas */

	cout<<endl;	
	return 0;
}

