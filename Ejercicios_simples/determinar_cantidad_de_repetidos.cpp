#include<iostream>
#include<vector>
using namespace std;

// Entrada: N cantidad de numeros
// Salida: la cantidad de numeros repetidos

int main() {
	int Nnums;
	cout<<"> ";
	cin>>Nnums;
	vector<int> nums(Nnums);
	
	cout<<"> "<<endl;
	for(int i=0; i<Nnums; i++) {
		cin>>nums[i];
	}
	
	int count=0;
	int countRepetidos = 0;
	vector<int> repetidos(Nnums/2);
	
	for(int i=0; i<Nnums; i++) {
		count=0;
		int n = nums[i];
		for(int j=0; j<Nnums; j++) {
			if(n == nums[j] and n != 0){
				count++;
				nums[j] = 0;	
			}
		}
		if(count>1 and n != 0) {
			countRepetidos += count;
		}
	}
	
	cout<<"Repetidos: "<<countRepetidos;

	return 0;
}

