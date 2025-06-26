#include<iostream>
using namespace std;
int main(){
    int a,rev=0,n;
    cout<<"Enter the no :";
    cin>>a;
    cout<<"The reverse of the no. is : ";
    while(a>0)
    {
        n=a%10;
        rev=rev*10+n;
        a=a/10;
    }
    cout<<rev;
    return 0;
}