#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100;

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

};

int main()
{
    Queue<int>q;
    q.enqueue(0);
    q.enqueue(1);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue();
    q.enqueue(7);

    Queue<char>q1;
    q1.enqueue('a');
    q1.enqueue('b');
    q1.enqueue('c');



    cout<<q.front()<<endl;
    q.dequeue();
    cout<<q.front()<<endl;

    cout<<q1.front()<<endl;
    q1.dequeue();
    cout<<q1.front()<<endl;


    return 0;
}




