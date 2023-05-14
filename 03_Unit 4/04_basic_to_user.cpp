#include<iostream>
using namespace std;
class Distance
{
    int centimeter;
    float meter;
    public:

    Distance(float cm):centimeter(cm)
    {
        meter=static_cast<float>(centimeter)/100;
    }
    void display()
    {
        cout<<centimeter <<"cm = "<<meter<<"m"<<endl;
        return;
    }
};
int main()
{
    Distance d=126;
    d.display();
    return 0;
}
