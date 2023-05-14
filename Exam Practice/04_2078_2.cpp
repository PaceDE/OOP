#include<iostream>
using namespace std;
class FI
{
    int feet;
    int inch;
public:
    FI(){}
    FI(int f,int i)
    {
        feet=f;
        inch=i;
    }
    void DFI()
    {
        cout<<feet<<"f "<<inch<<"i"<<endl;
    }

};
 class MCM
 {
     int meter;
     int cm;
 public:
     MCM(int m,int c)
     {
         meter=m;
         cm=c;
     }
      void DMCM()
    {
        cout<<meter<<"m "<<cm<<"c  =  ";
    }

     operator FI()
     {
         int f;
         int i;
         i=meter*100+cm;
         i=i*0.4;
         f=i/12;
         i=i%12;

         FI temp(f,i);
         return temp;
     }


 };

 int main()
 {

     MCM ob1(2,45);
     FI ob2=ob1;
     ob1.DMCM();
     ob2.DFI();

 }
