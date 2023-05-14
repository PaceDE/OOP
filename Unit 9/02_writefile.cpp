#include<iostream>
#include<fstream>
using namespace std;
int main()
{

    ofstream file("./file/Leo Messi.txt",ios::out);
    if(!file)
    {
        cout<<"File cannot be created"<<endl;
    }
    else
    {
        cout<<"File created succesfully"<<endl;
        file<<"This is Leo Messi \nAnd I'm the GOAT WC Winner better than Pendu \nThank you!!";
        file.close();
    }
    return 0;

}
