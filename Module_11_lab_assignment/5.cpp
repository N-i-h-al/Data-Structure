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

    void printReverse()
    {
        vector<int>c;
        node *a = head;
        while(a!=NULL)
        {
            c.push_back(a->data);
            a = a->next;
        }
        for(int i=c.size()-1; i>=0; i--)
        {
            cout<<c[i]<<" ";
        }
        cout<<"\n";
    }
    void swapFirst()
    {

        node* a = head;
        int p = 0;
        while(a != NULL)
        {
            p++;
            a = a->next;
        }
        if(b<2)
        {
            return;
        }
        node* idx1 = head;
        node* idx2 = head;
        for(int i =1 ; i < 1; i++)
        {
            idx1 = idx1->next;
        }
        for(int i = 1; i <2; i++)
        {
            idx2 = idx2->next;
        }
        int value = idx1->data;
        idx1->data = idx2->data;
        idx2->data = value;
    }

};

int main()
{
    LinkedList l;

    cout<<l.getSize()<<"\n";
    l.InsertAtHead(5);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(6);
    l.InsertAtHead(30);
    cout<<l.getSize()<<"\n";
    l.InsertAtHead(20);
    l.InsertAtHead(30);

    cout<<l.getValue(2)<<"\n";

    cout<<l.getValue(6)<<"\n";

    l.printReverse();
    l.Traverse();
    l.swapFirst();
    l.Traverse();
    l.printReverse();

    return 0;
}


