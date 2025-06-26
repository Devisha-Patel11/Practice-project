#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the no. a : ";
    cin>>a;
    cout<<"Enter the no. b: ";
    cin>>b;
    cout<<"Enter the no. c: ";
    cin>>c;
    if(a>b  && a>c ){
        cout<<"The no. a is Largest. ";
    }
    else if (b>a  && b>c ){
        cout<<"The no. b is largest. ";
    }
    else {
        cout<<"The no. c is largest.";
    }
    return 0;
}