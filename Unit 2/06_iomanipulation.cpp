#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=5,b=6;
    cout<<"In dec: "<<dec<<10<<endl;
    cout<<"In hexa: "<<hex<<10<<endl;
    cout<<"In octal: "<<oct<<10<<endl;
    cout<<setbase(16)<<10<<endl;
    cout<<setw(16)<<"Hello world"<<endl;
}
