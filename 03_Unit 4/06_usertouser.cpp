#include<iostream>
using namespace std;
class Rupee{
    float rupee;
    public:
        Rupee(){}
        Rupee(float r):rupee(r){}
    float display()
    {
        return rupee;
    }
};

class Dollar{
int dollar;
public:
    Dollar(int a):dollar(a){}
    operator Rupee(){
        float temp=dollar*136.6;

        Rupee r1(temp);
        return r1;
    }

    int display()
    {
        return dollar;
    }


};

int main()
{
    Dollar d(2);
    Rupee r=d;

    cout<<d.display()<<"$ = RS "<<r.display()<<endl;
    return 0;


}
