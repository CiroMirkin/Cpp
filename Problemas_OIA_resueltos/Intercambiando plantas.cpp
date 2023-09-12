#include<iostream>
#include<vector>
using namespace std;

#define forr(n,i) for(int i=0; i<n; i++)

int plantas(vector<int> h) {
	int hs = int(h.size());
	int pi = 1, aux;
	int count=0;
	forr(hs, i) {
		int ap = h[pi];
		int pinext = pi+1;
		if(ap < h[pi-1] and ap < h[pi+1] and pinext != hs) {
			aux = h[pi-1];
			h[pi-1] = h[pi];
			h[pi] = aux;
			count++;
		}
		pi++;
		if(pi > hs) break;

	}

	forr(hs, i) cout<<h[i]<<" ";

	return count;
}

int main() {
	int n;
	cin>>n;

	vector<int> plantasl(n);

	forr(n,i) {
		cin>>plantasl[i];
	}

	cout<<endl<<plantas(plantasl);

	return 0;
}

