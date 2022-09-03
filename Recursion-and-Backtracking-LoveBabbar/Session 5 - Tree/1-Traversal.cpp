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

void preOrder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node *root)
{
    if (root == NULL)
        return;
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << " ";
}

int depth(Node *root){
    if(root == NULL)
        return 0;
    return 1+max(depth(root->right),depth(root->left));
}

int main()
{
    /*

            10
            /\
           20 30
          /\   /\
        40 50 60 70

    */

    Node *root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);
    // root->right->right->right = new Node(70);
    // root->right->right->right->right = new Node(70);

    // calling inorder
    cout << "Inorder : ";
    inOrder(root);
    cout << endl;


    // calling preorder
    cout << "preOrder : ";
    preOrder(root);
    cout << endl;

    // calling postorder
    cout << "postOrder : ";
    postOrder(root);
    cout << endl;

    // Depth of the tree
    cout<<"Depth of the tree : "<<depth(root)<<endl;
    return 0;
}