//Practice Exercise 4. Write a C++ program to add two distances in inch-feet using structure.
#include<iostream>
using namespace std;

struct Distance
{
    int feet;
    int inch;
};

struct Distance addDistance(Distance d1, Distance d2)
{
    struct Distance sum;
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;

    if(sum.inch >= 12)
    {
        sum.feet += sum.inch/12;
        sum.inch %= 12;
    }
    return sum;
}

int main()
{
    struct Distance d1, d2, sum;

    cout<<"Enter first distance (feet inches): \n";
    cin>>d1.feet>>d1.inch;

    cout<<"Enter second distance (feet inches): \n";
    cin>>d2.feet>>d2.inch;

    sum = addDistance(d1, d2);

    cout<<"Sum of distance = "<<sum.feet<<" feet "<<sum.inch<<" inches\n";
    return 0;
}
