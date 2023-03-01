#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 8;

template<class T>
class Queue
{
public:
    T a[MAX_SIZE];
    int l,r;
    int sz;

    Queue()
    {
        l = 0;
        r = -1;
        sz = 0;
    }

    void enqueue(T value)
    {
        if(sz == MAX_SIZE)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        if(r == MAX_SIZE)
        {
            r = 0;
        }
        a[r] = value;
        sz++;
    }


    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
        if(l==MAX_SIZE)
        {
            l = 0;
        }
        sz--;
    }

   T front()
    {
        if(sz == 0)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return sz;
    }
    void travarse()
    {
        for(int i=0; i<sz; i++)
        {
            cout<<a[i]<<"\n";
        }

    }
};

int main()
{
    Queue<int>q;
    q.enqueue(0);
    q.enqueue(0);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue();
    q.enqueue(7);
    q.travarse();
    Queue<char>q1;
    q1.enqueue('a');
    q1.enqueue('b');
    q1.enqueue(' ');
    q1.enqueue('c');
    q1.enqueue(8);


    q1.travarse();

    //cout<<"Q size : "<<q.size()<<"\n";
    //cout<<q.front()<<"\n";
    //q.dequeue();
    // cout<<q.front()<<"\n";
    // q.dequeue();
    //cout<<q.front()<<"\n";
    //q.dequeue();

    //cout<<"Q size : "<<q.size()<<"\n";
    return 0;
}



