//Practice Exercise 3: Write a C++ program to check whether a given tree is BST.
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
bool isBSTUtil(Node* root, int minValue, int maxValue)
{
    if(root == NULL)
        return true;
    if(root->data<minValue || root->data>maxValue)
        return false;
    return isBSTUtil(root->left, minValue,root->data-1) &&
           isBSTUtil(root->right,root->data+1,maxValue);

}
bool isBST(Node* root)
{
    return isBSTUtil(root,INT_MIN,INT_MAX);
}
int main()
{
    Node* root = new Node(50);
    root->left = new Node(17);
    root->right = new Node(72);
    root->left->left = new Node(12);
    root->left->right = new Node(23);
    root->right->left = new Node(54);
    root->right->right = new Node(76);
    root->left->left->left = new Node(9);
    root->left->left->right = new Node(14);
    root->left->right->right = new Node(19);
    root->right->left->right = new Node(67);
    if (isBST(root))
        cout << "The tree is a Binary Search Tree (BST)." << endl;
    else
        cout << "The tree is not a Binary Search Tree (BST)." << endl;

    return 0;
}
