#include<iostream>
using namespace std;

#define arrX 3 

void mostrarArreglo(int arr[][arrX], int arrLong);

int main() {
	int arrY = 2;
	int nums[arrY][arrX] = {{1,2,3}, {5,6,7}};
	mostrarArreglo(nums, arrY);
	
	return 0;
}

void mostrarArreglo(int arr[][arrX], int arrY) {
	for(int i=0; i<arrY; i++) {
		for(int j=0; j<arrX; j++) cout<<arr[i][j];
		cout<<endl;
	};
}
