#include<iostream>
#include<vector>
using namespace std;

#define forr(n,i) for(int i=0; i<n; i++)

// N muestras de sangr
// grilla de N posiciones

int analizar(vector< vector<int> >& muestras) {
		int move = 0;
	forr(muestras.size(), i) {
		int muestran = muestras[i].size();

		forr(muestran, j) {
			int muestra = muestras[i][j];
			int cont=0;

			forr(muestras.size(), y) {
				if(muestras[y][0] == muestra || muestras[y][int(muestras[y].size())-1] == muestra) {
					cout<<muestra<<" - "<<muestras[y][0]<<endl;
					cout<<muestra<<" - "<<muestras[y][int(muestras[y].size())-1]<<endl<<endl;
					cont++;
				}
			}
			if(cont>=2) {
				move++;
				forr(muestras.size(), y) {
					if(muestra == muestras[y][0]) {
						forr(muestras[y].size(), x) {
							muestras[y][x] == muestras[y][x+1];
							if(x+1 == int(muestras[y].size())) {
								muestras[y].pop_back();
								continue;
							}
						}
					} else if(muestra == muestras[y][int(muestras[y].size())-1]) {
						muestras[y].pop_back();
					}
				}
			}
			cout<<muestra<<" "<<cont<<endl;
			cont=0;
		}
	}
	move--;
	cout<<"  >>>>>> "<<move;
	return move;
}

int main () {
	int n; // cantidad de filas Y
	cout<<"> ";
	cin>>n;
	vector< vector<int> > muestras(n);

	forr(n, i) {
		int nn;
		cout<<">>  ";
		cin>>nn;
		vector<int> fila;
		forr(nn, j) {
			int nnn;
			cout<<">>> ";
			cin>>nnn;
			fila.push_back(nnn);
		}
		muestras[i] = fila;
	}

	analizar(muestras);

	return 0;
}
