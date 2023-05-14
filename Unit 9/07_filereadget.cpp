#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("./file/Barca.txt",ios::out);
   file.seekp(20,ios::cur);
    file<<"hello world"<<endl;
   int i=file.tellp();
    cout<<i;
    file.close();
    return 0;
}

