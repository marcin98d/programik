#include <iostream>
using namespace std;
const int a = 10;
int main()
{
	int tab[10];
	int min=0;
	int j;
	for(int i=0;i<a;i++)
	{
		cin >> tab[i];
	}
	for(int i=0;i<a;i++)
	{
		cout << tab[i] << " ";
	}
	cout << endl;
	for(j=0;j<a-1;j++)
		{
			min = j;
			for(int i=j+1;i<a;i++)
			{
				if(tab[i] < tab[min])
					min = i;
				swap(tab[min], tab[j]);
			}
		}
	for(int i=0;i<a;i++)
	{
		cout << tab[i] << " ";
	}
	
}
