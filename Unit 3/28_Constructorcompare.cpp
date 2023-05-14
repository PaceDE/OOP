#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    double marks;
    public:
    student(string,int,double);
    void display_info();
    double getPer();
    student compare(student o1,student o2)
    {
        if(o1.getPer()>o2.getPer())
            return o1;
        else
            return o2;
    }


};
student::student(string n,int a,double m):name(n),age(a),marks(m)
{
    return;
}
void student::display_info()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Marks: "<<marks<<endl;
    return;
}
double student::getPer()
{
     return(marks/5);
}
int main()
{
    string n1,n2;
    int a1,a2;
    double m1,m2;
    cout<<"Enter the name, age, marks of first student:"<<endl;
    cin>>n1>>a1>>m1;
    cout<<"Enter the name, age, marks of second student:"<<endl;
    cin>>n2>>a2>>m2;
    student ob1(n1,a1,m1),ob2(n2,a2,m2);
    cout<<endl<<"The info of first student:"<<endl;
    ob1.display_info();
    cout<<"Percentage: "<<ob1.getPer()<<endl;
    cout<<endl<<"The info of second student:"<<endl;
    ob2.display_info();
    cout<<"Percentage: "<<ob2.getPer()<<endl;
    student temp=temp.compare(ob1,ob2);
    cout<<endl<<"The info of student with higher percentage is"<<endl;
    temp.display_info();
    cout<<"Percentage: "<<temp.getPer()<<endl;
    return 0;

}
