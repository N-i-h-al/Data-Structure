#include <bits/stdc++.h>
using namespace std;

const int MAX_SIZE=500;

class Queue
{
public:
    int a[MAX_SIZE];
    int l,r,p=0;

    Queue()
    {
        l=0;
        r=-1;
    }
    void enqueue(int value)
    {
        p++;
        if(r+l>=MAX_SIZE)
        {
            cout<<"Queue is full\n"<<" ";
            return;
        }
        r++;
        a[r]=value;
    }

    void dequeue()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n"<<" ";
            return;
        }
        l++;
    }

    int front()
    {
        if(l>r)
        {
            cout<<"Queue is empty\n"<<" ";
            return -1;
        }
        return a[l];
    }

    int size()
    {
        return r-l+1;
    }
     void travarse()
    {
        for(int i=0;i<p;i++)
        {
            cout<<a[i]<<" ";
        }

    }
};

int main()
    {
        Queue q;
        q.enqueue(1);
        q.enqueue(2);
        q.enqueue(3);
        q.enqueue(4);

        cout<<q.front()<<"\n";

      //  q.dequeue();
      //  cout<<q.front()<<"\n";

        q.travarse();
    }
