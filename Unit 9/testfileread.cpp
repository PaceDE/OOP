#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;
    char s[12];
    file.open("./file/Barca.txt",ios::in);

        file.read(s,12);
        cout<<s;

    return 0;
}
