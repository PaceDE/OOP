#include<iostream>

using namespace std;

class box
{
    double length;
    double breadth;
    double height;
public:
    void setlength(double );
    void setbreadth(double );
    void setheight(double );

    double getlength();
    double getbreadth();
    double getheight();

    double getArea();
    double getVolume();
};
void box ::setlength(double l)
{
    length=l;
}
void box ::setbreadth(double b)
{
    breadth=b;
}
void box ::setheight(double h)
{
    height=h;
}

double box::getlength()
{
    return length;
}
double box::getbreadth()
{
    return breadth;
}
double box::getheight()
{
    return height;
}


    double box:: getArea()
    {
        return(2*(length*breadth+breadth*height+height*length));
    }
    double box::getVolume()
    {

        return(length*breadth*height);
    }

int main()
{
    double l,b,h;
    box ob;
    cout<<"Enter the Length, Breadth, Height of the box :"<<endl;
    cin>>l>>b>>h;
    ob.setlength(l);
    ob.setbreadth(b);
    ob.setheight(h);

  cout<<"Length = "<<ob.getlength()<<endl;
  cout<<"Breadth = "<<ob.getbreadth()<<endl;
  cout<<"Height = "<<ob.getheight()<<endl;

  cout<<"Area= "<<ob.getArea()<<endl;
  cout<<"Volume= "<<ob.getVolume()<<endl;
    return 0;

}
