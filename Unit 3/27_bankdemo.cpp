#include<iostream>
using namespace std;
class Bank
{
    string customer_name;
    double balance;
    public:
        Bank(string,double);
        void display();
        void withdraw(double);
        void deposit(double);

};
Bank::Bank(string name,double bal)
{
    customer_name=name;
    balance=bal;
}
void Bank::display()
{
    cout<<"Following are the Customer Detail: "<<endl;
    cout<<"Name : "<<customer_name<<endl;
    cout<<"Balance amount: "<<balance<<endl;
}
void Bank::withdraw(double w)
{
    if(w>balance)
    {
        cout<<"Insufficient Balance"<<endl;
    }
    else
    {
        cout<<w<<" has been successfully withdrawn"<<endl;
        balance-=w;
    }
        cout<<"New Balance: "<<balance;
}
void Bank::deposit(double d)
{
    cout<<d<<" has been successfully deposited"<<endl;
    balance+=d;
    cout<<"New Balance: "<<balance;
}

int main()
{
    char choice,c;
    int o;
    double w;
    double d;
    string n;
    cout<<"Enter the name of the costumer: ";
    cin>>n;
    Bank ob(n,50000);
    cout<<"1. Detail"<<endl<<"2. Withdraw"<<endl<<"3. Deposit"<<endl;
    do
    {
    cout<<endl;
    cout<<"Enter the option: ";
    cin>>o;
    cout<<endl;
        switch(o)
        {
            case 1:
                ob.display();
                break;
            case 2:
                cout<<"Enter the amount to be withdraw : ";
                cin>>w;
                ob.withdraw(w);
                break;
            case 3:
                cout<<"Enter the amount to deposit: ";
                cin>>d;
                ob.deposit(d);
                break;
            default:
                cout<<"Invalid command"<<endl;
                break;
        }
        cout<<endl<<endl;
        cout<<"Do you want to continue - Y to continue N to exit: ";
        cin>>choice;
    }while(choice=='Y');

    return 0;
}
