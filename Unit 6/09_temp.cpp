#include<iostream>
using namespace std;
template<class leo,class messi>
class student
{
    leo name;
    messi age;
public:
    student(leo n,messi a)
    {
        this->name=n;
        this->age=a;
    }
    void display()
    {
        cout<<"Name: "<<this->name<<endl<<"Age: "<<this->age<<endl;
    }
};
int main()
{
    student<string,int>ob("Messi",35);
    ob.display();
}

