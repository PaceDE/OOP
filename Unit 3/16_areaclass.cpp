//cpp program to understand class and objects+
#include<iostream>
using namespace std;
class box
{
    public:
    double length;
    double breadth;
    double height;
    double getArea()
    {

        return(2*(length*breadth+breadth*height+length*height));
    }
    double getVolume()
    {
        return(length*breadth*height);
    }
    void displaydimension()
    {
        cout <<length<<"*"<<breadth<<"*"<<height<< endl;


        return;
    }
};
int main()
{
    box ob; // object is  created
    cout<<"Enter the length,breadth and height of the box : "<<endl;
    cin>>ob.length>>ob.breadth>>ob.height;
    cout<<"Length : "<<ob.length<<", Breadth : "<<ob.breadth<< ", Height : "<<ob.height<<endl;
    cout<<"Area = "<<ob.getArea()<<endl;
    cout<<"Volume = "<<ob.getVolume()<<endl;
    cout<<"Dimension : = ";
    ob.displaydimension();
    return 0;
}
