#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    char ch;
    ifstream file;
    file.open("../file/Leo Messi.txt",ios::in);
    if(!file)
        {
            cout<<"Error opening file!!"<<endl;
        }
    else
    {
        while(!file.eof())
        {
            file>>ch;
            cout<<ch;
        }
        file.close();
    }

}
