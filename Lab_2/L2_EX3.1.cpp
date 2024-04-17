//Example 3.1:Insert a node at the beginning of the list
#include<bits/stdc++.h>
using namespace std;
//create a node data type
struct Node{
    int data;
    Node *next;
    //set the node value and next pointer
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
    for(int i = 1; i<arrsize; i++)
    {
        Node *temp = new Node(arr[i]);
        current-> next = temp;
        current = temp;
    }
    return head;
}
//insert a node at the beginning
Node* insertAtFirst(Node *head, int newValue)
{
    Node* current = NULL;
    if(head==NULL)
    {
        current = new Node(newValue);
        head = current;
        return head;
    }
    current = new Node(newValue);
    current->next = head;
    head = current;
    return head;
}
//traverse function
void TraverseList(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

//main function
int main()
{
    int arr[8] = {2,4,5,6};
    //construct linked list
    Node *head = constructLL(arr,4);
    //insert new node
    head = insertAtFirst(head,7);
    //print the list
    TraverseList(head);
}
