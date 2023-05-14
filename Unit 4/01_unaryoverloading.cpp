#include<iostream>
using namespace std;
 class count
 {
     int value;
     public:
     count(int);
     ~count();
     void operator ++();//pre
     void operator ++(int);//post
     int getValue();
 };
 count::count(int i):value(i)
 {
     return;
 }
 count::~count()
 {
     cout<<"Destructor get called at last: "<<endl;
 }
 void count:: operator++()
 {
     ++value;
 }
 void count::operator++(int)
 {
     value++;
 }
 int count::getValue()
 {
     return value;
 }
 int main()
 {
     count a(10);
     cout<<"value before increment: "<<a.getValue()<<endl;
     a++;
     cout<<"value after post increment: "<<a.getValue()<<endl;
     ++a;
     cout<<"value after pre increment: "<<a.getValue()<<endl;

     return 0;
 }
