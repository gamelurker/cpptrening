#include <iostream>
using namespace std;
class linked_Testing {
private:
	int var, *ptrvar;
public:
	linked_Testing(){
		var =123;
	ptrvar= &var;
	cout << "значение =\t" <<var;
	cout << "место в памяти=\t" << ptrvar;
	}
};
int main ()
{;
while (true){
	linked_Testing obj1;
}
}
