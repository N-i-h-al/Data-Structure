#include<bits/stdc++.h>

using namespace std;


class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    void swapValue(int i,int j)
    {
        node* a = head;
        int x = 0;
        while(a != NULL)
        {
            x++;
            a= a->nxt;
        }

        if(i < 1 || i > x || j < 1 || j > x)
            return;

        node* idx1 = head;
        node* idx2 = head;
        for(int y = 0; y < i; y++)
        {
            idx1 = idx1->nxt;
        }
        for(int y = 0; y < j; y++)
        {
            idx2 = idx2->nxt;
        }

        int p = idx1->data;
        idx1->data = idx2->data;
        idx2->data = p;
    }

};


int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(7);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(3);

    dl.swapValue(1, 4);
    dl.Traverse();


    return 0;
}
