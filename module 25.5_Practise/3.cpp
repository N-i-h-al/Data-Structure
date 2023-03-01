#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500;

template<class T>
class Queue
{
public:
    T a[MAX_SIZE];
    int l,r;

    Queue()
    {
        l = 0;
        r = -1;
    }
    void enqueue(T value)
    {
        if(r+1 >= MAX_SIZE)
        {
            cout<<"Queue is full\n";
            return;
        }
        r++;
        a[r] = value;
    }

    void dequeue()
    {
        if(l > r)
        {
            cout<<"Queue is empty\n";
            return;
        }
        l++;
    }

    T front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return r-l+1;
    }

};

int main()
{

    Queue<char>q;
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');

    cout<<q.front();
    return 0;
}
