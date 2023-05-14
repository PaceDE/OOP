#include<iostream>
using namespace std;
class shape
{
protected:
    int length;
    int breadth;
public:
    shape(int l,int b):length(l),breadth(b){}
};

class cuboid:public shape
{
    int height;
    public:
    cuboid(int l,int b,int h):shape(l,b),height(h){}
    int volume()
    {
        return(length*breadth*height);
    }
};
class rectangle:public shape
{
    string color;
public:
    rectangle(int l,int b,string c):shape(l,b),color(c){}
    int area()
    {
        return(length*breadth);
    }
    string getColor()
    {
        return color;
    }
};


int main()
{
    cuboid c(20,30,40);
    cout<<"Volume: "<<c.volume()<<endl;
    rectangle r(10,20,"Red");
    cout<<r.getColor()<<" color rectangle has area of "<<r.area()<<endl;
    return 0;
}
