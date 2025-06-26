#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter no. of a and b :";
    cin>>a>>b;
    char operation;
    cout<<"Arithmetic Operation which you want to apply in a and b :";
    cin>>operation;
    switch(operation)
    {
        case '+':
        cout<<"Addition of a and b :"<<a+b<<endl;
        break;
        case '-':
        cout<<"Subtraction of a and b :"<<a-b<<endl;
        break;
        case '*':
        cout<<"Multiplication of a and b :"<<a*b<<endl;
        break;
        case '/':
        cout<<"Divide of a and b :"<<a/b<<endl;
        break;
        case '%':
        cout<<"Module of a and b :"<<a%b<<endl;
        break;
        default:
        cout<<"Invalid choice";
        break;
    }
return 0;
}