#include<iostream>
#include<string.h>

using namespace std;
void reverseit(string& b)
{
    int len,i;
    len=b.length();
    cout<<len<<end   l;
    int j=len-1;
    for(i=0;i<len/2;i++)
    {
        char temp;
        temp=b[i];
        b[i]=b[j];
        b[j]=temp;
        j--;
    }

}
int main()
{
    string c="Harry";
    reverseit(c);
    cout<<c;
    return 0;
}
