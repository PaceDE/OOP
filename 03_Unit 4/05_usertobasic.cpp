#include<iostream>
using namespace std;
class converter
{
    float kg;
public:
    converter(float k):kg(k){}
   operator int()
    {
        int gram;
        gram=static_cast<int>(kg*1000);
        return gram;
    }
};
int main()
{
    converter c(1);
    int gm=c;
    cout<<"1 kg ="<<gm<<" gram"<<endl;
    return 0;
}
