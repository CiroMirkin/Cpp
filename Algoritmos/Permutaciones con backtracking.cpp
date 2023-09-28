#include<iostream>
#include<string>
using namespace std;

void permutaciones(string str, int i, int n) {
	if(i==n-1) {
		cout<<str<<endl;
		return;
	}
	for(int j=i; j<n; j++) {
		swap(str[i], str[j]);
		permutaciones(str, i+1, n);
		swap(str[i], str[j]);
	}
}

int main() {
	permutaciones("ABC", 0, 3);

	return 0;
}

