#include<iostream>
using namespace std;
int main()
{
    int a=10,x;
    double b=20.45,c;
    cout<<"a= "<<a<<" b= "<<b<<endl;
    c=a;
    cout<<"c= "<<c<<endl;
    x=b;
    cout<<"x= "<<x<<endl;
    //explicit
    c=(int)b;//c style
    cout<<"b= "<<b<<" c= "<<c<<endl;
    c=int(b);//function style style
    cout<<"b= "<<b<<" c= "<<c<<endl;
    c=static_cast<int>(b);//c style
    cout<<"b= "<<b<<" c= "<<c<<endl;
}
