#include<iostream>
using namespace std;
template<class A,class B>
void display(A a, B b)
{
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
}
template<class A>
 void display(A a)
{
    cout<<"c: "<<a<<endl;
}
int main()
{
   display(10.67,18);
   display('C');
   return 0;
}
