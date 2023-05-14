#include<iostream>
using namespace std;
int main()
{
    int a=10;
    double b;
    cout<<"Enter any choice: ";
    cin>>b;
    try
    {
        if(b==0)
            cout<<"Hello world";
        else if(b==1)
            throw 404;
        else if(b==2)
            throw 'x';
       else
        cout<<"bye";


    }
    catch(int a)
    {
        cout<<"Integer exception"<<endl;
    }
    catch(char a)
    {
        cout<<"character exception"<<endl;
    }

    return 0;
}
