#include<iostream>
using namespace std;
class Shape
{
    int length;
    int breadth;
public:
    Shape(int l,int b)
    {
    this->length=l;
    this->breadth=b;
    }
    void show()
    {
       // cout<<this<<endl;
       cout<<"Length : "<<this->length<<endl;
       cout<<"Breadth : "<<this->breadth<<endl;
    }
};
int main()
{
    Shape s(5,50);
    s.show();
    return 0;
}
