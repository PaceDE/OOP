#include<iostream>
using namespace std;
class A{
	public:

		void display()
		{
		    cout<<"A called";
		}
};
class B:public A{
	public:

		void display()
		{
		    cout<<"B called";
		}

};
int main()
{
	B b;
	b.display();f

}
