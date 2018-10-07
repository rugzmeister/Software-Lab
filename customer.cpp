#include<iostream>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;
int newCustomer()//new customer registration function
{
    string name="", phoneNumber="", address="",name2="";
    cout<<"\nEnter your name\n";
    cin>>name;
    ofstream op;
    ofstream opx;
    name2=name+" order history";
    opx.open(name2);
    opx.close();
    op.open(name,ios::app);//append mode 
    op<<"Customer Name = "<<name<<"\n";
    cout<<"\n Enter your phone number\n";
    cin>>phoneNumber;
    cout<<"\n Enter your address\n";
    cin>>address;
    op<<"Contact number = "<<phoneNumber<<"\n";
    op<<"Address = "<<address<<"\n";
    op.close();
    cout<<"Registration Successful";
    return 0;

}
int oldCustomer()
{
    string name="";
    cout<<"Please enter your name";
    return 0;

}

int main()
{
    int ch;
    cout<<"If you are a new customer, please press 0, otherwise press 1";
    cin>>ch;
    if(ch==0)
    newCustomer();
    return 0;
}