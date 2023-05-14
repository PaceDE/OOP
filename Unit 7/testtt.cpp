#include<iostream>
using namespace std;
int main()
{
    int c=2;
    try
    {
        if(c==0)
            throw 404;
        if(c==1)
            throw 'x';
        if(c==2)
            throw "haha";
        else
            cout<<"a"<<char(246)<<"b: "<<c<<endl;


    }
    catch(const char a[])
    {
        cout<<"haha error"<<endl;
    }
    catch(...)
    {
        cout<<"404 ad x error";
    }

    cout<<"Hello World"<<endl;
    return 0;
}
