//Practice Exercise 1: Write a C++ program to find the position of an element from a Singly Linked List [Linear Search].
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

void TraverseList(Node* head)
{
    Node *temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findPosition(Node *head, int target)
{
    int position = 1;
    Node* temp = head;
    while(temp!=NULL)
    {
        if(temp->data==target)
        {
            return position;
        }
        temp = temp->next;
        position++;
    }
    return -1;
}
int main()
{
    int arr[10] = {1,2,3,4,5};
    Node *head = constructLL(arr,5);
    TraverseList(head);
    int targetElement;
    cout<<"\nEnter the element to find its position: ";
    cin>>targetElement;
    int position = findPosition(head, targetElement);
    if(position != -1)
    {
        cout<<"Element found at position: "<<position<<endl;
    }
    else
    {
        cout<<"Element not found in the list."<<endl;
    }
    return 0;
}

