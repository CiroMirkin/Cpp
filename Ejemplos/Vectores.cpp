#include<iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> nums(4);

	cout<<"Tamanno: "<<nums.size()<<endl;

	nums[0] = 1;
	nums[1] = 2;
	nums[2] = 3;
	nums[3] = 3;

	cout<<nums[0]<<endl;

	nums.resize(2);

	cout<<nums.size()<<endl;

	nums.push_back(80);

	cout<<nums[int(nums.size())-1]<<endl;

	nums.pop_back();

//	for(int i : nums) cout<<i<<" ";

	/* Bidimencionales */

//	int columnas = 3;
//	int filas = 2;
//	vector<vector<int>> matriz(columnas, vector<int>(filas));



	return 0;
}

