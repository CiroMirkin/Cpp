#include<iostream>
using namespace std;

void mostrarArreglo(int arr[], int arrLong);

int main() {
	
	int nums[] = {1,2,3,4};
	mostrarArreglo(nums, 4);
	
	return 0;
}

void mostrarArreglo(int arr[], int arrLong) {
	for(int i=0; i<arrLong; i++) cout<<arr[i]<<" - ";
}
