#include<iostream>
#include<string.h>
#include<math.h>
#include<fstream>
using namespace std;
int newOrder(string name)
{
    string name2=name+" order history";
    int ch, quantity;
    ofstream op;
    op.open(name2,ios::app);
    cout<<"\nEnter the item code for the product you wish to order \n";
    cout<<"1. Tires\n2. Lights\n3. Oil \n";
    cin>>ch;
    cout<<"\nEnter the quantity of product you want\n";
    cin>>quantity;
    if(ch==1)
    {
        op<<"\nItem = Tires\n";
        op<<"Quantity = "<<quantity;
    }
    if(ch==2)
    {
        op<<"\nItem = Lights\n";
        op<<"Quantity = "<<quantity; 
    }
    if(ch==3)
    {
        op<<"\nItem = Oil\n";
        op<<"Quantity = "<<quantity;
    }
    cout<<"Your order has been successfully placed and can be seen by checking your order history";
    return 0;
}
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
    string name="",name2="";
    int ch;
    cout<<"Please enter your name";
    cin>>name;
    name2=name+" order history";
    ofstream op;
    ofstream opx;
    op.open(name,ios::app);
    cout<<"If you wish to make a new order, please press 1. Else, press 0";
    cin>>ch;
    if(ch==1)
    newOrder(name);
    return 0;

}


int main()
{
    int ch;
    cout<<"If you are a new customer, please press 0, otherwise press 1";
    cin>>ch;
    if(ch==0)
    newCustomer();
    if(ch==1)
    {
        oldCustomer();
        
    }
    return 0;
}