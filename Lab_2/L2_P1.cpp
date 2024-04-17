//Practice Exercise 1: Write a C++ program to insert a new node at the end of a Singly Linked List [Consider all edge cases].
#include<bits/stdc++.h>
using namespace std;
/* Possible Edge Cases:
1) The list could be empty
2) The list has only one node
3) The list has more than one node
*/
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
//insert a node at the end of the list
Node* insertAtLast(Node* head, int newValue)
{
    Node *newNode = new Node(newValue);
    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
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
    head = insertAtLast(head,7);
    //print the list
    TraverseList(head);
}
