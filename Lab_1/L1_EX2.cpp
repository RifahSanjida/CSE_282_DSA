//Example 2: Write a C++ program to access structure members using pointers.
#include<iostream>
using namespace std;

struct Person
{
    int age;
    float weight;
};

int main()
{
    struct Person person1;
    struct Person *personPtr;
    personPtr = &person1;

    cout<<"Enter age: ";
    cin>>personPtr->age;

    cout<<"Enter weight: ";
    cin>>personPtr->weight;

    cout<<"Displaying:\n";
    cout<<"Age: "<<personPtr->age<<endl;
    cout<<"Weight: "<<personPtr->weight<<endl;

    return 0;
}
