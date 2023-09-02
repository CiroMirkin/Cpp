#include<iostream>
using namespace std;

void verVector(int arr[], int sizeArr);

int main() {
	
	const int n = 5;
	int arr[] = { 1,2,3 };
	
	verVector(arr, n);	

	return 0;
}

void verVector(int arr[], int sizeArr) {
	cout<<arr[2];
}
