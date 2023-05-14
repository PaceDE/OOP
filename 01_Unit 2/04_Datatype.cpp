#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char e='M';
    int a=10;
    float b=20.40;
    double c=33.45;
    long double d=12.34;
    char ss[]="Ram";
    string dd="sam";
    cout<<"Size of "<<e<<" = "<<sizeof(e)<<endl;
    cout<<"Size of "<<a<<" = "<<sizeof(a)<<endl;
    cout<<"Size of "<<b<<" = "<<sizeof(b)<<endl;
    cout<<"Size of "<<c<<" = "<<sizeof(c)<<endl;    cout<<"Size of "<<d<<" = "<<sizeof(d)<<endl;    cout<<"Size of "<<ss<<" = "<<sizeof(ss)<<endl;
    cout<<"Size of "<<dd<<" = "<<sizeof(dd)<<endl;
    int len1=strlen(ss);
    int len2=dd.length();

    cout<<len1<<len2;
}
