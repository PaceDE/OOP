#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    char s[]="\nHello Messi";
    file.open("./file/Barca.txt",ios::app);
    file.write(s,12);
    return 0;
}
