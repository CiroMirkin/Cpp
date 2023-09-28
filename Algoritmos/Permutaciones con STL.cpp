#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void permutaciones(string str, int n, string resultado) {
	if(n==1) {
		cout<<resultado+str<<" ";
		return;
	}
	for(int i=0; i<n; i++) {
		permutaciones(str.substr(1), n-1, resultado+str[0]);
		rotate(str.begin(), str.begin()+1, str.end());
		}
}

int main() {
	string str = "ABC", result = "";
	int strN = int(str.size());
	permutaciones(str, strN, result);

	return 0;
}

