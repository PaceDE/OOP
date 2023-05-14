#include<iostream>
using namespace std;
int &test_ref()
{
   extern int a;
   return a;
}
int main()
{
    extern int a;
    test_ref()=10;
    cout<<"a= "<<a<<endl;
    return 0;
}
int a;

