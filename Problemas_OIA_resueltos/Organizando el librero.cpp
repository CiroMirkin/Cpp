#include<iostream>
#include<vector>

using namespace std;

#define forr(n,i) for(int i=0; i<int(n); i++)

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
	int pos1, pos2, contador, i=0, ii=0, oldc;
	bool control=false;

	contador=1;

	while(true) {
		if(i>n) break;
		if(contador==n) break;

		oldc = contador;
		pos1 = basesc[i] + librosc[i];
		orden[i] = i+1;

//		cout<<basesc[i]<<" + "<<librosc[i]<<" = "<<pos1<<endl;

		basesc[i] = 0;
		librosc[i] = 0;

		forr(n,h) {
			int base = basesc[h];
			if(base>0) {

				forr(n,j) {
					int libro = librosc[j];
					pos2 = base + libro;

					if(pos1 == pos2 and libro>0) {
						orden[h] = j+1;
						i++;
//						cout<<base<<" + "<<libro<<" = "<<pos1<<endl<<"index: "<<i<<endl;

						basesc[h] = 0;
						librosc[j] = 0;

						contador++;
						control = true;
					}
					if(contador == n or control) {
						control = false;
						break;
					}
				}
			}
			if(contador == n) break;
		}
		
		if(i == n) {
			i=0;
		} 
		else if(oldc == contador) {
			basesc = bases;
			librosc = libros;
			contador=1;
			i++;
		}
	}

	altura = pos1;

	lib[0] = altura;
	lib[1]= posi; // 1, cantidad de ordenamientos
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

	cout<<lib[0]<<" "<<lib[1]<<endl;

	forr(n,i) {
		cout<<orden[i]<<" ";
	}




	return 0;
}
