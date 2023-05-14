#include<iostream>
using namespace std;

class shape
{
public:
    virtual void area()=0;
};

class rectangle:public shape
{
    int length;
    int breadth;
public:
    rectangle(int l,int b):length(l),breadth(b){}
    void area()
    {
        cout<<"Area: "<<length*breadth<<endl;
    }
};

int main()
{
    rectangle obR(2,3);
    shape *ob=&obR;
    ob->area();
    return 0;
}
