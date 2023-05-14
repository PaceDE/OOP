#include<iostream>
using namespace std;
class MCM
{
    int meter;
    int cm;
public:
    MCM(int m,int c):meter(m),cm(c){}
    int get_m()
    {
        return meter;
    }
    int get_cm()
    {
        return cm;
    }
    void display()
    {
        cout<<meter<<"m "<<cm<<"cm = ";
    }
};
class FI
{
    int feet;
    int inch;
public:
    FI(){}
    FI(MCM ob)
    {
        int m=ob.get_m();
        int c=ob.get_cm();
        int total_cm;
        total_cm=m*100+c;
        inch=total_cm*0.4;
        feet=inch/12;
        inch=inch%12;
    }
     void display()
    {
        cout<<feet<<"f "<<inch<<"i";
    }
};

int main()
{
    MCM ob1(6,40);
    FI ob2=ob1;
    ob1.display();
    ob2.display();
}
