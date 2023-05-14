#include<iostream>
using namespace std;
class A{
protected:
    int a;
public:
    void display()
    {
        cout<<a;
    }
};
class B:public virtual A{
public:


};
class C:public virtual A,public B
{
public:
    C(int x)
    {
        B::a=x;
    }

};
int main()
{
    C ob(2);
    ob.A::display();
    return 0;
}
