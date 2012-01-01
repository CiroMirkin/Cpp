#include<iostream>

#include<stdlib.h>

using namespace std;

int main() {
	int n;
	int *nums;
	
	cout<<"> ";
	cin>>n;
	
	nums = new int[n];
	for(int i=0; i<n; i++) {
		nums[i] = i+1;
	}
	
	delete[] nums;

	return 0;
}

