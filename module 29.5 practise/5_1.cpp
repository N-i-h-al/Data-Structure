#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    node *Left;
    node *Right;
    node *parent;
};

class BinaryTree
{
public:
    node* root;
    node* allnode[6];

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewNode(int id)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->Left = NULL;
        newnode->Right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void build_binary_tree()
    {

        for(int i=0; i<7; i++)
            allnode[i] = CreateNewNode(i);

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->parent = allnode[0];
        allnode[2]->parent = allnode[0];

        allnode[1]->Left = allnode[3];
        allnode[1]->Right = allnode[4];

        allnode[3]->parent = allnode[1];
        allnode[4]->parent = allnode[1];

        allnode[2]->Left = allnode[5];
        allnode[2]->Right = allnode[6];

        allnode[5]->parent = allnode[2];
        allnode[6]->Left = allnode[2];

        root = allnode[0];
    }

    bool isCompleteBinaryTree(node* root)
    {
        if (root == NULL)
        {
            return true;
        }

        queue<node*> q;
        q.push(root);

        bool has_one_child = false;

        while (!q.empty())
        {
            node* curr = q.front();
            q.pop();

            if (curr->Left)
            {
                if (has_one_child)
                {
                    return false;
                }
                q.push(curr->Left);
            }
            else
            {
                has_one_child = true;
            }

            if (curr->Right)
            {
                if (has_one_child)
                {
                    return false;
                }
                q.push(curr->Right);
            }
            else
            {
                has_one_child = true;
            }
        }

        return true;
    }

};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    if(bt.isCompleteBinaryTree(bt.root))
    {
        cout<<"The binary tree is a Complete Binary Tree\n";
    }
    else
    {
        cout<<"The binary tree is not a Complete Binary Tree\n";
    }

    return 0;
}

