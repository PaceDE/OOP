#include<iostream>

using namespace std;

class box
{
    double length;
    double breadth;
    double height;

    public:

    box()
    {
        cout<<"Constructor get called";
    }
    box(double l,double b,double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    double getArea();
    double getVolume();


};
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
    cout<<"Enter the Length, Breadth, Height of the box :"<<endl;
    cin>>l>>b>>h;
    box ob(l,b,h);
    cout<<"Area= "<<ob.getArea()<<endl;
    cout<<"Volume= "<<ob.getVolume()<<endl;

    return 0;

}
