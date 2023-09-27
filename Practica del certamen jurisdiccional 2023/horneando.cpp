#include<iostream>

//Enunciado dado en la practica del certamen jurisdiccional 2023

/* NO PASA LAS PRUEVAS DEL JUEZ */

void alarma();

struct hornoBase {
	int temperaturaMaxima;
} horno = { 0 };

void inicializar(int temperaturaMaxima) {
	if(temperaturaMaxima >= 200) {
		horno.temperaturaMaxima = temperaturaMaxima;
	}
}

void cambiarTemperatura(int nuevaTemperatura) {
	if(nuevaTemperatura > horno.temperaturaMaxima) {
		alarma();
		std::cout<<"suena la alarma\n";
	} else std::cout<<"no suena la alarma\n";
}


