#include <string>
#include <vector>

using namespace std;

//Enunciado dado en la practica del certamen jurisdiccional 2023

string preguntar(int i);

int adivina() {
	vector<int> nums(10);
    for(int i=0;i<10;i++) nums[i] = i+1;
    
    int inf = 0, sup = 10, mid;
	mid = (inf + sup) / 2;
	while(true) {
		string rta = preguntar(nums[mid]);
		if(rta == "igual") {
			return nums[mid];
		}
		else if(rta == "menor") {
			inf = mid;
			mid = (inf + sup) / 2;
		}
		else {
			sup = mid;
			mid = (inf + sup) / 2;
		}
	}
}
