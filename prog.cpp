#include <iostream>
#include  <vector>
using namespace std;
int main (){
int n,i,count=0,j=0,sqr,max=0, max_1=0, max_i, max_i_1;
cout <<"Введите количество точек в пространстве ";
cin >>n;
vector <int> tringle (n*2);
vector <int> temp (n);
for (i=0; i<n*2; i++)
{
	if (i+1 <= n*2)
	{
	cout <<"Введите коррдинты по одной \t"<<endl;
	cin >> tringle[i]>>tringle[i+1];
	i++;
	}
	
}
for (i=0; i<n*2; i++)
{
	if (tringle [i] == tringle [i+1] && i<n*2)
	{ 
	temp [j] = i;
	j++;
	count++;
	}

}
for (i=0; i<n*2; i++)
{
	if (i+1 < n*2 && tringle[i] >  max && tringle[i] == tringle[i+1] ) { max = tringle[i]; max_i = i;i++;}
}
for (i=0; i<n*2; i++)
{
	if (i+1 < n*2 && tringle[i] > max_1 && i != max_i && tringle[i] == tringle[i+1])
	{ 
		max_1 = tringle [i];  i++;
	}
}
	//добавить поиск двух максимальных пар в векторе temp
if (count >=2) { sqr = max * max_1; 
if (sqr < 0 ){ sqr=sqr*(-1);}
			  cout << sqr;
			   }
else cout << "такого треуугольник не существует";
return 0;
//
}
