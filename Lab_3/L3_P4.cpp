//Practice Exercise 4: Write a C++ program to insert a node at the end of a DLL. [Consider possible edge cases]
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *next;
    Node *bak;
    Node(int x)
    {
        data = x;
        next = NULL;
        bak = NULL;
    }
    Node (int x, Node *f, Node *b)
    {
        data = x;
        next = f;
        bak = b;
    }
};
Node* CreateDLL(int arr[],int arrsize)
{
    Node *head = NULL, *temp = NULL, *prev = NULL;
    head = new Node(arr[0]);
    prev = head;
    for(int i = 1;i<arrsize;i++)
    {
        temp = new Node(arr[i],NULL,prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void TraverseDLL(Node* head)
{
    Node *temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}
Node* insertAtEnd(Node* head, int newData) {
    Node* newNode = new Node(newData);

    if (head == nullptr)
    {
        return newNode;
    }

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->bak = temp;

    return head;
}
int main()
{
    int arr[5] = {1, 2, 3, 4,5};
    Node *head = CreateDLL(arr,5);
    TraverseDLL(head);
    int newData;
    cout << "\nEnter data for the new node: ";
    cin >> newData;
    head = insertAtEnd(head, newData);
    cout << "DLL after inserting at the end: ";
    TraverseDLL(head);
    return 0;
}
