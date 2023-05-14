#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream file;
    file.open("./file/Barca.txt",ios::in);

    int i=file.tellg();
    cout<<i<<endl;;
    file.seekg(5,ios::cur);
    i=file.tellg();
    cout<<i<<endl;
    file.seekg(5,ios::end);
    i=file.tellg();
    cout<<i<<endl;;
    file.close();
    return 0;


}
