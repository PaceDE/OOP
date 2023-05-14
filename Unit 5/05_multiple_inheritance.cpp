#include<iostream>
using namespace std;
class parent1
{
protected:
    int x;

public:
    parent1(int a):x(a){}



}
;class parent2
{
protected:
    int y;

public:
    parent2(int b):y(b){}



};
class child :public parent1,public parent2
{
    int z;
public:
    child(int a,int b,int c):parent1(a),parent2(b),z(c){

        }
    void display()
    {
        cout<<"x= "<<x<<" y= "<<y<<"z: "<<z<<endl;
    }
};
int main()
{
    child c(10,20,30);
    c.display();
    return 0;
}

