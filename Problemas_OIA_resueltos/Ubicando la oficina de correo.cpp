#include<iostream>
#include<vector>
using namespace std;

#define forr(i,n) for(int i=0; i<int(n); i++)

int correocentral(int n, vector<int>a,vector<int>b) {
	vector<int> paths(n,1);
	int m = a.size();
	forr(i,m) {
		paths[a[i]-1] += 1;
	}
	bool thereis = true;
	forr(i,n) {
		if(paths[i] == 1) thereis = false;
	}
	
	if(thereis){
		return n;
	}
	int aux=paths[0];
	forr(i,n) {
		if(paths[i] > aux) {
			aux = paths[i];
		}
	}
	return aux;
}

int main(){
	cout<<"> ";
	int n,m;
	cin>>n>>m;
	vector<int> a(m),b(m);
	forr(i,m) {
		cout<<">> ";
		cin>>a[i]>>b[i];
	}
	
	cout<<endl<<correocentral(n,a,b);

	return 0;
}

