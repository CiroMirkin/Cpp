#include<iostream>
#include<string.h>
#include<ctype.h>
using namespace std;

// Si la entrada es "pollo".

// La salida sera:
// *******
// *pollo*
// *******


int main(){
	int longitud=0;
	char in[10];

	cout<<"> ";
	cin>>in;
	
	for(int i=0; i<10; i++) {
		if(isalpha(in[i]) != 0) longitud++;
	}

	for(int i=0; i<longitud+2; i++) {
		cout<<"*";
	}
	cout<<endl<<"*";
	for(int i=0; i<longitud; i++) {
		cout<<in[i];
	}
	cout<<"*"<<endl;
	for(int i=0; i<longitud+2; i++) {
		cout<<"*";
	}
	
	cout<<endl;
	return 0;
}

