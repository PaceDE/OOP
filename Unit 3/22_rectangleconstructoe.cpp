#include<iostream>
using namespace std;
class rectangle
{

    int length;
    int breadth;

    public:
        rectangle();
        rectangle(int l,int b);
        int area();

};

int rectangle::area()
{
    return(length*breadth);
}
rectangle::rectangle()
{
      length=10;
      breadth=20;
}
rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}

int main()
{
    rectangle ob1,ob2(2,5);
    cout<<"Area = "<<ob1.area()<<endl;
    cout<<"area = "<<ob2.area()<<endl;
    return 0;
}
