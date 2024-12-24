//Delete operator demonstration
#include<iostream>
using namespace std;
int main()
{
    int*pnt = new int;
    *pnt =5;
    cout<<*pnt<<endl;
    delete pnt;
    cout<<*pnt;
    return 0;

}