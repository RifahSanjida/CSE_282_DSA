//Example 2: Create a linked list from an array and return the head.
#include<bits/stdc++.h>
using namespace std;//create a node data type
struct Node{
    int data;
    Node *next;

    //set Node value and next pointer
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
//create linked list function
Node* constructLL(int arr[], int arrsize)
{
    Node *head = new Node(arr[0]);
    Node *current = head;
    for(int i = 1; i < arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
//Traverse Function
void TraverseList(Node *head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//Main function
int main()
{
    int arr[8] = {2,4,5,6};
    //construct linked list
    Node *head = constructLL(arr,4);
    //print the list
    TraverseList(head);
}

