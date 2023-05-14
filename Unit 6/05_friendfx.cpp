#include<iostream>
using namespace std;
class A
{
    int x;
public:
    A()
    {
        x=10;
    }
    friend int get_x(A);

};
int get_x(A obj)
{
    return obj.x;
}
int main()
{
    A a;
    cout<<"x: "<<get_x(a)<<endl;

    return 0;
}
