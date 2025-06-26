#include<iostream>
using namespace std;
int main(){
    int a,rev=0,n,c;
    cout<<"Enter the no :";
    cin>>a;
    c=a;
    cout<<"The reverse of the no. is : ";
    while(a>0)
    {
        n=a%10;
        rev=rev*10+n;
        a=a/10;
    }
    cout<<rev<<endl;
    if(rev==c)
    cout<<"The no. is polindrome"<<endl;
    else 
    cout<<"The no. is not polindrome"<<endl;
    return 0;
}