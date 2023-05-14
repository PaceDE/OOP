#include<iostream>
using namespace std;
class shape
{
protected:
    int length;
    int breadth;
public:
   shape(int l,int b):length(l),breadth(b){
   cout<<"From A"<<endl;

   }

   ~shape(){
   cout<<"A destruct"<<endl;
   }


};

class rectangle:public shape
{
    int height;
public:
    rectangle(int l,int b,int h):shape(l,b),height(h){
   cout<<"From B"<<endl;

    }
    ~rectangle()
    {
        cout<<"B destruct"<<endl;
    }

    int getArea()
    {
        return length*breadth;
    }
};

int main()
{
    rectangle ob(20,30,40);
    cout<<"Area: "<<ob.getArea();
    return 0;
}
