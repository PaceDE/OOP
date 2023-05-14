#include<iostream>

using namespace std;

class shape
{
public:
    double l;
    double b;
    double Area()
    {
        return(l*b);
    }

};

int main()
{
    shape ob;
    cout<<"Enter the Length, Breadth :"<<endl;
    cin>>ob.l>>ob.b;
    cout<<"Length : "<<ob.l<<", Breadth : "<<ob.b<<endl;
    cout<<"Area : "<<ob.Area()<<endl;

    return 0;

}
