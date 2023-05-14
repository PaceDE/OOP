#include<iostream>

using namespace std;

class box
{
public:
    double l;
    double b;
    double h;
    double getArea()
    {
        return(2*(l*b+b*h+h*l));
    }
    double getVolume()
    {

        return(l*b*h);
    }
    void displaydimension()
    {
        cout<<l<<"*"<<b<<"*"<<h<<endl;
        return;
    }
};

int main()
{
    box ob;
    cout<<"Enter the Length, Breadth, Height of the box :"<<endl;
    cin>>ob.l>>ob.b>>ob.h;
    cout<<"Length : "<<ob.l<<", Breadth: "<<ob.b<<", Height : "<<ob.h<<endl;
    cout<<"Dimension : ";
    ob.displaydimension();
    cout<<"Area : "<<ob.getArea()<<endl;
    cout<<"Volume : "<<ob.getVolume()<<endl;
    return 0;

}
