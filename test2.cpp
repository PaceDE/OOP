#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Student{
    string name;
    int age;
    double marks[3];
    double percentage;
public:

    Student(string n,int a,double m[]);
    static void heading();
    void display_info();
};
 Student::Student(string n,int a,double m[]){
        name=n;
        age=a;
        int i;
        percentage=0;
        for(int i=0;i<3;i++){
            marks[i]=m[i];
            percentage+=marks[i];
        }
        percentage=percentage/3;
    }

    void Student::heading(){
    ofstream file;
    file.open("./Unit 9/file/Exam.txt",ios::out);

    file<<"Name\t Age\t Obtained(%)\n";
    file<<"-----------------------------------------\n";
    file.close();
    }
    void Student::display_info(){
    fstream file;
    file.open("./Unit 9/file/Exam.txt",ios::app);
    file<<name<<"\t"<<age<<"\t"<<percentage<<endl;
    file.close();
    }

int main(){
    double ob1m[3]={89,98,86};
    double ob2m[3]={91,92,87};
    Student ob1("Ram",19,ob1m);
    Student ob2("Shyam",20,ob2m);
    Student::heading();
    ob1.display_info();
    ob2.display_info();


    return 0;
}
