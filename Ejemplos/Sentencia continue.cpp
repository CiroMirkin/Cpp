#include<iostream>
using namespace std;

int main() {
	
	int i=0;
	
	while(i<10) {
		i++;
		cout<<"> ";
		if(i>=5) continue; // Todo lo que este despues de esta linea se va a omitir, se saltara directamente a la condicion del while(i<10)s
		cout<<"Estamos antes del 5"<<endl;
	}
	
	return 0;
}
