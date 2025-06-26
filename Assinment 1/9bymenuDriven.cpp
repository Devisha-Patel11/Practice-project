#include<iostream>
using namespace std;
int main(){
    int choice;
    int a,b,c;
    do{
        cout<<"case 1: Sum Of Numbers."<<endl;
        cout<<"case 2: Subtraction Of Numbers."<<endl;
        cout<<"case 3: Multiplication Of Numbers."<<endl;
        cout<<"case 4: Divide Of Numbers."<<endl;
        cout<<"case 5: Existing Program."<<endl;
    cout<<"Enter choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter no. a : ";
        cin>>a;
        cout<<"Enter no. b : ";
        cin>>b;
        c=a+b;
        cout<<"Sum of a and b : "<<c<<endl;
        break;
        case 2:
        cout<<"Enter no. a : ";
        cin>>a;
        cout<<"Enter no. b : ";
        cin>>b;
        c=a-b;
        cout<<"Subtraction of a and b : "<<c<<endl;
        break;
        case 3:
        cout<<"Enter no. a : ";
        cin>>a;
        cout<<"Enter no. b : ";
        cin>>b;
        c=a*b;
        cout<<"Multiplaction of a and b : "<<c<<endl;
        break;
        case 4:
        cout<<"Enter no. a : ";
        cin>>a;
        cout<<"Enter no. b : ";
        cin>>b;
        c=a/b;
        cout<<"Divide of a and b : "<<c<<endl;
        break;
        case 5: 
        cout<<"Existing the program"<<endl;
        cout<<"     Thank You    "<<endl;
        break;
        default:
        cout<<"Invalid Input"<<endl;
        break;
    }
    }while(choice!=5);
return 0;
}