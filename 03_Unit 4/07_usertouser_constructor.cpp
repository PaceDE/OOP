#include<iostream>
using namespace std;


class Dollar{
int dollar;
public:
    Dollar(int a):dollar(a){}

    int get_dollar()
    {
        return dollar;
    }

    int display()
    {
        return dollar;
    }


};
class Rupee{
    float rupee;
    public:
        Rupee(){}
        Rupee(float r):rupee(r){}

        Rupee(Dollar &d1)
        {
            int temp=d1.get_dollar();
            rupee=temp*136.7;
        }
    float display()
    {
        return rupee;
    }
};

int main()
{
    Dollar d(2);
    Rupee r=d;

    cout<<d.display()<<"$ = RS "<<r.display()<<endl;
    return 0;


}
