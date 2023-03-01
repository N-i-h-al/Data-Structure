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
// Manually insert nodes in a binary tree and print information of the tree
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

    int height(node* root)
    {
        if (root == NULL)
        {
            return -1;
        }
        int left_height = height(root->Left);
        int right_height = height(root->Right);
        return 1 + max(left_height, right_height);
    }
};

int main()
{
    BinaryTree bt;
    bt.build_binary_tree();
    int tree_height =1+bt.height(bt.root);
    cout << "The height of the binary tree is: " << tree_height << endl;

    return 0;
}
