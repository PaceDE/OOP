#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("../file/Leo Messi.txt",ios::app);
    if(!file)
    {
        cout<<"Error opening file!!"<<endl;
    }
    else
    {
        file<<"\nWhere are you Penaldo";
        file.close();

    }
}
