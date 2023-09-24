#include<iostream>
#include<fstream>
#include<vector>
#include<string>
using namespace std;

int main() {
	
	vector<string> in(4);
	ifstream input("horneando.in");
	if(input.is_open()) {
		for(int i=0; i<4; i++) getline(input, in[i]);
	}
	input.close();
	
	cout<<in[0];
	cout<<in[1];
	cout<<in[2];
	cout<<in[3];
	return 0;
}

