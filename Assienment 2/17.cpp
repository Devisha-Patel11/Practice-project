#include<iostream>
using namespace std;
template <class T>
void swapValues(T &a,T &b){
    T temp = a;
    a=b;
    b=temp;
}
int main(){
    int x=10,y=20;
    cout<<"Before swapping(int): x = "<<x<<" , y = "<<y<<endl;
    swapValues(x,y);
    cout<<"After swapping(int): x= "<<x<<" , y= "<<y<<endl;
return 0;
}