#include <iostream>
#include <vector>
using namespace std;
vector<int>& Dectobin (int a, vector<int>& vector_a, int *ptrb){
	int temp_a = a;
	int b;
	for (b=0; b<= vector_a.size(); b++){
		vector_a [b] = temp_a % 2;
		temp_a = temp_a / 2;
		*ptrb= b;
		if ( temp_a == 0) {return vector_a;}
	}	
}
int main ()
{
	int a,ptrb;
	cin >> a;
	vector <int> vector_a(a);
	Dectobin(a, vector_a, &ptrb);
	for (int i = ptrb; i>=0; i--){
		cout << vector_a[i];}
	return 0;
}