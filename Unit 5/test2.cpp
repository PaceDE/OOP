#include<iostream>
using namespace std;
class shape
{
protected:
    int length;
    int breadth;


};

class rectangle:public shape
{

public:
    rectangle(int l,int b){
    length=l;
    breadth=b;
    }


    int getArea()
    {
        return length*breadth;
    }
};

int main()
{
    rectangle ob(20,30);
    cout<<"Area: "<<ob.getArea();
    return 0;
}
