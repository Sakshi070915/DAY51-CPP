#include<iostream>
using namespace std;

int main()
{
    int*ptr1;
    int*ptr2;
    ptr1 = new int;
    ptr2 = new int;
    cout<<"Enter first number:"<<endl;
    cin>> *ptr1;
    cout<<"Enter second number:"<<endl;
    cin>> *ptr2;
    int sum= *ptr1 + *ptr2;
    cout<<"Sum of pointer variables = "<<sum<<endl;
    delete ptr1;
    delete ptr2;
    return 0;
}