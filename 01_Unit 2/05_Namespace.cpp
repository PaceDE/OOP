#include<iostream>
using namespace std;
namespace first
{
    int a=20;
}
namespace second
{
    int b=30;
}
using namespace first;

int main()
{
    int b=50;
    cout<<"a= "<<a<<" b= "<<second::b<<endl;
    cout<<b;
    return 0;
}
