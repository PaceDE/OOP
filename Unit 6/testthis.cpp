#include<iostream>
using namespace std;
class A{
int x;
int y;
public:
    A &setx()
    {
        x=10;
        return *this;

    }
     void sety()
    {
        y=20;


    }
    void show()
    {

        cout<<"X: "<<x<<" y: "<<y;
    }

};
int main()
{
    A ob;
    ob.setx().sety();
    ob.show();

}
