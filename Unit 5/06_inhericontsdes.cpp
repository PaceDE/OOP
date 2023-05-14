#include<iostream>
using namespace std;
class A{
	public:
		A(){
			cout<<"base class constructor is called"<<endl;
		}
		~A(){
			cout<<"base class DESTRUCTOR is called"<<endl;
		}
		void display()
		{
		    cout<<"A";
		}
};
class B:public A{
	public:
		B(){
			cout<<"derived class constructor is called"<<endl;
		}
		~B(){
			cout<<"derived class DESTRUCTOR is called"<<endl;
		}
		void display()
		{
		    cout<<"B";
		}

};
int main()
{
	B b;

}
