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
    int getMax()
    {

        node *a = head;
        int m = -1;
        while(a!= NULL)
        {
            if(a->data>m)
            {
                m=a->data;
            }
            a = a->nxt;

        }
        return m;
    }
    void DeleteMax()
    {
        node *ptr1;
        int x=getMax();
        cout<<x<<endl;
        node *a = head;
        while(a!= NULL)
        {
            if(a->data==x){
                if(a->nxt!=NULL && a->prv!=NULL){
                    node* b= a->nxt;
                    node* c = a;
                    a = a->prv;
                    a->nxt = b;
                    b->prv = a;
                    delete c;
                } else if(a->nxt==NULL){
                    node* c = a;
                    a = a->prv;
                    a->nxt = NULL;
                    delete c;
                } else if(a->prv==NULL){
                    node* c = a;
                    a = a->nxt;
                    head = a;
                    head->prv = NULL;
                    delete c;
                }
            } else {
                a=a->nxt;
            }

        }
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

    int getSize()
    {
        return sz;
    }

};

int main()
{
    DoublyLinkedList dl;
    dl.InsertAtHead(6);
    dl.InsertAtHead(4);
    dl.InsertAtHead(6);
    dl.InsertAtHead(2);
    dl.InsertAtHead(1);
    dl.InsertAtHead(6);

    dl.DeleteMax();
    dl.Traverse();

    return 0;
}
