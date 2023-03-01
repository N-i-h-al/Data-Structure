#include<bits/stdc++.h>
using namespace std;

void print(list<int>l)
{
    list<int>::iterator a=l.begin();
    while(a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";
}

void Insert(list<int>&l,int index,int value)
{
    auto it=l.begin();
    advance(it,index);
    l.insert(it,value);
}
int main()
{
    list<int>l;
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    l.push_front(40);
    l.push_back(50);

    Insert(l,3,100);
    print(l);
    return 0;
}
