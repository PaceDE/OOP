#include<iostream>

using namespace std;
class person
{
protected:
    string name;
    int age;
public:
        person(string n,int a):name(n),age(a){}
        void display()
        {
            cout<<"Name: "<<name<<" Age: "<<age<<endl;
        }
};

class student :public person
{
    double marks;
public:
    student(string n,int a, double m):person(n,a),marks(m){}
    double getPer()
    {
        return marks/5;
    }
      void display()
        {
            cout<<"Name: "<<name<<" Age: "<<age<<" Percentage: "<<getPer()<<endl;
        }
};
int main()
{
    student s("Messi",35,493);
    s.display();

}
