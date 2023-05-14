#include<iostream>
#include<string>
using namespace std;
class Address{
		string address;
	public:
		Address(string a):address(a){
		}
		void display()
		{
			cout<<"Address: "<<address<<endl;

		}
};

class Employee{
	Address *add; // employee has-a address
	string name;
	public:
		Employee(string n, Address *addr):name(n),add(addr){

		}

		void display(){
			cout<<"Name: "<<name<<endl;
			add->display();
		}
};

int main()
{
	Address a("kathmandu,Nepal");
	Employee e("Ram",&a);
	e.display();
}
