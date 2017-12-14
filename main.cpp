#include <iostream>

using namespace std;
struct Point{
    int x,y;
};
struct Node{
    Point p;
    Node *next;
};
struct List{
    Node *head;
    void wyswietl(List list);
};
void wyswietl(List list)
{
   for(Node *n = list.head; n!=NULL; n=n->next)
   {
       cout << n->p.x << endl << n->p.y << endl;
   }
}
void dodaj_pierwszy(List &list, int x, int y)
{
    Node *n = new Node();
    n->p.x=x;
    n->p.y=y;
    n->next=list.head;
    list.head=n;
}
void dodaj_ostatni(List &list, int x, int y)
{
    for(Node *n=list.head;n!=NULL;n=n->next)
    {
        if(n->next==NULL)
        {
            Node *tmp = new Node();
            tmp->p.x=x;
            tmp->p.y=y;
            tmp->next=NULL;
            n->next=tmp;
            break;
        }
    }
}
void insert(Node *node, Point point)
{

}
int main()
{
    List lamana;
    lamana.head = NULL;
    dodaj_pierwszy(lamana,25,30);
    dodaj_ostatni(lamana,50,50);
    dodaj_pierwszy(lamana,10,20);

    wyswietl(lamana);
    return 0;
}
