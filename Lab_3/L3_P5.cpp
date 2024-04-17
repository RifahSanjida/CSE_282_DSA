//Practice Exercise 5: Write a C++ program to delete the first node of a DLL. [Consider possible edge cases]
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
Node* deleteFirstNode(Node* head) {
    if (head == nullptr)
    {
        cout << "DLL is empty. Cannot delete the first node." << endl;
        return nullptr;
    }

    Node* newHead = head->next;
    if (newHead != nullptr) {
        newHead->bak = nullptr;
    }

    delete head;

    return newHead;
}
int main()
{
    int arr[5] = {1, 2, 3, 4,5};
    Node *head = CreateDLL(arr,5);
    TraverseDLL(head);
    head = deleteFirstNode(head);
    cout << "\nDLL after deleting the first node: ";
    TraverseDLL(head);
    return 0;
}
