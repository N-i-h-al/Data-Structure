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
    int getLast()
    {
        if(head==NULL)
        {
            return -1;
        }
        node* a = head;
        while(a!= NULL)
        {
            a = a->nxt;
            if(a->nxt==NULL)
            {
                return a->data;
            }
        }

        cout<<"\n";
    }
};

int main()
{
    LinkedList l;
    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(6);
    l.InsertAtHead(2);
    l.InsertAtHead(3);

    cout<<l. getLast()<<" ";
    return 0;
}

