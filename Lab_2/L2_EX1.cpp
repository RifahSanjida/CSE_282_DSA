//Example 1: Create a Single Linked List.
#include<iostream>
#include<stdlib.h>
#include<bits/stdc++.h>
using namespace std;
//create a node data type
struct Node{
    int data;
    Node *next;
};

int main()
{
    //Initialize three nodes with Null pointer
    Node *a = NULL, *b = NULL, *c = NULL, *temp = NULL;

    //Allocate memory for each node
    a =(Node*) malloc(sizeof(Node));
    b =(Node*) malloc(sizeof(Node));
    c =(Node*) malloc(sizeof(Node));

    //Insert data and connect the nodes
    a->data = 10;
    b->data = 20;
    c->data = 30;
    a->next= b;
    b->next= c;
    c->next= NULL;

    //Traverse the linked list
    temp = a;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}
