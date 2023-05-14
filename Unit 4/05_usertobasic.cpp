#include<iostream>
using namespace std;
class convert
{
    float kg;
public:
    convert(float k):kg(k){}
    operator int()
    {
        int gram;
        gram=int(kg*1000);
        return gram;
    }
};
int main()
{
    convert c(1);
    int gm=c;
    cout<<"1 kg ="<<gm<<" gram"<<endl;
    return 0;
}
