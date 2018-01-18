#include <iostream>

using namespace std;

const int maxCard = 100;

class Set {
    public:
        Set() { card = 0; }
        Set(int tab[], int dlugosc);
        friend bool operator & (int, const Set&); // membership
        friend bool operator == (const Set&, const Set&);     // equality
        friend bool operator != (const Set&, const Set&);     // inequality
        friend Set operator * (const Set&, const Set&);       // intersection
        friend Set operator + (const Set&, const Set&);       // union
        friend ostream& operator << (ostream &os, const Set &set);
    private:
        int elems[maxCard];                       // set elements
        int card;                                 // set cardinality
};
Set::Set(int tab[], int dlugosc){
    for(int i=0; i<dlugosc;i++)
    {
        elems[i]=tab[i];
    }
    card=dlugosc;
}
bool operator & (int a, const Set& zbior){
    for(int i=0;i<zbior.card;i++)
    {
        if(zbior.elems[i]==a)
        {
            return true;
        }
    }
    return false;
}
bool operator ==(const Set& zbior, const Set& zbior1){
    for(int i=0;i<zbior.card;i++)
    {
        if(zbior.elems[i]!=zbior1.elems[i])
        {
            return false;
        }
    }
    return true;
}
bool operator !=(const Set& zbior, const Set& zbior1){
    for(int i=0; i<zbior.card;i++)
    {
        if(zbior1.elems[i] == zbior1.elems[i])
        {
            return false;
        }
    }
    return true;
}
Set operator *(const Set& zbior, const Set& zbior1){
    int dlugosc = 0;
    int tab[maxCard];
    for(int i=0;i<zbior.card;i++)
    {
        for(int j=0;j<zbior1.card;j++)
        {
            if(zbior.elems[i]==zbior1.elems[i])
            {
                tab[dlugosc]=zbior.elems[i];
                dlugosc++;
                break;
            }
        }
    }
    Set hwdp(tab, dlugosc);
    return hwdp;
}
ostream& operator << (ostream &os, const Set &set){
    for(int i=0;i<set.card;i++)
    {
        os << set.elems[i] << " ";
    }
    return os;
}
int main()
{
    Set s;
    int tab[]={1,2,3,4,5};
    int tab1[]={5,6,7,8,9};
    Set jp(tab,5);
    Set jd(tab1,5);
    cout << (jp * jd);
    return 0;
}
