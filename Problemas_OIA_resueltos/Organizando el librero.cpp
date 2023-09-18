#include<iostream>
#include<vector>

using namespace std;

#define forr(n,i) for(int i=0; i<int(n); i++)

// orden [2] 0,altura final 1, cantidad de ordenamientos

bool puedo(vector<int> bases, vector<int> libros) {
	int n = int(bases.size());

	int aux, min;
	for(int i=0; i<n; i++) {
		min = i;
		for(int j=i+1; j<n; j++) {
			if(libros[j] < libros[min]) {
				min = j;
			}
		}
		aux = libros[i];
		libros[i] = libros[min];
		libros[min] = aux;
	}

	for(int i=0; i<n; i++) {
		min = i;
		for(int j=i+1; j<n; j++) {
			if(bases[j] > bases[min]) {
				min = j;
			}
		}
		aux = bases[i];
		bases[i] = bases[min];
		bases[min] = aux;
	}

	int al1, al2, c=0;
	al1 = bases[0]+libros[0];
	forr(n, i) {
		al2 = bases[i]+libros[i];
		if(al1 == al2) {
			c++;
		}
	}

	if( c == n) {
		return false;
	}
	return true;
}

vector<int> librero(vector<int> bases, vector<int> libros, vector<int>& orden) {
	vector<int> lib(2);
	if(puedo(bases, libros)) {
		lib[1]=0;
		lib[0] = -1;
		return lib;
	}
	
	vector<int> basesc = bases, librosc = libros;
	
	int altura = 0, posi=0;
	int n = int(libros.size());
	int pos1, pos2;
	forr(n, i) {
		pos1 = bases[i] + libros[i];
		forr(n,h) {
			h+=i;
			if(h>n) break;
			
			int base = bases[h];
			forr(n,j) {
				j+=i;
				if(j>n) break;
			
				pos2 = base + libros[j];
				if(pos1 == pos2) {
					cout<<endl<<pos1;
				}
			}
		}
	}

	lib[1]= posi;
	lib[0] = altura;
	return lib;
}

int main() {
	cout<<"> ";
	int n;
	cin>>n;

	vector<int> alturabases(n);
	vector<int> alturalibros(n);
	vector<int> orden(n,0);

	forr(n,i) {
		cout<<">> ";
		cin>>alturabases[i];
	}

	forr(n,i) {
		cout<<">>> ";
		cin>>alturalibros[i];
	}
	vector<int> lib = librero(alturabases, alturalibros, orden);

	cout<<" -- "<<lib[0]<<" "<<lib[1]<<endl;

	forr(n,i) {
		cout<<orden[i]<<" ";
	}




	return 0;
}
