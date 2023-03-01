#include <bits/stdc++.h>
using namespace std;

int b=0;
class node
{
public:
    int data;
    node*next;
};

class LinkedList
{
public:
    node * head;

    LinkedList()
    {
        head=NULL;
    }


    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void InsertAtHead(int value)
    {
        node *a=CreateNewNode(value);

        if(head==NULL)
        {
            head = a;
            b++;
            return;
        }
        a->next=head;
        b++;
        head=a;
    }
    int getSize()
    {
        return b;
    }
    void Traverse()
    {
        node* a=head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a=a->next;
        }
        cout<<"\n";
    }
    int getValue(int index)
    {
        node* a=head;
        int counter = 0;
        while(a!=NULL)
        {
            if(counter==index)
            {
                return (a->data);
            }
            a=a->next;
            counter++;
        }
        return -1;
    }

};

int main()
{
    LinkedList l;

    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(2);
    l.InsertAtHead(1);

    cout<<l.getValue(2)<<"\n";


    return 0;
}



