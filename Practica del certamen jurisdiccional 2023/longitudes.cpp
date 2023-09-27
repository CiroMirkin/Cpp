#include <vector>
#include <string>

using namespace std;

//Enunciado dado en la practica del certamen jurisdiccional 2023

vector<int> dameLongitudes(vector<string> v)
{
	int n = int(v.size());
    vector<int> longitudes(n);
    for(int i=0;i<n;i++) longitudes[i] = int(v[i].size());
    return longitudes;
}
