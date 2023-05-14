#include<iostream>
using namespace std;
class parent
{
protected:
    int x;
    int y;
public:


    parent(int a,int b):x(a),y(b)
    {
        cout<<"parent constructor"<<endl;


    }
};
class child :public parent
{
    int z;
public:
    child(int a,int b,int c):parent(a,b),z(c)
    {
          cout<<"default constructor"<<endl;
    }
    void display()
    {
        cout<<"x= "<<x<<" y= "<<y<<"z: "<<z<<endl;
    }
};
int main()
{
    child c(10,20,30);
    c.display();
    return 0;
}

