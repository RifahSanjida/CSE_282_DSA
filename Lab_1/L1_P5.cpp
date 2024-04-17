//Practice Exercise 5. Write a C++ program to subtract two complex numbers.
#include<iostream>
using namespace std;

struct ComplexNumber
{
    double real, img;
};

struct ComplexNumber subtract(ComplexNumber c1, ComplexNumber c2)
{
    struct ComplexNumber result;
    result.real = c1.real - c2.real;
    result.img = c1.img - c2.img;
    return result;
}

int main()
{
    struct ComplexNumber c1 = {3, 4};
    struct ComplexNumber c2 = {1, 2};
    struct ComplexNumber difference = subtract(c1, c2);
    cout<<"Difference: "<<difference.real<<" + "<<difference.img<<"i"<<endl;
    return 0;
}
