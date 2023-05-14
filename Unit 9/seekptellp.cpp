#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file1("./file/Leo Messi.txt",ios::app);
    fstream file2("./file/LeoMessi.txt",ios::ate);

    file1<<"Hahah pendu";
    file2<<"Hahah pendu";
    file1.close();
    file2.close();
    return 0;
}
