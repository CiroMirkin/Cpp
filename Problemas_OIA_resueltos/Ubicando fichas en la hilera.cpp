#include<iostream>
#include<vector>
using namespace std;

#define forr(n,i) for(int i=0; i<n; i++)

int hilera(vector <int> numeros, int k, vector <int>& fichas) {
	int cont1=0, cont2=0;
	forr(numeros.size(), i) {
		cont1 += numeros[i];
		i++;
		cont2 += numeros[i];
	}
	int max, maxsum=0;
	if(cont1 > cont2) {
		maxsum = cont1;
		forr(numeros.size(), i) {
			if(i > int(numeros.size())) break;
			fichas[i] = 1;
			i++;
		}
		if(k >= 1) {
				max = numeros[1];
				forr(numeros.size(), i) {
					i++;
					if(i > int(numeros.size())) break;
					if(numeros[i] > max) {
						max = numeros[i];
					}
				}
				forr(numeros.size(), i) {
					if(numeros[i] == max) {
						fichas[i] = 2;
						maxsum += max;
						break;
					}
				}
			
		}
	} 
	else {
		maxsum = cont2;
		forr(numeros.size(), i) {
			if(i > int(numeros.size())) break;
			i++;
			fichas[i] = 1;
		}
		if(k >= 1) {
				max = numeros[0];
				forr(numeros.size(), i) {
					if(i > int(numeros.size())) break;
					if(numeros[i] > max) {
						max = numeros[i];
					}
					i++;
				}
				forr(numeros.size(), i) {
					if(numeros[i] == max) {
						fichas[i] = 2;
						maxsum += max;
						break;
					}
				}
			
		}
	}
	
	return maxsum;
}

int main() {
	cout<<"> ";
	int n, k;
	cin>>n>>k;
	vector<int> numeros(n);
	vector<int> fichas(n, 0);

	forr(n, i) {
		cout<<">> ";
		cin>>numeros[i];
	}

	cout<<hilera(numeros, k, fichas);
	cout<<endl;
	forr(numeros.size(), i) {
		cout<<fichas[i]<<", ";
	}
	cout<<endl;
	return 0;
}

