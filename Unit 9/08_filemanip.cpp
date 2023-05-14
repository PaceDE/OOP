#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
    int i=0;
    string c="Messiiiiiii";
    fstream file;
    file.open("./file/Barca.txt",ios::out);
while(c[i]!='\0')
{

        file.put(c[i]);
        i++;

}
        file.close();


    return 0;
}

