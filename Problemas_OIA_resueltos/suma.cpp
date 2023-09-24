#include <vector>

using namespace std;

//Enunciado dado en la practica del certamen jurisdiccional 2023

long long suma(vector<int> v)
{
	long sum=0;
   for(int i=0; i<int(v.size()); i++) sum+=v[i];
   return sum;
}
