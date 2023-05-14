#include<iostream>
using namespace std;
class Comlex
{
    int real,img;
public:
    Comlex(int,int);
    Comlex();
    void display();
    Comlex operator +(const Comlex &ob);
};
Comlex::Comlex(int r,int i):real(r),img(i)
{
    return;
}
Comlex::Comlex():real(0),img(0)
{
    return;
}
void Comlex::display()
{
    if(img>0)
       cout<<real<<"+"<<img<<"i"<<endl;
    else
       cout<<real<<img<<"i"<<endl;
}
Comlex Comlex::operator+(const Comlex &ob)
{
    Comlex temp;
    temp.real=real+ob.real;
    temp.img=img+ob.img;
    return temp;
}
int main()
{
    Comlex a(2,3),b(3,-4);
    a.display();
    b.display();
    Comlex c=a+b;
    c.display();
    return 0;
}
