#include<iostream>
#include<string>
using namespace std;
class Employee{
	private:
		string name;
		double salary;
	public:
		Employee(string n,double s);
		~Employee();

		string getName();
		double getSalary();
};
//Using Initialization Lists to Initialize Fields
Employee::Employee(string n,double s):name(n),salary(s){
	cout<<"object is being created: "<<endl;
}
string Employee::getName(){
	return name;
}
Employee::~Employee(){
	cout<<"The object is being deleted"<<endl;
}

double Employee::getSalary(){
	return salary;
}
int main()
{
	Employee e("Ram",2000);
	cout<<"Name: "<<e.getName()<<" Salary: "<<e.getSalary()<<endl;

}
