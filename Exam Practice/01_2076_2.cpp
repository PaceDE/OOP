#include<iostream>
using namespace std;
class Distance
{
    int feet;
    int inch;
public:
    Distance(){}
    Distance(int f,int i):feet(f),inch(i){}
    void ddisplay()
    {
        cout<<"Total height: "<<feet<<"."<<inch<<endl;
    }
    friend Distance operator +(Distance &d1,Distance &d2);


};

Distance operator +(Distance &d1,Distance &d2)
{
    Distance temp;
    temp.inch=d1.inch+d2.inch;
    temp.feet=d1.feet+d2.feet+(temp.inch/12);
    temp.inch=temp.inch%12;
    return temp;
}
int main()
{
    Distance d1(5,8),d2(5,5),d3;
    d3=d1+d2;
    d1.ddisplay();
    d2.ddisplay();
    d3.ddisplay();
    return 0;

}

