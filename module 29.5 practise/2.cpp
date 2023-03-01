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

        for(int i=0; i<6; i++)
            allnode[i] = CreateNewNode(i);

        allnode[0]->Left = allnode[1];
        allnode[0]->Right = allnode[2];

        allnode[1]->Left = allnode[5];
        allnode[1]->parent = allnode[0];

        allnode[2]->Left = allnode[3];
        allnode[2]->Right = allnode[4];
        allnode[2]->parent = allnode[0];

        allnode[5]->parent = allnode[1];

        allnode[3]->parent = allnode[2];
        allnode[4]->parent = allnode[2];
        root = allnode[0];
    }
    void BFS()
    {
        if (root == NULL)
            return;
        queue<node*> q;
        q.push(root);

        while (!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p = -1, l = -1, r = -1;
            if (a->Left != NULL)
            {
                l = a->Left->id;
                q.push(a->Left);
            }
            if (a->Right != NULL)
            {
                r = a->Right->id;
                q.push(a->Right);
            }
            if (a->parent != NULL)
                p = a->parent->id;
            cout << "Node id = " << a->id << " Left Child = " << l;
            cout << " Right Child = " << r << " Parent id = " << p << "\n";
        }
    }

    void Inorder(node* a)
    {
        if (a == NULL)
            return;
        Inorder(a->Left);
        cout << a->id << " ";
        Inorder(a->Right);
    }

    void Preorder(node* a)
    {
        if (a == NULL)
            return;
        cout << a->id << " ";
        Preorder(a->Left);
        Preorder(a->Right);
    }

    void Postorder(node* a)
    {
        if (a == NULL)
            return;
        Postorder(a->Left);
        Postorder(a->Right);
        cout << a->id << " ";
    }

};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    cout << "The postorder of the binary tree is: ";
    bt.Postorder(bt.root);
    cout<<endl;
    cout << "The preorder of the binary tree is: ";
    bt.Preorder(bt.root);
    cout<<endl;
    cout << "The BFS of the binary tree is: "<<endl;
    bt.BFS();
    cout<<endl;

    return 0;
}

