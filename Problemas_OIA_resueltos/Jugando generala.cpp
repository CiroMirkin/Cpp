#include<iostream>
#include<vector>
using namespace std;

#define forr(n,i) for(int i=0; i<n; i++)

int generalapoints(int dados[5]) {
	int points =0;
	int dado = dados[0];
	forr(5,i) {
		if(dados[i] == dado) points++;
	}
	if(points == 5) {
		return 50;
	}
	return 0;
}

int poker (int dados[5]) {
	int points=0;
	if(dados[0] == dados[1] and dados[1] == dados[2] and dados[2] == dados[3]) {
		points++;
	} else if(dados[1] == dados[2] and dados[2] == dados[3] and dados[3] == dados[4]){
		points++;
	}
	if(points == 1) {
		return 40;
	}
	return 0;
}

int full(int dados[5]) {
	int points=0;
	
	if(dados[0] == dados[1] and dados[1] == dados[2] and dados[3] == dados[4] and dados[0] != dados[4]) {
		points++;
	}
	else if(dados[2] == dados[3] and dados[3] == dados[4] and dados[0] == dados[1] and dados[0] != dados[4]) {
		points++;
	}
	
	if(points == 1) {
		return 30;
	}
	
	return 0;
}

int escalera(int dados[5]) {
	int cont = 0;
	if(dados[0]+1 == dados[1]) {
		cont++;
	}
	if(dados[0] == 1 and dados[4] == 6) {
		cont+=2;
	}
	forr(5,i) {
		if(dados[i]+1 == dados[i+1]) {
			cont++;
		}
	}
	if(cont == 5) {
		return 20;
	}
	return 0;
}

vector<int> generala(int a, int b, int c, int d, int e) {
	int dados[5] = {a,b,c,d,e};
	int cNumeros = 5;
	int aux, min;
	for(int i=0; i<cNumeros; i++) {
		min = i;
		for(int j=i+1; j<cNumeros; j++) {
			if(dados[j] < dados[min]) {
				min = j;
			}
		}
		aux = dados[i];
		dados[i] = dados[min];
		dados[min] = aux;
	}

	int escalerap = escalera(dados), fullp = full(dados), pokerp = poker(dados), generalap = generalapoints(dados);	
	vector<int> numeros(10, 0);
	
	numeros[6] = escalerap;	
	numeros[7] = fullp;
	numeros[8] = pokerp;
	numeros[9] = generalap;
	
	forr(5, i) {
		int dado = dados[i];
		if(dado == 1) {
			numeros[0] += 1;
		}
		else if(dado == 2) {
			numeros[1] += 2;
		}
		else if(dado == 3) {
			numeros[2] += 3;
		}
		else if(dado == 4) {
			numeros[3] += 4;
		}
		else if(dado == 5) {
			numeros[4] += 5;
		}
		else if(dado == 6) {
			numeros[5] += 6;
		}
	}
	
	return numeros;
}

int main() {
	int dados[5];
	
	forr(5,i) cin>>dados[i];

	vector<int> resultado = generala(dados[0], dados[1], dados[2], dados[3], dados[4]);
	forr(10, i) cout<<resultado[i]<<",";
	
	return 0;
}
