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
    rectangle& compare(rectangle &o1,rectangle &o2)
    {
        if(o1.area()> o2.area())

                return o1;
            else
                return o2;

    }
    rectangle (const rectangle & ob)
    {
        length=ob.length;
        breadth=ob.breadth;
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
    rectangle ob1,ob4,ob2(2,5);
    cout<<"Area = "<<ob1.area()<<endl;
    cout<<"area = "<<ob2.area()<<endl;
    rectangle temp=temp.compare(ob2,ob4);
    cout<<"The largest area is "<<temp.area()<<endl;



    return 0;

}
