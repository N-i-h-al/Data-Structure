#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node * nxt;
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }

        a->nxt = head;
        head = a;
    }
    double  getAverage()
    {
        int sum=0;
        float aver=0.0;
        node* a = head;
        while(a!= NULL)
        {
            sum=sum+a->data;
            a = a->nxt;
        }
        return aver=(double)sum/sz;
        cout<<"\n";
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(7);
    l.InsertAtHead(4);
    l.InsertAtHead(6);
    l.InsertAtHead(2);
    l.InsertAtHead(3);

    cout<<l.getAverage()<<" ";
    return 0;
}


