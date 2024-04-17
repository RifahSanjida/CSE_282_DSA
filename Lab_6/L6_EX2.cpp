//check whether a tree is balanced or not.
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
//height calculation function
int maxDepth(Node* root)
{
    if(root == NULL)
    return 0;
    int lh = 1+maxDepth(root->left);
    if(lh == -1)
    return -1;
    int rh = 1+maxDepth(root->right);
    if(rh == -1)
    return -1;
    if(abs(lh-rh)>1)
    return -1;
    return max(lh,rh);
}
bool isBalanced(Node *root)
{
    return maxDepth(root)!=1;
}
int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->left->left = new Node(4);
    int h = isBalanced(root);
    if(h==0)
    {
        cout<<"Tree is not balanced"<<endl;
    }
    else
    {
        cout<<"Tree is balanced"<<endl;
    }

}
