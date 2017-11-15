#include <iostream>

using namespace std;

void Sortowanie(int tab[],int left,int right)
{
    int i = left;
    int j = right;
    int x = tab[(left+right)/2];
    do
    {
        while(tab[i]<x)
             i++;

        while(tab[j]>x)
             j--;
        if(i<=j )
        {
            swap(tab[i],tab[j]);
            i++;
            j--;
        }
    } while(i<=j);

    if(left<j)
        Sortowanie(tab,left,j);

    if(right>i)
        Sortowanie(tab,i,right);
}
int main()
{
    int ilosc_liczb;
    cout << "Podaj ilosc liczb do posortowania: ";
    cin >> ilosc_liczb;
    int *tablica = new int [ilosc_liczb];
    for (int i=0;i<ilosc_liczb;i++)
        {
            cin >> tablica[i];
        }
    Sortowanie(tablica,0,ilosc_liczb-1);
    for(int i=0;i<ilosc_liczb;i++)
        {
            cout << tablica[i] << " ";
        }
    return 0;
}
