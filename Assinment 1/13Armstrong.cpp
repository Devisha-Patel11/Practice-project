#include<iostream>
using namespace std;
int main(){
    int a,arm=0,n,c;
    cout<<"Enter the no :";
    cin>>a;
    c=a;
    while(a>0)
    {
        n=a%10;
        arm=(n*n*n)+arm;
        a=a/10;
    }
    if(c==arm)
    cout<<"The no. "<<c<<" is a armstrong no."<<endl;
    else
    cout<<"The no. "<<c<<" is a armstrong no."<<endl;
    return 0;
}