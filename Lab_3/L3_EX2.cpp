//Example 2: Reverse a SLL and return the new head.
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
Node* constructLL(int arr[],int arrsize)
{
    Node* head = new Node(arr[0]);
    Node* current = head;
    for(int i=1; i<arrsize; i++)
    {
        Node* temp = new Node(arr[i]);
        current->next = temp;
        current = temp;
    }
    return head;
}
//Function to reverse a SLL and return the new head
Node* ReverseList(Node *head)
{
    Node *temp2 = NULL, *temp = NULL;
    while(head!=NULL)
    {
        temp = head->next;
        head->next = temp2;
        temp2 = head;
        head = temp;
    }
    head = temp2;
    return head;
}
void TraverseList(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int main()
{
    int arr[10] = {1,2,3,4,5};
    Node *head = constructLL(arr,5);
    head = ReverseList (head);
    TraverseList(head);
}
