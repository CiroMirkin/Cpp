#include<iostream>
#include<string>
#include<vector>
using namespace std;

#define forr(n,i) for(int i=0; i<int(n);i++)

//	GOL - PALO - AFUERA

vector<string> palogol(vector<int>x, vector<int>y) {
	vector<string> respuesta(int(x.size()));
	
	forr(x.size(), i) {
		if(x[i] > 0 and x[i] < 734 and y[i] < 232 and y[i] > 0) {
			respuesta[i] = "GOL";
		}
		else if (y[i] <= 232 and (x[i] <= 734 and x[i] >= 0)) {
			respuesta[i] = "PALO";
		}
		else {
			respuesta[i] = "AFUERA";
		}
	}
	
	return respuesta;
}

int main(){
	int n;
	cin>>n;
	
	vector<int> x(n);
	vector<int> y(n);
	
	forr(n,i) {
		cin>>x[i]>>y[i];
	}
	
	vector<string> resultado(n);
	forr(n, i){
		resultado[i] = palogol(x,y)[i];
	}
	
	forr(n,i) cout<<resultado[i]<<" ";
	 
	return 0;
}
