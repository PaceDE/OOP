#include<iostream>
using namespace std;
class A
{
public:
    virtual void display()
    {
        cout<<"display() method of class A"<<endl;
    }
};

class B:public A
{
public:
    void display()
    {
        cout<<"display() method of class B"<<endl;
    }
};

int main()
{
    B b;
    A *ob= &b;
    ob->display();

    return 0;
}
