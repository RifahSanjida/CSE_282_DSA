//Practice Exercise 2. Write a C++ program to store roll no. (starting from 1), name and age of 5 students and then print the details of the student with roll no. 2.
#include<iostream>
#include<string>
using namespace std;

struct student
{
    int rollno;
    string name;
    int age;
};

int main()
{
    struct student s1;
    s1.rollno = 01;
    s1.name = "Steve";
    s1.age = 23;

    struct student s2;
    s2.rollno = 02;
    s2.name = "Tony";
    s2.age = 21;

    struct student s3;
    s3.rollno = 03;
    s3.name = "Clint";
    s3.age = 20;

    struct student s4;
    s4.rollno = 04;
    s4.name = "Natasha";
    s4.age = 18;

    struct student s5;
    s5.rollno = 05;
    s5.name = "Bruce";
    s5.age = 25;

    cout<<"Displaying the details of the student with roll no. 2: "<<endl;
    cout<<"Roll no: "<<s2.rollno<<endl;
    cout<<"Name: "<<s2.name<<endl;
    cout<<"Age: "<<s2.age<<endl;


    return 0;
}
