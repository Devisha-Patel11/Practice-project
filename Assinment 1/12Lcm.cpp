#include<iostream>
using namespace std;
int main(){
    int a,b,max;
    cout<<"Enter the value of a and b : ";
    cin>>a>>b;
    if (a<b){
    max=b;
    }
    else
    max=a;
    for (int i=max; ;i++){
        if( i % a == 0 && i % b == 0){
            cout<<"L.C.M. of " << a <<" and "<< b << " is : "<<i<<endl;
            break;
        }
    }
    return 0;
}