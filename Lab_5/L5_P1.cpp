//Practice Exercise 1: Write a C++ program to find the Inorder, Preorder, and Postorder traversals of the following trees.
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
// function to perform inorder traversal
void InorderTraversal(Node* root)
{
    if(root != NULL)
    {
        InorderTraversal(root->left);
        cout<<root->data<<" ";
        InorderTraversal(root->right);
    }
}
// function to perform preorder traversal
void PreorderTraversal(Node* root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        PreorderTraversal(root->left);
        PreorderTraversal(root->right);
    }
}
// function to perform postorder traversal
void PostorderTraversal(Node* root)
{
    if(root != NULL)
    {
        PostorderTraversal(root->left);
        PostorderTraversal(root->right);
        cout<<root->data<<" ";
    }
}

int main()
{
    // tree 1
    Node* root1 = new Node(50);
    root1->left = new Node(17);
    root1->right = new Node(72);
    root1->left->left = new Node(12);
    root1->left->right = new Node(23);
    root1->right->left = new Node(54);
    root1->right->right = new Node(76);
    root1->left->left->left = new Node(9);
    root1->left->left->right = new Node(14);
    root1->left->right->right = new Node(19);
    root1->right->left->right = new Node(67);
    cout<<"Tree 1:\n";
    cout<<"Inorder Traversal: ";
    InorderTraversal(root1);
    cout<<"\nPreorder Traversal: ";
    PreorderTraversal(root1);
    cout<<"\nPostorder Traversal: ";
    PostorderTraversal(root1);
    cout<<"\n\n";


    // tree 2
    Node* root2 = new Node(1);
    root2->left = new Node(3);
    root2->left->left = new Node(5);
    root2->left->right = new Node(2);
    root2->left->left->right = new Node(4);
    root2->left->right->left = new Node(7);
    root2->left->right->right = new Node(8);
    root2->left->left->right->right = new Node(11);
    root2->left->right->left->right = new Node(9);
    root2->left->right->right->right = new Node(13);
    root2->left->right->right->right->right = new Node(12);
    cout<<"Tree 2:\n";
    cout<<"Inorder Traversal: ";
    InorderTraversal(root2);
    cout<<"\nPreorder Traversal: ";
    PreorderTraversal(root2);
    cout<<"\nPostorder Traversal: ";
    PostorderTraversal(root2);
    cout<<"\n";
    return 0;

}
