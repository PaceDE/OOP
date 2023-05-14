#include<iostream>
using namespace std;

class Person
{
    protected:
    string name;
    int age;
public:
    Person(string n,int a):name(n),age(a){}
    virtual void display()=0;

    virtual double calcPer()=0;
};

class Student:public Person
{
    int marks[5];
public:
    Student(string n,int a):Person(n,a){

        cout<<"Enter the marks: "<<endl;
        for(int i=0;i<5;i++)
        {
            cin>>marks[i];
        }
    }
    double calcPer()
    {
        double m;
        for(int i=0;i<5;i++)
        {
            m+=marks[i];
        }
        return m/5;
    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};

int main()
{
    Student ob1("Messi",35);
    Person *ob=&ob1;
    ob->display();
    cout<<"Percentage: "<<ob->calcPer()<<"%"<<endl;

    return 0;
}
