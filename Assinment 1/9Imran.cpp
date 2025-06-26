#include<iostream>
using namespace std;
int main()
{
    int choice;
    long int a,b,c;
    do
    {
        cout<<"1- sum of two numbers"<<endl;
        cout<<"2- substraction of two numbers"<<endl;
        cout<<"3- Multiply of two numbers"<<endl;
        cout<<"4- Divison of two numbers"<<endl;
        cout<<"5- exiting from program"<<endl;
cout<<"Enter the choice"<<endl;
cin>>choice;
switch(choice)
{
    case 1:
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b; 
        c=a+b;
        cout<<"sum of numbers = "<<c<<endl;
        break;
    }
    case 2:
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
        c=a-b;
        cout<<"substraction of two numbers = "<<c<<endl;
        break;
    }
    case 3:
    {
    cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
        c=a*b;
        cout<<"multiplication of two numbers = "<<c<<endl;
        break;
    }
    case 4:
    {
        cout<<"enter the value of a"<<endl;
        cin>>a;
        cout<<"enter the value of b"<<endl;
        cin>>b;
        c=a/b;
        cout<<"divison of two number = "<<c<<endl;
        break;
    }
    case 5:
    {
        cout<<"exiting by program"<<endl;
        cout<<"->> thanks <<-"<<endl;
        break;
    }
    default:
    {
        cout<<"wrong input"<<endl;
        break;
    }

}
    } while (choice!=5);
    
}