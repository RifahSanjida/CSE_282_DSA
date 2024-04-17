//Example 1: Delete element from a particular position of the SLL.
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
Node* deleteKNode(Node* head, int k)
{
    Node *temp = head, *prev = NULL, *fr = NULL;
    int cnt = 0;
    while(temp!=NULL)
    {
        cnt++;
        if(cnt==k)
        {
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    fr = temp->next;
    prev->next = fr;
    delete temp;
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
    head = deleteKNode(head,3);
    TraverseList(head);
}
