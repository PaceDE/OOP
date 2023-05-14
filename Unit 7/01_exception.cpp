#include<iostream>
using namespace std;
int main()
{
    int a[]={10,20,30,40};
    int size=sizeof(a)/sizeof(int);
    int pos;
    cout<<size<<endl;
    for(int i=0;i<2;i++)
    {

    cout<<"Enter index of array: ";
    cin>>pos;
    try
    {
        if(pos<size)
            cout<<"a["<<pos<<"] : "<<a[pos]<<endl;
        else
            throw "size exceeds";
    }
    catch(const char* c)
    {
        cout<<"Out of the index error"<<endl;
    }
    }

    return 0;
}
