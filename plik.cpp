#include <iostream>
using namespace std;



int main( )
{
    int tablica[5]={5,0,2,7,4};
    int max=0;
    int min=0;
    for(int i=0;i<5;i++)
	{
		if(max<=tablica[i])
		{
			max=tablica[i];
		}
		else if(min>=tablica[i])
		{
			min=tablica[i];
		}
	}
	cout << max << endl;
	cout << min << endl;
    
    return 0;
}
