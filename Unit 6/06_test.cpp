#include<iostream>
using namespace std;
template<class Messi>
Messi sum(Messi a,Messi b)
{
    return(a+b);
}
int main()
{
    cout<<"Sum1: "<<sum(10.75,2.25)<<endl;
    cout<<"Sum2: "<<sum(10,2)<<endl;
    cout<<"Sum3: "<<sum(char(65),char(2))<<endl;
    return 0;
}
