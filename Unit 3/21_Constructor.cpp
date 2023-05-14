#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    double marks;

public:

    student(string n,int a,double m)
    {
        name=n;
        age=a;
        marks=m;
    }
    string getName();
    int getAge();
    double getMarks();
    double calcPer(double);


};

    string student:: getName()
    {
        return(name);
    }
    int student:: getAge()
    {
        return (age);
    }
    double student:: getMarks()
    {
        return(marks);
    }
    double student:: calcPer(double m)
    {
        return(m/5);
    }
int main()
{
    string n;
    int a;
    double m;
    cout<<"Enter the name of student"<<endl;
    cin>>n;
    cout<<"Enter the age of student"<<endl;
    cin>>a;
    cout<<"Enter the marks of student"<<endl;
    cin>>m;
    student ob(n,a,m);
    cout<<"The entered information are "<<endl;
    cout<<"The name is "<<ob.getName()<<endl;
    cout<<"The age is "<<ob.getAge()<<endl;
    cout<<"The marks is "<<ob.getMarks()<<endl;
    cout<<"The oercentage is "<<ob.calcPer(m)<<endl;


}
