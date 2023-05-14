#include<iostream>
using namespace std;
class result
{
    float marks;
public:
    result(float m):marks(m){}
    bool operator ==(const result &ob)
    {
        if(marks==ob.marks)
            return true;
        else
            return false;
    }
};
int main()
{
    result r1(81),r2(81);
    if(r1==r2)
        cout<<"Both marks are equal";
    else
        cout<<"Two marks are different";

        return 0;
}
