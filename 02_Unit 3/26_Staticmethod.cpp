// Understand static method and static variable
#include<iostream>
using namespace std;
class Test
{
public:
    static int ob_count;
    Test();
    static int getCount()
    {
        return ob_count;
    }
};
Test::Test()
{
    cout<<"Default constructor"<<endl;
    ob_count++;
}
int Test::ob_count=0;// init. of static variable
int main()
{
    Test ob1;
    cout<<"objects no: "<<Test::getCount()<<endl;
    Test ob2;
    cout<<"objects no: "<<Test::getCount()<<endl;
    Test ob3;
    cout<<"objects no: "<<Test::getCount()<<endl;

    cout<<"Total no of objects created: "<<Test::ob_count<<endl;
    return 0;
}
