#include <vector>

using namespace std;

#define forr(i,n) for(int i=0; i<int(n); i++)

void procesaMatriz(
    vector<vector<int> > matriz,
    vector<long long> &resultadoEnArreglo,
    vector<vector<long long> > &resultadoEnMatriz
) {
	resultadoEnArreglo[0] = 0;
	resultadoEnArreglo[1] = 0;
	resultadoEnArreglo[2] = matriz[0][0];
	resultadoEnArreglo[3] = matriz[0][0];

	forr(i, matriz.size()) {
		forr(j, matriz[i].size()) {
			resultadoEnArreglo[0] += matriz[i][j];
			resultadoEnArreglo[1] *= matriz[i][j];
			
			if(matriz[i][j] > resultadoEnArreglo[2]) {
				resultadoEnArreglo[2]= matriz[i][j];
			}
			if(matriz[i][j] <resultadoEnArreglo[3]) {
				resultadoEnArreglo[3]=matriz[i][j];
			}
		}
	}
	
	resultadoEnMatriz[0][0] = resultadoEnArreglo[0];
	resultadoEnMatriz[0][1] = resultadoEnArreglo[1];
	resultadoEnMatriz[1][0] = resultadoEnArreglo[2];
	resultadoEnMatriz[1][1] = resultadoEnArreglo[3];
}
