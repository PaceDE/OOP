#include<iostream>
using namespace std;
int main()
{
    int i;
    int *p;
    p=new (nothrow)int;
    if(!p)
    {
        cout<<"Failed"<<endl;
    }
    else
    {
        *p=30;
        cout<<*p<<endl;
        cout<<p;
    }

}
