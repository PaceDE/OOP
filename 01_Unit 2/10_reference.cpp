#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int &ref=a;
    cout<<a<<endl;
    cout<<ref<<endl;
    a=a+2;
    cout<<a<<endl;
    cout<<ref<<endl;
    return 0;
}
