#include <iostream>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

class BinaryTree {
public:
    TreeNode* root;

    BinaryTree() {
        root = NULL;
    }

    void insertNode(int val) {
        if (root == NULL) {
            root = new TreeNode(val);
            return;
        }

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left != NULL) {
                q.push(node->left);
            } else {
                node->left = new TreeNode(val);
                break;
            }

            if (node->right != NULL) {
                q.push(node->right);
            } else {
                node->right = new TreeNode(val);
                break;
            }
        }
    }

    void bfsTraversal() {
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            TreeNode* node = q.front();
            q.pop();
            cout << node->val << " ";

            if (node->left != NULL) {
                q.push(node->left);
            }
            if (node->right != NULL) {
                q.push(node->right);
            }
        }
    }

    void inOrderTraversal(TreeNode* node) {
        if (node == NULL) {
            return;
        }
        inOrderTraversal(node->left);
        cout << node->val << " ";
        inOrderTraversal(node->right);
    }

    void preOrderTraversal(TreeNode* node) {
        if (node == NULL) {
            return;
        }
        cout << node->val << " ";
        preOrderTraversal(node->left);
        preOrderTraversal(node->right);
    }

    void postOrderTraversal(TreeNode* node) {
        if (node == NULL) {
            return;
        }
        postOrderTraversal(node->left);
        postOrderTraversal(node->right);
        cout << node->val << " ";
    }
};

int main() {
    BinaryTree tree;

    // Insert nodes into the binary tree
    tree.insertNode(1);
    tree.insertNode(2);
    tree.insertNode(3);
    tree.insertNode(4);
    tree.insertNode(5);

    // Print BFS traversal of the binary tree
    cout << "BFS Traversal: ";
    tree.bfsTraversal();
    cout << endl;

    // Print in-order traversal of the binary tree
    cout << "In-order Traversal: ";
    tree.inOrderTraversal(tree.root);
    cout << endl;

    // Print pre-order traversal of the binary tree
    cout << "Pre-order Traversal: ";
    tree.preOrderTraversal(tree.root);
    cout << endl;

    // Print post-order traversal of the binary tree
    cout << "Post-order Traversal: ";
    tree.postOrderTraversal(tree.root);
    cout << endl;

    return 0;
}

