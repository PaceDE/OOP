#include<iostream>
using namespace std;
class student
{
    string name;
    int age;
    double marks[5];
    public:
    student(string,int,double []);
    void display_info();
    double getPer();
    student compare(student ob1,student ob2)
    {
        if(ob1.getPer()>ob2.getPer())
            return ob1;
        else
            return ob2;
    }


student (const student & ob)
    {
        int i;
        name=ob.name;
        age=ob.age;
        for(i=0;i<5;i++)
        {
            marks[i]=ob.marks[i];
        }


    }


};
student::student(string n,int a,double m[5]):name(n),age(a)
{
   int i;
   for(i=0;i<5;i++)
   {
       marks[i]=m[i];
   }

}
void student::display_info()
{
    int i;
    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Marks: ";
    for(i=0;i<5;i++)
    {
        cout<<marks[i]<<"\t";
    }
    cout<<"\nPercentae: "<<getPer();

}
double student::getPer()
{
    double per=0;
    int i;
    for(i=0;i<5;i++)
    {
        per+=marks[i];
    }
    return (per/5);

}

int main()
{
    string n1,n2;
    int a1,a2;
    double m1[5]={2,3,4,5,100},m2[5]={200,45,6,2,6};
    int i;
    cout<<"Enter the name, age of first student:"<<endl;
    cin>>n1>>a1;
    cout<<"Enter the name, age of second student:"<<endl;
    cin>>n2>>a2;


    student ob1(n1,a1,m1),ob2(n2,a2,m2);
    cout<<endl<<"\nThe info of first student:"<<endl;
    ob1.display_info();

    cout<<endl<<"\nThe info of second student:"<<endl;
    ob2.display_info();


    student temp=temp.compare(ob1,ob2);
    cout<<endl<<"\nThe student with higher percentage is"<<endl;
    temp.display_info();

    return 0;

}
