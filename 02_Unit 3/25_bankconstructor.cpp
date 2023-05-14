#include<iostream>
using namespace std;
class bank
{
    string costumer_name;
    double balance_amount;

public:

    bank(string name,double balance)
    {
        costumer_name=name;
        balance_amount=balance;

    }
    string getName();
    double getBalance();
    double newBalance(int);
    double Withdraw(int);




};

    string bank:: getName()
    {
        return(costumer_name);
    }

  double bank:: getBalance()
  {
        return(balance_amount);
  }
    double bank:: newBalance(int d)

    {
        balance_amount+=d;
        return(balance_amount);
    }
    double bank:: Withdraw(int w)
    {
    	if(w<balance_amount)
        {
    	balance_amount-=w;
        return(balance_amount);
        }
    	else
    	return balance_amount;
    }
int main()
{   char c;
    int choice;
    string n;
    double b;
    int d;
    int w;
    cout<<"Enter the name of costumer"<<endl;
    cin>>n;
    bank ob(n,1000000);
    cout<<"1.Detail"<<endl<<"2.Deposit"<<endl<<"3.Withdraw"<<endl;


    do{
    cout<<"Enter the option: ";
    cin>>choice;
    cout<<endl;
    switch (choice)
    {
    	case 1:
    	     cout<<"The required detail are : "<<endl;
    	     cout<<"The name of costumer : "<<ob.getName()<<endl;
    	     cout<<"The balance of costumer : "<<ob.getBalance()<<endl;
    	     break;
    	 case 2:
    	     cout<<"Enter the amount to be deposited: ";
    	     cin>>d;
    	     cout<<"New balance : "<<ob.newBalance(d);

    	     break;

    	     case 3:
    	         cout<<"Enter the amount to withdraw : ";
    	         cin>>w;
    	         cout<<"New balance : "<<ob.Withdraw(w);
    	     default:
    	     break;
    }
    cout<<endl;
    cout<<"DO you want to continue"<<endl<<"Press Y to continue N to exit: ";
    cin>>c;
    cout<<endl;
    }while(c=='Y');



    return 0;


}
