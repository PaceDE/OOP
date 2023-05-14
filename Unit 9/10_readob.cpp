#include<iostream>
#include<fstream>
using namespace std;
class Rectangle
{
    int length;
    int breadth;
    int height;
public:
    void show()
    {
        cout<<"length: "<<length<<endl<<"breadth: "<<breadth<<endl;
    }
};
int main()
{
    Rectangle obj;
    ifstream  outfile;
    ifstream.open("./file/test.dat",ios::in);
    outf.write((char*)&obj,sizeof(obj));
    outf.close();
}
