#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int value;
    node* Left;
    node* Right;
};

class BST
{
public:
    node *root;
    BST()
    {
        root = NULL;
    }
    void Insert(int value)
    {
        node* newNode = new node();
        newNode->value = value;
        newNode->Left = NULL;
        newNode->Right = NULL;

        if (root == NULL)
        {
            root = newNode;
            return;
        }

        node* a = root;
        while (true)
        {
            if (value < a->value)
            {
                if (a->Left == NULL)
                {
                    a->Left = newNode;
                    break;
                }
                a = a->Left;
            }
            else
            {
                if (a->Right == NULL)
                {
                    a->Right = newNode;
                    break;
                }
                a = a->Right;
            }
        }
    }
    bool Search(int value)
    {
        node* b = root;
        while (b != NULL)
        {
            if (value == b->value)
            {
                return true;
            }
            else if (value < b->value)
            {
                b = b->Left;
            }
            else
            {
                b = b->Right;
            }
        }
        return false;
    }
};

int main()
{
    BST bst;
    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);
    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;
}

