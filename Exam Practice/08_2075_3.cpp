#include<iostream>
using namespace std;
class Person
{
    string name;
    int age;
public:
    friend istream& operator >>(istream& input, Person & p);
    friend ostream& operator <<(ostream& output, Person & p);
};
    istream& operator >>(istream& input, Person& p)
    {
        input>>p.name;
        input>>p.age;
        return input;
    }
    ostream& operator <<(ostream& output, Person & p)
    {
        output<<"Name: "<<p.name<<endl;
        output<<"Age: "<<p.age;
        return output;
    }

    int main()
    {
        Person p;
        cout<<"Enter the name and age of Person: ";
        cin>>p;
        cout<<p;
    }
