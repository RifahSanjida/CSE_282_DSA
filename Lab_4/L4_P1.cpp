//Practice Exercise 1: 1. Take 5 integer values into a stack. Find the summation of all the stack elements.
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<int>mystack;
    int value;
    cout<<"Enter 5 integer values:"<<endl;
    for(int i = 0; i < 5; i++)
    {
        cin>>value;
        mystack.push(value);
    }
    int sum = 0;
    while(!mystack.empty())
    {
        sum += mystack.top();
        mystack.pop();
    }
    cout<<"Summation of all stack elements: "<<sum<<endl;
    return 0;
}
