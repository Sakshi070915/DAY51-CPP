#include<iostream>
using namespace std;
int main()
{
    int*ptr;

    ptr = new int;

    *ptr = 10;

    cout<<"Address : "<<ptr<<endl;
    cout<<"Values : "<<*ptr;
    return 0;

}