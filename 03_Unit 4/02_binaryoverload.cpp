#include<iostream>
using namespace std;
class complex
{
    int real,img;
public:
    complex(int,int);
    complex();
    void display();
    complex operator +(const complex &ob);


};
complex::complex(int r,int i):real(r),img(i)
{
    return;
}
complex::complex():real(0),img(0)
{
    return;
}
void complex::display()
{
    if(img>0)
       cout<<real<<"+"<<img<<"i"<<endl;
    else
       cout<<real<<img<<"i"<<endl;
}
complex complex::operator+(const complex &ob)
{
    complex temp;
    temp.real=real+ob.real;
    temp.img=img+ob.img;
    return temp;
}
int main()
{
    complex a(2,3),b(3,-4);
    a.display();
    b.display();
    complex c=a+b;
    c.display();
    return 0;
}
