
#include <iostream>
using namespace std;
class Person{
    string name;
    int age;
public:
    Person(){
    name="noname";
    age=0;
    }
   friend ostream &operator << (ostream &output,Person &p);
   friend istream &operator >>(istream &input,Person &p);
};

    ostream & operator << (ostream &output, Person &p){
    output<<"My name is "<<p.name<<" and age is "<<p.age;
    }
   istream &operator >>(istream &input,Person &p){

   input>>p.name>>p.age;

   }


int main()
{
    Person a;
    cout<<"What is ur name and age";
    cin>>a;
    cout<<a;


}
