//cpp program to understand class and objects+
#include<iostream>
using namespace std;
class shape
{
    public:
    double length;
    double breadth;
    double area()
    {
        return(length*breadth);
    }
};
int main()
{
    shape ob; // object is not created
    ob.length=10;
    ob.breadth=5;
    cout<<ob.length<<endl;
    cout<<ob.breadth<<endl;
    cout<<"Area = "<<ob.area();
    return 0;
}
