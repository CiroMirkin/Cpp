#include <vector>
#include <string>

using namespace std;

//Enunciado dado en la practica del certamen jurisdiccional 2023

/* NO PASA LAS PRUEVAS DEL JUEZ */

void duplilong(vector<string> &palabras, int K, vector<int> & longitudes) {
	int n = int(palabras.size());
	for(int i=0; i<K; i++) {
		longitudes[i] = int(palabras[i].size());
	}
	for(int i=K-1; i<n; i++) {
		palabras[i] += palabras[i];
	}
}

