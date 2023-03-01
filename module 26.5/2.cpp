#include <bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node* prv;
    node* nxt;

    node(T value)
    {
        data=value;
        prv=NULL;
        nxt=NULL;
    }

};

template<class T>
class Deque
{
public:
    node<T>* head;
    node<T>* tail;
    int sz,rev;

    Deque()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
        rev=0;
    }

    void push_back(T value)
    {
        node<T>* newnode = new node<T>(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        tail->nxt = newnode;
        newnode->prv = tail;
        tail = newnode;
        sz++;
    }

    void push_front(T value)
    {
        node<T>* newnode = new node<T>(value);
        if(sz==0)
        {
            head = newnode;
            tail = newnode;
            sz++;
            return;
        }
        head->prv = newnode;
        newnode->nxt = head;
        head = newnode;
        sz++;
    }

    void pop_back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node<T> *a = tail;
        tail= tail->prv;
        delete a;
        tail->nxt = NULL;
        sz--;
    }

    void pop_front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return;
        }
        if(sz==1)
        {
            delete tail;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }

        node<T> *a = head;
        head = head->nxt;
        delete a;
        head->prv = NULL;
        sz--;
    }


    T front()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return head->data;
    }

    T back()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        return tail->data;
    }
    void reverse_deque()
    {
        if(rev == 0)
        {
            rev = 1;
        }
        else
        {
            rev = 0;
        }
    }

    T maxx()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        node<T>*a = head;
        T maxx = a->data;
        while(a!=NULL)
        {
            maxx=max(maxx,a->data);
            a=a->nxt;
        }
        return maxx;
    }
    T mini()
    {
        if(sz==0)
        {
            cout<<"Deque is empty\n";
            return -1;
        }
        node<T>*a = head;
        T mini = a->data;
        while(a!=NULL)
        {
            mini=min(mini,a->data);
            a=a->nxt;
        }
        return mini;
    }

};


int main()
{
    Deque<int>d;
    d.push_back(5);
    d.push_back(10);
    d.push_back(15);
    /* d.reverse_deque();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";
    Deque<char>d1;
    d1.push_back('a');
    d1.push_back('b');
    cout<<"Back : "<<d1.back()<<" Front : "<<d1.front()<<"\n";

    d.push_front(20);
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_front();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n";

    d.pop_back();
    cout<<"Back : "<<d.back()<<" Front : "<<d.front()<<"\n"; */
    cout<<d.maxx()<<"\n";
    cout<<d.mini()<<"\n";
    return 0;
}

