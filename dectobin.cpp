#include <iostream>
#include <vector>
using namespace std;
vector<int> Dectobin (int a, vector<int> vector_a, int *ptrb){
	int temp_a = a;
	int b;
	for (b=0; b<= vector_a.size(); b++){
		vector_a [b] = temp_a % 2;
		temp_a = temp_a / 2;
		*ptrb= b;
	//	cout << vector_a[b];
		if ( temp_a == 0) {//cout <<"вектор в функции"<< vector_a[3];
						  break;}
	}
	for (b = b; b>=0; b--){
		cout << vector_a[b];}
}
int main ()
{
	int a,ptrb;
	cin >> a;
	vector <int> vector_a(a*a);
	//cout <<"  "<< ptrb;
	Dectobin(a, vector_a, &ptrb);
	cout <<endl;
	//cout <<"vector in main"<< vector_a[3];
	for (int i = ptrb+1; i>=0; i--){
	//	cout << vector_a[0];}
	}return 0;
}