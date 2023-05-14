#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char c='d';
    int a=5,b=6;
    cout<<"In dec: "<<dec<<10<<endl;
    cout<<"In hexa: "<<hex<<10<<endl;
    cout<<"In octal: "<<oct<<10<<endl;
    cout<<setbase(16)<<10<<endl;
    cout<<setfill('@');
    cout<<setprecision(3)<<2.41567<<endl;
    cout<<fixed<<setprecision(3)<<2.41567<<endl;
    cout<<scientific<<setprecision(3)<<2.41567<<endl;

}
