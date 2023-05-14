#include<iostream>
using namespace std;
class Teacher
{

    int tid;
    string subject;
public:
    void Tread()
    {
        cout<<"Enter the id of Teacher: ";
        cin>>tid;
        cout<<"Enter the subject of the teacher: ";
        cin>>subject;
    }
    void Tdisplay()
    {
        cout<<"Teacher's id: "<<tid<<endl;
        cout<<"Teacher's subject: "<<subject<<endl;
    }
};

class Staff
{

    int sid;
    string position;
public:
    void Sread()
    {
        cout<<"Enter the id of Staff: ";
        cin>>sid;
        cout<<"Enter the position of staff: ";
        cin>>position;
    }
    void Sdisplay()
    {
        cout<<"Staff id: "<<sid<<endl;
        cout<<"Staff positio : "<<position<<endl;
    }
};

class Coordinator:public Teacher,public Staff
{
    string department;
public:
    void Cread()
    {
        cout<<"Enter the department: ";
        cin>>department;
    }
    void Cdisplay()
    {
        cout<<"Department : "<<department<<endl;
    }

};
int main()
{
    Coordinator c1,c2;
    c1.Tread();
    c1.Cread();
    c2.Sread();
    c2.Cread();
    c1.Tdisplay();
    c1.Cdisplay();
    c2.Sdisplay();
    c2.Cdisplay();

    return 0;
}

