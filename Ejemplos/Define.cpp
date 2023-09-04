#include<iostream>
#include<vector>
using namespace std;

#define forn(i, n) for(int i=0; i<int(n); i++)

int main() {
	int nums[4] = { 1,2,3,4 };	
	forn(i, 4) {
		cout<<nums[i];
	}
	
	cout<<endl;
	
	vector<int> nums2(4);
	forn(i, nums2.size()) {
		cin>>nums2[i];
	}
	forn(i, nums2.size()) {
		cout<<nums2[i];
	}
		
	return 0;
}
