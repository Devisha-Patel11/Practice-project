#include<iostream>
using namespace std;
int main(){
int num1, num2,n;
cout<<"Enter the number : "<<endl;
cin>>num1>>num2;
while(num2!=0){
    int temp =num2;
    num2=num1%num2;
    num1=temp;
}
cout<<"HCF is : "<<num1<<endl;
return 0;
}