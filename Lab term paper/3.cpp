#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node* prv;
    node* nxt;
};

class LinkedList
{
public:
    node* head;
    node* tail;

    LinkedList()
    {
        head = NULL;
        tail = NULL;
    }

    node* createNewNode(int value)
    {
        node* newNode = new node;
        newNode->value = value;
        newNode->nxt = NULL;
        newNode->prv = NULL;
        return newNode;
    }

    void insertHead(int value)
    {
        node* newNode = createNewNode(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->nxt = head;
            head->prv = newNode;
            head = newNode;
        }
    }

    void insertTail(int value)
    {
        node* newNode = createNewNode(value);

        if (tail == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prv = tail;
            tail->nxt = newNode;
            tail = newNode;
        }
    }

    void insertMid(int value)
    {
        node* newNode = createNewNode(value);

        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            node* x = head;
            node* y = head->nxt;

            while (y != NULL && y->nxt != NULL)
            {
                x = x->nxt;
                y = y->nxt->nxt;
            }

            newNode->nxt = x->nxt;
            newNode->prv = x;
            if (x->nxt != NULL)
            {
                x->nxt->prv = newNode;
            }
            x->nxt = newNode;

            if (newNode->nxt == NULL)
            {
                tail = newNode;
            }
        }
    }
    void print()
    {
        node* t = head;
        while (t != NULL)
        {
            cout << t->value << " ";
            t = t->nxt;
        }
        cout << endl;
    }

    void Merge(LinkedList a)
    {
        if (a.head == NULL)
        {
            return;
        }
        if (head == NULL)
        {
            head = a.head;
            tail = a.tail;
        }
        else
        {
            tail->nxt = a.head;
            a.head->prv = tail;
            tail = a.tail;
        }
        a.head = NULL;
        a.tail = NULL;
    }
};

int main()
{
    LinkedList a;
    LinkedList b;

    a.insertHead(1);
    a.insertTail(5);
    a.insertMid(3);
    a.insertHead(0);
    a.insertTail(10);
    a.print(); // prints  0 1 3 5 10

    b.insertHead(10);
    b.insertTail(50);
    b.insertMid(30);
    b.insertHead(9);
    b.insertTail(100);
    b.print(); // prints  9 10 30 50 100

    a.Merge(b);
    a.print(); // prints  0 1 3 5 10 9 10 30 50 100
    b.print(); // prints  9 10 30 50 100
}

