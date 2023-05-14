#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Leo.txt",ios::out);
    if(!file)
    {
        cout<<"File cannot be created"<<endl;
    }
    else
    {
        cout<<"File created succesfully"<<endl;
        file.close();
    }
    return 0;

}
