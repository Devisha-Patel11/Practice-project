#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers(a and b): ";
    cin >> a >>b;
    try{
        if (b==0){
            throw"Divide by zero error";
        }
        cout<<"Result is :"<<a/b<<endl;
    }
    catch(const char*msg){
        cout<<"Exception Caught : "<<msg<<endl;
    }
return 0;
}