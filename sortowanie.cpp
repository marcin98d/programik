#include <iostream>
using namespace std;

int main()
{
	int tab[10];
	for(int i=0;i<10;i++)
	{
		cin >> tab[i];
	}
	for(int i=0;i<10;i++)
		{
			for(int j=0;j<10;j++)
			{
				if(tab[j]>=tab[j+1])
				swap(tab[j],tab[j+1]);
			}
		}
	for(int i=0;i<10;i++)
	{
		cout << tab[i];
	}
}
