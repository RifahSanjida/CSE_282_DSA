//Practice Exercise 3. Enter the marks of 5 students in Chemistry,
//Mathematics, and Physics (each out of 100) using a structure named
//Marks having elements roll no., name, chem_marks, maths_marks, and
//phy_marks and then display the percentage of each student.
#include<iostream>
#include<string>
using namespace std;

struct Mark
{
    int rollNo;
    string name;
    int chem_marks, math_marks, phy_marks;
    float percentage;
};

int main()
{
    struct Mark students[5];
    for(int i = 0; i < 5; i++)
    {
        cout<<"Enter details for student "<<i+1<<":"<<endl;
        cout<<"Roll no: ";
        cin>>students[i].rollNo;
        cout<<"Name: ";
        cin>>students[i].name;
        cout<<"Chemistry Marks: ";
        cin>>students[i].chem_marks;
        cout<<"Mathematics Marks: ";
        cin>>students[i].math_marks;
        cout<<"Physics Marks: ";
        cin>>students[i].phy_marks;
    }

    cout<<"\nStudents details and percentage:\n";
    for(int i = 0; i < 5; i++)
    {
        students[i].percentage = (students[i].chem_marks + students[i].math_marks + students[i].phy_marks)/300.0*100.0;
        cout<<"Student "<<i + 1<<":"<<endl;
        cout<<"Roll no: "<<students[i].rollNo<<endl;
        cout<<"Name: "<<students[i].name<<endl;
        cout<<"Percentage: "<<students[i].percentage<<endl;
        cout<<endl;
    }

    return 0;
}
