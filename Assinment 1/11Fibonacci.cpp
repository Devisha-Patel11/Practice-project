#include<iostream>
using namespace std;
int main(){
    int n,c,a=0,b=1;
    cout<<"Enter the no :";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}