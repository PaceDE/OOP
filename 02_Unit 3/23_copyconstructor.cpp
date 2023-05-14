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
    rectangle (const rectangle & ob)
    {
        length=ob.length;
        breadth=ob.breadth;
    }
    void change()
    {
        length=30;
        breadth=40;
    }
};
int rectangle:: area()
{
    return(length*breadth);
}
rectangle::rectangle()
{
    length=10;
    breadth=10;
}

rectangle::rectangle(int l,int b)
{
    length=l;
    breadth=b;
}
int main()
{
    rectangle ob1,ob2(2,5);
    cout<<"Area1 = "<<ob1.area()<<endl;
    cout<<"area 2= "<<ob2.area()<<endl;
    rectangle ob3=ob2;
    cout<<"aRea3 = "<<ob3.area()<<endl;

    return 0;

}
