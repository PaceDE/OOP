#include<iostream>
using namespace std;
int main()
{
    int i;
    int *p;
    p=new (nothrow)int[5];
    if(!p)
    {
        cout<<"Failed"<<endl;
    }
    else
    {

    for(i=0;i<5;i++)
    {
        cin>>p[i];

    }
    }
    for(i=0;i<5;i++)
    {
        cout<<p[i];

    }
    delete []p;
}
