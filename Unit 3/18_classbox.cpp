#include<iostream>

using namespace std;

class box
{
    double length;
    double breadth;
    double height;
public:
    void getdimension(double l,double b,double h)
    {
        length=l;
        breadth=b;
        height=h;

    }
    void displaydimension()
    {
        cout<<length<<"*"<<breadth<<"*"<<height<<endl;
        return;
    }
    double getArea()
    {
        return(2*(length*breadth+breadth*height+height*length));
    }
    double getVolume()
    {

        return(length*breadth*height);
    }
};

int main()
{
     double l,b,h;
    box ob;
    cout<<"Enter the Length, Breadth, Height of the box :"<<endl;
    cin>>l>>b>>h;
    ob.getdimension(l,b,h);
    cout<<"Dimension : ";
    ob.displaydimension();
    cout<<"Area : "<<ob.getArea()<<endl;
    cout<<"Volume : "<<ob.getVolume()<<endl;
    return 0;

}
