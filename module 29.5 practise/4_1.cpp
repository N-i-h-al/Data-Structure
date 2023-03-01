#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node *Left;
    node *Right;
};

class BinaryTree{
public:
    node* root;

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int value)
    {
        node* newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    bool isPerfect(node* root, int depth, int level)
    {
        if(root == NULL)
        {
            return true;
        }
        if(root->Left == NULL && root->Right == NULL)
        {
            return (depth == level+1);
        }
        if(root->Left == NULL || root->Right == NULL)
        {
            return false;
        }
        return isPerfect(root->Left, depth, level+1) && isPerfect(root->Right, depth, level+1);
    }

    bool isPerfectBinaryTree(node* root)
    {
        int depth = 0;
        node* temp = root;
        while(temp != NULL)
        {
            depth++;
            temp = temp->Left;
        }
        return isPerfect(root, depth, 0);
    }
};

int main()
{
    BinaryTree bt;
    bt.root = bt.CreateNewNode(1);
    bt.root->Left = bt.CreateNewNode(2);
    bt.root->Right = bt.CreateNewNode(3);
    bt.root->Left->Left = bt.CreateNewNode(4);
    bt.root->Left->Right = bt.CreateNewNode(5);
    bt.root->Right->Left = bt.CreateNewNode(6);
    bt.root->Right->Right = bt.CreateNewNode(7);

    if(bt.isPerfectBinaryTree(bt.root))
    {
        cout<<"The binary tree is a Perfect Binary Tree\n";
    }
    else
    {
        cout<<"The binary tree is not a Perfect Binary Tree\n";
    }

    return 0;
}

