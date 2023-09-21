#include<iostream>
#include<vector>
using namespace std;

int main() {
	int Nnums;
	cout<<"> ";
	cin>>Nnums;
	vector<int> nums(Nnums);
	
	cout<<"> "<<endl;
	for(int i=0; i<Nnums; i++) {
		cin>>nums[i];
	}
	
	cout<<endl;
	
	int count;
	vector<int> repetidos(Nnums/2);
	
	for(int i=0; i<Nnums; i++) {
		count = 0;
		int n = nums[i];
		for(int j=0; j<Nnums; j++) {
			if(n == nums[j] and n != 0){
				count++;
				nums[j] = 0;	
			}
		}
		if(count>1 and n!= 0) {
			cout<<n<<" aparece "<<count<<" veces"<<endl;
		} 
		else if(n!= 0) {
			cout<<n<<" aparece una vez"<<endl;
		}
	}

	return 0;
}

