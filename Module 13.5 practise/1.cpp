#include <bits/stdc++.h>
using namespace std;

int b=0,c=0;
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
            if(a->next==NULL)
            {
                cout<<a->data;
                break;
            }
            cout<<a->data<<","<<" ";
            a=a->next;
        }
        cout<<"\n";
    }

};

int main()
{
    LinkedList l;

    int c;
    for(int i=5;i>=1;i--)
    {
        //cin>>c;
        l.InsertAtHead(i);
    }
    l.InsertAtHead(0);

    l.Traverse();

    return 0;
}



