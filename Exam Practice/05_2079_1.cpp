#include<iostream>
using namespace std;
class Author
{
    string name;
    string qualification;
public:
    void getdata()
    {
        cout<<"Enter the name of author: ";
        getline(cin,name);
        cout<<"Enter the qualification: ";
        getline(cin,qualification);
    }
    void putdata()
    {
        cout<<"Name of author: "<<name<<endl;
        cout<<"Qualification of author: "<<qualification<<endl;
    }
};
class Publication
{
    string pname;
public:
     void getdata()
    {
        cout<<endl<<"Enter the name of publication: ";
        getline(cin,pname);
    }
    void putdata()
    {
        cout<<"Name of publication: "<<pname<<endl;

    }
};
class Book:public Author,public Publication
{
    string title;
    float price;
public:
     void getdata()
    {
        cout<<endl<<"Enter the title of book: ";
        getline(cin,title);
        cout<<"Enter the price of book: ";
        cin>>price;
    }
    void putdata()
    {
        cout<<endl<<"Name of book: "<<title<<endl;
        cout<<"Price of book: "<<price<<endl;
    }

};

int main()
{
    Book b;
    b.Author::getdata();
    b.Publication::getdata();
    b.getdata();
    cout<<"\n\n==============INFO================"<<endl;
    b.Author::putdata();
    b.Publication::putdata();
    b.putdata();


}
