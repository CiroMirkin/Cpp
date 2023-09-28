//Enunciado dado en la practica del certamen jurisdiccional 2023

void alarma();

struct hornoBase {
	int temperaturaMaxima;
} horno = { 0 };

void inicializar(int temperaturaMaxima) {
	horno.temperaturaMaxima = temperaturaMaxima;
}

void cambiarTemperatura(int nuevaTemperatura) {
	if(nuevaTemperatura > horno.temperaturaMaxima) {
		alarma();
	} 
}
