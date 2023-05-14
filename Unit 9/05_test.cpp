#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file;

    string s; // char s[100] look line no 20
    file.open("./file/Barca.txt");
    if(!file)
    {
        cout<<"error"<<endl;
    }
    else
        {

          while(!file.eof())
          {
              getline(file,s);   //Alternative file.getline(s,100) s is char of size 100
                cout<<s<<endl;
          }

        }
        file.close();
        return 0;

}
