#include<iostream>
using namespace std;
int main()
{
    int i;
    int *p;
    p=new int[5];
    for(i=0;i<5;i++)
    {
        cin>>p[i];

    }for(i=0;i<5;i++)
    {
        cout<<p[i];

    }
}
