#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int depth(Node *root)
{
    if (root == NULL)
        return 0;
    return 1 + max(depth(root->right), depth(root->left));
}

bool checkMirror(Node *root, Node *root2)
{
    cout << root->data << " " << root2->data << endl;
    
    // Base case
    if (root == NULL && root2 == NULL)
        return true;

    if (root == NULL && root2 != NULL)
        return false;

    if (root != NULL && root2 == NULL)
        return false;
    
    if (root->data != root2->data)
        return false;

    // Recursive relation
    bool op1 = checkMirror(root->left, root2->right);
    bool op2 = checkMirror(root->right, root2->left);
    bool final = op1 && op2;

    return final;
}

int main()
{
    /*

            10
            /\
           20 30
          /\
        40 50

          10
          /\
         20 30
            /\
           40 50

    */

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    Node *root2 = new Node(10);
    root2->left = new Node(30);
    root2->right = new Node(20);
    root2->left->left = new Node(50);
    root2->left->right = new Node(40);

    // calling inorder
    cout << "Inorder : ";
    inOrder(root);
    cout << endl;

    // Depth of the tree
    cout << "Depth of the tree : " << depth(root) << endl;

    // Check mirror
    if (checkMirror(root, root2))
        cout << "Yes mirror" << endl;
    else
        cout << "Not Mirror" << endl;
    return 0;
}