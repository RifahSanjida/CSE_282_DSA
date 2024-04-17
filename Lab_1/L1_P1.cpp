//Practice Exercise 1. Write a C++ program to store and print the roll no., name, age, and marks of a student using structures.
#include<iostream>
#include<string>
using namespace std;

struct student
{
    int rollNo;
    string name;
    int age;
    float marks;
};

int main()
{
    struct student s1;

    s1.rollNo = 28;
    s1.name = "Alex";
    s1.age = 19;
    s1.marks = 246;

    cout<<"Roll no: "<<s1.rollNo<<endl;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Age: "<<s1.age<<endl;
    cout<<"Marks: "<<s1.marks<<endl;

    return 0;
}
