#include<iostream>
using namespace std;
class Account
{
    long int accno;
    long int balance;
    static int min_balance;
public:
    void Aread(int i)
    {
        cout<<"#"<<i+1<<" Enter the acc no of : ";
        cin>>accno;
        cout<<"#"<<i+1<<" Enter the Balance: ";
        cin>>balance;
    }
    void Adisplay(int i)
    {
        cout<<"#"<<i+1<<". Acc no: "<<accno<<endl;
        cout<<"#"<<i+1<<". Balance: "<<balance<<endl;
    }
    static void min_blc()
    {
        cout<<"Minimum Balance: "<<min_balance<<endl;
    }
};
int Account::min_balance=1000;
int main()
{
    Account a[3];
    int i;
    for(i=0;i<3;i++)
    {
        a[i].Aread(i);
    }
    for(i=0;i<3;i++)
    {
        a[i].Adisplay(i);
        Account::min_blc();
    }
}
